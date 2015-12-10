# ADD LOGGING

import configparser
import json
import urllib.request as uReq

class HackerNewsAPIImpl:
	def __init__(self, baseUrl):
		self.baseUrl = baseUrl

	def getJsonResponse(self):
		pass


if __name__ == '__main__':
	config = configparser.ConfigParser()
	config.read('config.ini')
	hnProperty = config['hackernews']
	
	storyBaseUrl = hnProperty['storyBaseUrl']
	reponseFormat = hnProperty['fromat']
	topStoriesBaseUrl = hnProperty['topStoriesBaseUrl']

	topStoriesFinalUrl = topStoriesBaseUrl + reponseFormat
	try:
		response = uReq.urlopen(topStoriesFinalUrl)
	except HTTPError as err:
		print ('HTTPError: '.format(err))
	except URLError as err:
		print ('URLError: '.fromat(err))

	temp = response.read()
	print (temp.__class__)
	#print(response.read())

	#storyFinalUrl = storyBaseUrl + id + reponseFormat
	#hackerNewsAPIImpl = HackerNewsAPIImpl(baseUrl)