import sys
import configparser
from PyQt5.QtWidgets import (QWidget, QPushButton, QApplication, QMainWindow, QMessageBox)
from PyQt5.QtGui import (QFont, QIcon)
from PyQt5.QtCore import QCoreApplication
from PyQt5.uic import loadUi
from NewsGetter import HackerNewsAPIImpl

class NewsNotifyUI(QMainWindow):
    def __init__(self, qtCreatorFile):
    	super().__init__()
    	self.startUI()

    def startUI(self):
    	loadUi(qtCreatorFile, self)
    	self.b_getNews.clicked.connect(self.getNews)
    	self.t_displayNews.tabBarClicked.connect(self.getInfo)
    	#self.tt_new.clicked.connect(self.getNews)
    	self.show()
    
    def getNews(self):
    	sender = self.sender()
    	#self.statusBar.showMessage(sender.text() + ' was pressed !')
    	hackerNewsAPIImpl = HackerNewsAPIImpl()
    	print('Getting Story IDs ... ')
    	idList = hackerNewsAPIImpl.getStoryIDs(topStoriesBaseUrl, reponseFormat, limit)
    	print('Story IDs retrived ... ')
    	print('checking for redundancy ...')
    	finalIDList = hackerNewsAPIImpl.checkRedundantIDs(idList)	
    	print('Checked.')

    	if not finalIDList:
    		self.statusBar.showMessage('No New Stories :(')
    		print ('No new stories')
    	else:
    		print('Getting Story Content ... ')
    		hackerNewsItemList = hackerNewsAPIImpl.getStories(finalIDList, storyBaseUrl, reponseFormat)
    		print('All Stories retrived.')
    		util = HackerNewsAPIImpl.Utils()
    		util.wiriteJSONToFile('stories.txt', hackerNewsItemList)
    		self.statusBar.showMessage('New Stories Updated :)')

    def getInfo(self):
    	sender = self.sender()
    	self.statusBar.showMessage(str(sender.currentIndex()))

    def closeEvent(self, event):
   		reply = QMessageBox.question(self, 'Message', 'Quit ?', QMessageBox.Yes | QMessageBox.No, QMessageBox.No)
   		if reply == QMessageBox.Yes:
   			event.accept()
   		else:
   			event.ignore()

if __name__ == "__main__":
	config = configparser.ConfigParser()
	config.read('config.ini')
	qtCreatorFile = config['ui']['uiFile']
	#Ui_MainWindow, QtBaseClass = loadUi(qtCreatorFile)
	print('Reading Configuration File ... ')
	config = configparser.ConfigParser()
	config.read('config.ini')
	hnProperty = config['hackernews']
	
	storyBaseUrl = hnProperty['storyBaseUrl']
	reponseFormat = hnProperty['fromat']
	topStoriesBaseUrl = hnProperty['topStoriesBaseUrl']
	limit = int(config['default']['hnLimit'])
	'''
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
	'''
	app = QApplication(sys.argv)
	window = NewsNotifyUI(qtCreatorFile)
	sys.exit(app.exec_())
