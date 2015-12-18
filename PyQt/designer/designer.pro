CONFIG      += plugin release warn_on
QT          += designer

# Work around QTBUG-39300.
CONFIG -= android_install

TARGET      = pyqt5
TEMPLATE    = lib

INCLUDEPATH += /usr/include/python3.4m
LIBS        += -L -lpython3.4m
DEFINES     += PYTHON_LIB=\\\"libpython3.4m.so\\\"

SOURCES     = pluginloader.cpp
HEADERS     = pluginloader.h

# Install.
target.path = /home/amankaushik/Qt5.3.0/5.3/gcc_64/plugins/designer

python.path = /home/amankaushik/Qt5.3.0/5.3/gcc_64/plugins/designer
python.files = python

INSTALLS    += target python

INCLUDEPATH += /home/amankaushik/pyProjects/newsnotify/PyQt/designer
VPATH = /home/amankaushik/pyProjects/newsnotify/PyQt/designer

