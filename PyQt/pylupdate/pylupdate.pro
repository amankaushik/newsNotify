TARGET = pylupdate5
TEMPLATE = app
QT -= gui
QT += xml
CONFIG += warn_on release
CONFIG -= android_install
target.path = /home/amankaushik/pyProjects/newsnotify/env/bin
INSTALLS += target
INCLUDEPATH += /home/amankaushik/pyProjects/newsnotify/PyQt/pylupdate
VPATH = /home/amankaushik/pyProjects/newsnotify/PyQt/pylupdate
HEADERS = translator.h proparser.h simtexth.h metatranslator.h
SOURCES = numberh.cpp simtexth.cpp translator.cpp proparser.cpp fetchtr.cpp main.cpp metatranslator.cpp sametexth.cpp merge.cpp