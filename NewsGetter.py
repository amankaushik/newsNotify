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

	def getStoryIDs(self, topStoriesBaseUrl, reponseFormat, limit):
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
			if 'url' in list(storyData.keys()):
				hackerNewsItem = HackerNewsItem()
				# JSON response inconsistanr, check if all keys exist for every response
				hackerNewsItem.id = storyData['id']
				hackerNewsItem.title = storyData['title']
				hackerNewsItem.url = storyData['url']
				hackerNewsItemList.append(hackerNewsItem)
				print('Story ' + str(count) + ' retrived.')
				count += 1
		return hackerNewsItemList


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
	print('Getting Story Content ... ')
	hackerNewsItemList = hackerNewsAPIImpl.getStories(idList, storyBaseUrl, reponseFormat)
	print('All Stories retrived.')

	print('Writing Stories to File ...')
	with open('stories.txt', 'w', encoding='utf8') as outF:
		for item in hackerNewsItemList:
			json.dump(item.__dict__, outF)

	print('Stories written to file')