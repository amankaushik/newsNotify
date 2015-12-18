CONFIG      += plugin release warn_on
QT          += qml

# Work around QTBUG-39300.
CONFIG -= android_install

TARGET      = pyqt5qmlplugin
TEMPLATE    = lib

INCLUDEPATH += /usr/include/python3.4m /home/amankaushik/pyProjects/newsnotify/sip/siplib
LIBS        += -L -lpython3.4m

SOURCES     = pluginloader.cpp
HEADERS     = pluginloader.h

# Install.
target.path = /home/amankaushik/Qt5.3.0/5.3/gcc_64/plugins/PyQt5

python.path = /home/amankaushik/Qt5.3.0/5.3/gcc_64/plugins/PyQt5
python.files = python

INSTALLS    += target python

INCLUDEPATH += /home/amankaushik/pyProjects/newsnotify/PyQt/qmlscene
VPATH = /home/amankaushik/pyProjects/newsnotify/PyQt/qmlscene

