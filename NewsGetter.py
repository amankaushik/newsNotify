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
		for id in idList:
			storyFinalUrl = storyBaseUrl + str(id) + reponseFormat
			response = getResponse(storyFinalUrl)
			storyData = json.loads(response.read().decode("utf-8"))
			
			hackerNewsItem = HackerNewsItem()
			# JSON response inconsistanr, check if all keys exist for every response
			hackerNewsItem.id = storyData['id']
			hackerNewsItem.title = storyData['title']
			hackerNewsItem.url = storyData['url']
			hackerNewsItemList.append(hackerNewsItem)
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
	config = configparser.ConfigParser()
	config.read('config.ini')
	hnProperty = config['hackernews']
	
	storyBaseUrl = hnProperty['storyBaseUrl']
	reponseFormat = hnProperty['fromat']
	topStoriesBaseUrl = hnProperty['topStoriesBaseUrl']
	limit = int(config['default']['hnLimit'])

	hackerNewsAPIImpl = HackerNewsAPIImpl()
	idList = hackerNewsAPIImpl.getStoryIDs(topStoriesBaseUrl, reponseFormat, limit)
	hackerNewsItemList = hackerNewsAPIImpl.getStories(idList, storyBaseUrl, reponseFormat)
