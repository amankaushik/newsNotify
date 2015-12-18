TEMPLATE = subdirs
CONFIG += ordered nostrip
SUBDIRS = QtCore QtGui QtHelp QtMultimedia QtMultimediaWidgets QtNetwork QtOpenGL QtPrintSupport QtQml QtQuick QtSql QtSvg QtTest QtWebKit QtWebKitWidgets QtWidgets QtXml QtXmlPatterns QtDesigner QtDBus _QOpenGLFunctions_2_0 _QOpenGLFunctions_2_1 _QOpenGLFunctions_4_1_Core QtSensors QtSerialPort QtX11Extras QtBluetooth QtPositioning QtQuickWidgets QtWebSockets Enginio Qt pylupdate pyrcc designer qmlscene

init_py.files = /home/amankaushik/pyProjects/newsnotify/PyQt/__init__.py
init_py.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += init_py

uic_package.files = /home/amankaushik/pyProjects/newsnotify/PyQt/pyuic/uic
uic_package.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += uic_package

pyuic5.files = pyuic5
pyuic5.path = /home/amankaushik/pyProjects/newsnotify/env/bin
INSTALLS += pyuic5
