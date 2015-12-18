TEMPLATE = lib
CONFIG += warn_on plugin
QT += positioning
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtPositioning.pyd
    target.files = QtPositioning.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = QtPositioning.so
    target.files = QtPositioning.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/QtPositioning
sip.files = ../sip/QtPositioning/qgeosatelliteinfo.sip ../sip/QtPositioning/qgeopositioninfosource.sip ../sip/QtPositioning/qgeoareamonitorsource.sip ../sip/QtPositioning/qgeoshape.sip ../sip/QtPositioning/qgeorectangle.sip ../sip/QtPositioning/qgeocoordinate.sip ../sip/QtPositioning/qgeolocation.sip ../sip/QtPositioning/qgeopositioninfo.sip ../sip/QtPositioning/qgeoareamonitorinfo.sip ../sip/QtPositioning/qgeocircle.sip ../sip/QtPositioning/qnmeapositioninfosource.sip ../sip/QtPositioning/qgeosatelliteinfosource.sip ../sip/QtPositioning/QtPositioningmod.sip ../sip/QtPositioning/qgeoaddress.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtPositioning.exp
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

TARGET = QtPositioning
HEADERS = sipAPIQtPositioning.h
SOURCES = sipQtPositioningQGeoPositionInfo.cpp sipQtPositioningQGeoCircle.cpp sipQtPositioningQGeoPositionInfoSource.cpp sipQtPositioningQNmeaPositionInfoSource.cpp sipQtPositioningQGeoAreaMonitorSource.cpp sipQtPositioningQGeoPositionInfoSourcePositioningMethods.cpp sipQtPositioningQGeoSatelliteInfoSource.cpp sipQtPositioningQGeoCoordinate.cpp sipQtPositioningQList0100QGeoAreaMonitorInfo.cpp sipQtPositioningQGeoAreaMonitorSourceAreaMonitorFeatures.cpp sipQtPositioningQGeoRectangle.cpp sipQtPositioningQList0100QGeoSatelliteInfo.cpp sipQtPositioningQGeoAreaMonitorInfo.cpp sipQtPositioningQGeoSatelliteInfo.cpp sipQtPositioningQGeoAddress.cpp sipQtPositioningcmodule.cpp sipQtPositioningQList0100QGeoCoordinate.cpp sipQtPositioningQGeoLocation.cpp sipQtPositioningQGeoShape.cpp
