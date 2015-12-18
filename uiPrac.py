import sys
from PyQt5.QtWidgets import (QWidget, QToolTip, QPushButton, QApplication, QMessageBox, QDesktopWidget, 
	QMainWindow, QAction, qApp, QTextEdit, QHBoxLayout, QVBoxLayout, QGridLayout, QLCDNumber, QSlider)
from PyQt5.QtGui import (QFont, QIcon)
from PyQt5.QtCore import QCoreApplication, Qt

class MyWidget(QWidget):
	def __init__(self):
		super().__init__()
		self.startUI()

	def startUI(self):
		QToolTip.setFont(QFont('SansSerif', 10))
		self.setToolTip('This is a <b>QWidget</b> widget')
		btn = QPushButton('PressIt', self)
		btn.setToolTip('This is a <b>QPushButton</b> widget')
		btn.resize(btn.sizeHint())
		btn.move(50, 50)
		#btn.clicked.connect(QCoreApplication.instance().quit)
		'''
		w = QWidget(self)
		w.setWindowTitle('testing')
		w.setGeometry(400, 400, 100, 100)
		w.show()
		'''
		self.setGeometry(300, 300, 300, 220)
		#self.resize(250, 150)
		#self.center()
		#self.statusBar().showMessage('Ready')
		#self.setGeometry(300, 300, 250, 150)
		#self.setWindowTitle('Statusbar')    
		#self.show()		
		self.setWindowTitle('ToolTips')
		self.show()

	def closeEvent(self, event):
		reply = QMessageBox.question(self, 'Message', 'Quit ?', QMessageBox.Yes | QMessageBox.No, QMessageBox.No)
		if reply == QMessageBox.Yes:
			event.accept()
		else:
			event.ignore()

	def center(self):
		qr = self.frameGeometry()
		cp = QDesktopWidget().availableGeometry().center()
		qr.moveCenter(cp)
		self.move(qr.topLeft())

class MyWindow(QMainWindow):
	def __init__(self):
		super().__init__()
		self.startUI()

	def startUI(self):

		textEdit = QTextEdit()
		self.setCentralWidget(textEdit)

		exitAction = QAction(QIcon('exit.png'), '&Exit', self)        
		exitAction.setShortcut('Ctrl+Q')
		exitAction.setStatusTip('Exit application')
		exitAction.triggered.connect(self.close)
		self.statusBar()
		
		tExitAction = QAction(QIcon('exit.png'), 'Exit Now', self)
		tExitAction.setStatusTip('Exit Application Now')
		tExitAction.triggered.connect(qApp.quit)

		# MENUBAR
		menubar = self.menuBar()
		fileMenu = menubar.addMenu('&File')
		fileMenu.addAction(exitAction)

		# TOOLBAR
		self.toolbar = self.addToolBar('Exit Now')
		self.toolbar.addAction(tExitAction)

		self.setGeometry(300, 300, 300, 200)
		self.setWindowTitle('Menubar')    
		self.show()

class MyLayout(QWidget):
	def __init__(self):
		super().__init__()
		self.startUI()

	def startUI(self):
		okButton = QPushButton("Ok")
		cancleButton = QPushButton("Cancle")

		hBox = QHBoxLayout()
		hBox.addStretch(1)
		hBox.addWidget(okButton)
		hBox.addWidget(cancleButton)

		vBox = QVBoxLayout()
		vBox.addStretch(1)
		vBox.addLayout(hBox)

		#self.setLayout(vBox)
		grid = QGridLayout()
		self.setLayout(grid)

		names = ['1', '2', '3', 'A', 'B', 'C', '4', '5', '6', 'D','E', 'F']

		positions = [(i, j) for i in range(4) for j in range(3)]

		for position, name in zip(positions, names):
			button = QPushButton(name)
			grid.addWidget(button, *position)

		self.setGeometry(300, 300, 300, 220)
		self.setWindowTitle('Layout')
		self.show()

class MyEvents(QMainWindow): #QWidget
	def __init__(self):
		super().__init__()
		self.startUI()

	def startUI(self):
		#lcd = QLCDNumber(self)
		#sld = QSlider(Qt.Horizontal, self)

		#vBox = QVBoxLayout()
		#vBox.addWidget(lcd)
		#vBox.addWidget(sld)

		btn1 = QPushButton("button 1", self)
		btn1.move(30, 50)
		btn2 = QPushButton("button 2", self)
		btn2.move(150, 50)
		btn1.clicked.connect(self.buttonClicked)
		btn2.clicked.connect(self.buttonClicked)

		#self.setLayout(vBox)
		#sld.valueChanged.connect(lcd.display)
		self.statusBar()
		self.setGeometry(300, 300, 300, 220)
		self.show()

	def buttonClicked(self):
		sender = self.sender()
		self.statusBar().showMessage(sender.text() + ' was pressed !')

if __name__ == '__main__':
	app = QApplication(sys.argv)
	#su = MyWidget()
	#du = MyWindow()
	#k = MyLayout()
	e = MyEvents()
	sys.exit(app.exec_())