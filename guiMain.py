import sys
import configparser
from PyQt5.QtWidgets import (QWidget, QPushButton, QApplication, QAction, qApp, QMainWindow, QDialog)
from PyQt5.QtGui import (QFont, QIcon)
from PyQt5.QtCore import QCoreApplication
from PyQt5.uic import loadUi

class NewsNotifyUI(QMainWindow):
    def __init__(self, qtCreatorFile):
    	super().__init__()
    	loadUi(qtCreatorFile, self)
    	self.show()

if __name__ == "__main__":
	config = configparser.ConfigParser()
	config.read('config.ini')
	qtCreatorFile = config['ui']['uiFile']
	#Ui_MainWindow, QtBaseClass = loadUi(qtCreatorFile)
	app = QApplication(sys.argv)
	window = NewsNotifyUI(qtCreatorFile)
	sys.exit(app.exec_())
