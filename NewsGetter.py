# ADD LOGGING

import configparser
import json
import urllib.request as uReq
import urllib
from retryDeco import retry

class HackerNewsAPIImpl:
	def __init__(self, baseUrl):
		self.baseUrl = baseUrl

	def getJsonResponse(self):
		pass

@retry(urllib.error, tries=4, delay=3, backoff=2)
def getResponse(topStoriesFinalUrl):
	try:
		return uReq.urlopen(topStoriesFinalUrl)
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

	topStoriesFinalUrl = topStoriesBaseUrl + reponseFormat
	response = getResponse(topStoriesFinalUrl)
	stotyIDs = json.loads(response.read().decode("utf-8"))
	limit = config['default']['hnLimit']
	stotyIDs = stotyIDs[:int(limit)]

	print(len(stotyIDs))

	#storyFinalUrl = storyBaseUrl + id + reponseFormat
	#hackerNewsAPIImpl = HackerNewsAPIImpl(baseUrl)