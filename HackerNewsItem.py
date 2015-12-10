class HackerNewsItem(NewsItem):
	''' Class Modeling HackerNews news item. Inherits from NewsItem'''
	def __init__(self):
		self.id = 0
		self.numComments = 0
		self.numPoints = 0
		self.alive = 0
