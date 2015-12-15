# ADD LOGGING

import configparser
import json
import urllib.request as uReq
import urllib.error as uErr
from retryDeco import retry
from collections import namedtuple
from HackerNewsItem import HackerNewsItem

class HackerNewsAPIImpl:
	def __init__(self):
		pass

	def checkRedundantIDs(self, idList):
		try:
			fFile = open('ids.txt', 'r')
		except (IOError, OSError) as err:
			print ("Could not open file: " + format(err))
		else:
			oldIDList = []
			for idd in fFile:
				oldIDList.append(int(idd))
		finally:
			fFile.close()
		try:
			fFile = open('ids.txt', 'w')
		except (IOError, OSError) as err:
			print ("Could not open file: " + format(err))
		else:
			for idd in idList:
				fFile.write(str(idd) + '\n')
		finally:
			fFile.close()
		
		return [idd for idd in idList if idd not in oldIDList]

	def getStoryIDs(self, topStoriesBaseUrl, reponseFormat, limit):
		storyIDs = []
		
		topStoriesFinalUrl = topStoriesBaseUrl + reponseFormat
		response = getResponse(topStoriesFinalUrl)
		storyIDs = json.loads(response.read().decode("utf-8"))
		storyIDs = storyIDs[:int(limit)]
		return storyIDs

	def getStories(self, idList, storyBaseUrl, reponseFormat):
		hackerNewsItemList = []
		count = 1;
		for id in idList:
			storyFinalUrl = storyBaseUrl + str(id) + reponseFormat
			response = getResponse(storyFinalUrl)
			storyData = json.loads(response.read().decode("utf-8"))
			if storyData is not None and 'url' in list(storyData.keys()):
				hackerNewsItem = HackerNewsItem()
				# JSON response inconsistant, check if all keys exist for every response
				hackerNewsItem.id = storyData['id']
				hackerNewsItem.title = storyData['title']
				hackerNewsItem.url = storyData['url']
				hackerNewsItemList.append(hackerNewsItem)
				print('Story ' + str(count) + ' retrived.')
				count += 1
		return hackerNewsItemList

class Utils:
	def wiriteJSONToFile(self, filename, collection):
		print('Writing Stories to File ...')
		with open(filename, 'w', encoding='utf8') as outF:
			for item in collection:
				json.dump(item.__dict__, outF)
		print('Stories written to file')

@retry(uErr, tries=4, delay=3, backoff=2)
def getResponse(url):
	try:
		return uReq.urlopen(url)
	except HTTPError as err:
		print ('HTTPError: '.format(err))
	except URLError as err:
		print ('URLError: '.fromat(err))

if __name__ == '__main__':
	print('Reading Configuration File ... ')
	config = configparser.ConfigParser()
	config.read('config.ini')
	hnProperty = config['hackernews']
	
	storyBaseUrl = hnProperty['storyBaseUrl']
	reponseFormat = hnProperty['fromat']
	topStoriesBaseUrl = hnProperty['topStoriesBaseUrl']
	limit = int(config['default']['hnLimit'])

	hackerNewsAPIImpl = HackerNewsAPIImpl()
	print('Getting Story IDs ... ')
	idList = hackerNewsAPIImpl.getStoryIDs(topStoriesBaseUrl, reponseFormat, limit)
	print('Story IDs retrived ... ')
	print('checking for redundancy ...')
	finalIDList = hackerNewsAPIImpl.checkRedundantIDs(idList)	
	print('Checked.')

	if not finalIDList:
		print ('No new stories')
	else:
		print('Getting Story Content ... ')
		hackerNewsItemList = hackerNewsAPIImpl.getStories(finalIDList, storyBaseUrl, reponseFormat)
		print('All Stories retrived.')
		util = Utils()
		util.wiriteJSONToFile('stories.txt', hackerNewsItemList)
	