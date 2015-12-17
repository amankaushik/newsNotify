import sys
from PyQt5.QtWidgets import (QWidget, QToolTip, QPushButton, QApplication, QMessageBox, QDesktopWidget)
from PyQt5.QtGui import QFont
from PyQt5.QtCore import QCoreApplication

class MyWindow(QWidget):
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
		#self.setGeometry(300, 300, 300, 220)
		self.resize(250, 150)
		self.center()
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

if __name__ == '__main__':
	app = QApplication(sys.argv)
	su = MyWindow()
	sys.exit(app.exec_())