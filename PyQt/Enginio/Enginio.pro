TEMPLATE = lib
CONFIG += warn_on plugin
QT += enginio
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = Enginio.pyd
    target.files = Enginio.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = Enginio.so
    target.files = Enginio.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/Enginio
sip.files = ../sip/Enginio/enginioclientconnection.sip ../sip/Enginio/Enginiomod.sip ../sip/Enginio/enginioclient.sip ../sip/Enginio/enginioidentity.sip ../sip/Enginio/enginioreply.sip ../sip/Enginio/enginiomodel.sip ../sip/Enginio/enginio.sip ../sip/Enginio/enginiooauth2authentication.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=Enginio.exp
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

TARGET = Enginio
HEADERS = sipAPIEnginio.h
SOURCES = sipEnginioEnginioModel.cpp sipEnginioEnginioOAuth2Authentication.cpp sipEnginioEnginioReply.cpp sipEnginioEnginio.cpp sipEnginioEnginioClient.cpp sipEnginioEnginioIdentity.cpp sipEnginiocmodule.cpp sipEnginioEnginioClientConnection.cpp
