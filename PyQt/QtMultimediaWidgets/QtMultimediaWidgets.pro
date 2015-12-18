TEMPLATE = lib
CONFIG += warn_on plugin
QT += multimediawidgets multimedia
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtMultimediaWidgets.pyd
    target.files = QtMultimediaWidgets.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = QtMultimediaWidgets.so
    target.files = QtMultimediaWidgets.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/QtMultimediaWidgets
sip.files = ../sip/QtMultimediaWidgets/qgraphicsvideoitem.sip ../sip/QtMultimediaWidgets/QtMultimediaWidgetsmod.sip ../sip/QtMultimediaWidgets/qvideowidget.sip ../sip/QtMultimediaWidgets/qcameraviewfinder.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtMultimediaWidgets.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /home/amankaushik/pyProjects/newsnotify/sip/siplib
INCLUDEPATH += /usr/include/python3.4m

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
    QMAKE_LFLAGS += "-install_name $$absolute_path($$PY_MODULE, $$target.path)"

    greaterThan(QT_MINOR_VERSION, 4) {
        QMAKE_RPATHDIR += $$[QT_INSTALL_LIBS]
    }
}

TARGET = QtMultimediaWidgets
HEADERS = sipAPIQtMultimediaWidgets.h
SOURCES = sipQtMultimediaWidgetsQGraphicsVideoItem.cpp sipQtMultimediaWidgetsQCameraViewfinder.cpp sipQtMultimediaWidgetsQVideoWidget.cpp sipQtMultimediaWidgetscmodule.cpp
