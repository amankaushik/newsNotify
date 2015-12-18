TEMPLATE = lib
CONFIG += warn_on plugin
QT += sensors
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtSensors.pyd
    target.files = QtSensors.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = QtSensors.so
    target.files = QtSensors.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/QtSensors
sip.files = ../sip/QtSensors/qorientationsensor.sip ../sip/QtSensors/QtSensorsmod.sip ../sip/QtSensors/qsensor.sip ../sip/QtSensors/qgyroscope.sip ../sip/QtSensors/qambientlightsensor.sip ../sip/QtSensors/qambienttemperaturesensor.sip ../sip/QtSensors/qaltimeter.sip ../sip/QtSensors/qproximitysensor.sip ../sip/QtSensors/qlightsensor.sip ../sip/QtSensors/qmagnetometer.sip ../sip/QtSensors/qholstersensor.sip ../sip/QtSensors/qdistancesensor.sip ../sip/QtSensors/qcompass.sip ../sip/QtSensors/qpressuresensor.sip ../sip/QtSensors/qtiltsensor.sip ../sip/QtSensors/qrotationsensor.sip ../sip/QtSensors/qtapsensor.sip ../sip/QtSensors/qaccelerometer.sip ../sip/QtSensors/qirproximitysensor.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtSensors.exp
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

TARGET = QtSensors
HEADERS = sipAPIQtSensors.h
SOURCES = sipQtSensorscmodule.cpp sipQtSensorsQAccelerometer.cpp sipQtSensorsQProximityFilter.cpp sipQtSensorsQSensor.cpp sipQtSensorsQSensorFilter.cpp sipQtSensorsQOrientationReading.cpp sipQtSensorsQGyroscopeReading.cpp sipQtSensorsQPressureSensor.cpp sipQtSensorsQAmbientLightFilter.cpp sipQtSensorsQProximitySensor.cpp sipQtSensorsQLightReading.cpp sipQtSensorsQTapReading.cpp sipQtSensorsQTiltFilter.cpp sipQtSensorsQIRProximityFilter.cpp sipQtSensorsQMagnetometerReading.cpp sipQtSensorsQMagnetometerFilter.cpp sipQtSensorsQList0101QSensorFilter.cpp sipQtSensorsQHolsterSensor.cpp sipQtSensorsQOrientationSensor.cpp sipQtSensorsQAltimeter.cpp sipQtSensorsQAmbientLightReading.cpp sipQtSensorsQPressureReading.cpp sipQtSensorsQCompassReading.cpp sipQtSensorsQAccelerometerFilter.cpp sipQtSensorsQAmbientTemperatureFilter.cpp sipQtSensorsQCompass.cpp sipQtSensorsQRotationSensor.cpp sipQtSensorsQTiltReading.cpp sipQtSensorsQRotationReading.cpp sipQtSensorsQProximityReading.cpp sipQtSensorsQMagnetometer.cpp sipQtSensorsQHolsterReading.cpp sipQtSensorsQTapSensor.cpp sipQtSensorsQAccelerometerReading.cpp sipQtSensorsQIRProximityReading.cpp sipQtSensorsQTiltSensor.cpp sipQtSensorsQOrientationFilter.cpp sipQtSensorsQSensorReading.cpp sipQtSensorsQAmbientTemperatureReading.cpp sipQtSensorsQGyroscope.cpp sipQtSensorsQTapFilter.cpp sipQtSensorsQLightFilter.cpp sipQtSensorsQPressureFilter.cpp sipQtSensorsQGyroscopeFilter.cpp sipQtSensorsQCompassFilter.cpp sipQtSensorsQAltimeterFilter.cpp sipQtSensorsQAltimeterReading.cpp sipQtSensorsqoutputrange.cpp sipQtSensorsQAmbientTemperatureSensor.cpp sipQtSensorsQLightSensor.cpp sipQtSensorsQIRProximitySensor.cpp sipQtSensorsQHolsterFilter.cpp sipQtSensorsQRotationFilter.cpp sipQtSensorsQAmbientLightSensor.cpp sipQtSensorsQList0100qoutputrange.cpp
