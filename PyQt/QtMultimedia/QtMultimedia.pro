TEMPLATE = lib
CONFIG += warn_on plugin
QT += multimedia
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtMultimedia.pyd
    target.files = QtMultimedia.pyd
    LIBS += -L -lpython3.4m
} else {
    PY_MODULE = QtMultimedia.so
    target.files = QtMultimedia.so
}

target.CONFIG = no_check_exist
target.path = /home/amankaushik/pyProjects/newsnotify/env/lib/python3.4/site-packages/PyQt5
INSTALLS += target
sip.path = /home/amankaushik/pyProjects/newsnotify/env/share/sip/PyQt5/QtMultimedia
sip.files = ../sip/QtMultimedia/qmediaservice.sip ../sip/QtMultimedia/qmediaplayer.sip ../sip/QtMultimedia/qabstractvideofilter.sip ../sip/QtMultimedia/qaudiooutput.sip ../sip/QtMultimedia/qaudiorecorder.sip ../sip/QtMultimedia/qradiodata.sip ../sip/QtMultimedia/qaudiodeviceinfo.sip ../sip/QtMultimedia/qradiotuner.sip ../sip/QtMultimedia/qcamera.sip ../sip/QtMultimedia/qsound.sip ../sip/QtMultimedia/qcamerafocus.sip ../sip/QtMultimedia/qcameraexposure.sip ../sip/QtMultimedia/qaudioprobe.sip ../sip/QtMultimedia/qsoundeffect.sip ../sip/QtMultimedia/qvideosurfaceformat.sip ../sip/QtMultimedia/qmediaresource.sip ../sip/QtMultimedia/qmediatimerange.sip ../sip/QtMultimedia/qmediaencodersettings.sip ../sip/QtMultimedia/qmediarecorder.sip ../sip/QtMultimedia/qmediametadata.sip ../sip/QtMultimedia/qmediabindableinterface.sip ../sip/QtMultimedia/qmediaplaylist.sip ../sip/QtMultimedia/qaudiobuffer.sip ../sip/QtMultimedia/qpymultimedia_qlist.sip ../sip/QtMultimedia/qaudiodecoder.sip ../sip/QtMultimedia/qvideoprobe.sip ../sip/QtMultimedia/qabstractvideobuffer.sip ../sip/QtMultimedia/QtMultimediamod.sip ../sip/QtMultimedia/qaudio.sip ../sip/QtMultimedia/qmediaobject.sip ../sip/QtMultimedia/qaudioformat.sip ../sip/QtMultimedia/qmultimedia.sip ../sip/QtMultimedia/qcameraimageprocessing.sip ../sip/QtMultimedia/qcamerainfo.sip ../sip/QtMultimedia/qmediacontrol.sip ../sip/QtMultimedia/qcameraviewfindersettings.sip ../sip/QtMultimedia/qvideoframe.sip ../sip/QtMultimedia/qcameraimagecapture.sip ../sip/QtMultimedia/qmediacontent.sip ../sip/QtMultimedia/qaudioinput.sip ../sip/QtMultimedia/qabstractvideosurface.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtMultimedia.exp
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

TARGET = QtMultimedia
HEADERS = sipAPIQtMultimedia.h
SOURCES = sipQtMultimediaQMediaRecorder.cpp sipQtMultimediaQCameraImageCapture.cpp sipQtMultimediaQList0100QMediaContent.cpp sipQtMultimediaQAudioInput.cpp sipQtMultimediaQMediaTimeInterval.cpp sipQtMultimediaQAbstractVideoBuffer.cpp sipQtMultimediaQMediaService.cpp sipQtMultimediaQMediaTimeRange.cpp sipQtMultimediaQList0100QMediaResource.cpp sipQtMultimediaQRadioData.cpp sipQtMultimediaQList0100QAudioFormatSampleType.cpp sipQtMultimediacmodule.cpp sipQtMultimediaQCameraFocus.cpp sipQtMultimediaQList0100QMediaTimeInterval.cpp sipQtMultimediaQList0100QCameraFocusZone.cpp sipQtMultimediaQCameraLockTypes.cpp sipQtMultimediaQAudioDeviceInfo.cpp sipQtMultimediaQAudioEncoderSettings.cpp sipQtMultimediaQVideoFrame.cpp sipQtMultimediaQCamera.cpp sipQtMultimediaQCameraFocusZone.cpp sipQtMultimediaQMediaContent.cpp sipQtMultimediaQSoundEffect.cpp sipQtMultimediaQCameraCaptureModes.cpp sipQtMultimediaQVideoProbe.cpp sipQtMultimediaQAudio.cpp sipQtMultimediaQList0100QCameraInfo.cpp sipQtMultimediaQCameraExposureFlashModes.cpp sipQtMultimediaQCameraImageProcessing.cpp sipQtMultimediaQAudioDecoder.cpp sipQtMultimediaQAudioBuffer.cpp sipQtMultimediaQSound.cpp sipQtMultimediaQAbstractVideoSurface.cpp sipQtMultimediaQVideoEncoderSettings.cpp sipQtMultimediaQMediaControl.cpp sipQtMultimediaQMediaResource.cpp sipQtMultimediaQAudioRecorder.cpp sipQtMultimediaQMediaPlayerFlags.cpp sipQtMultimediaQCameraExposure.cpp sipQtMultimediaQCameraFocusFocusModes.cpp sipQtMultimediaQMediaBindableInterface.cpp sipQtMultimediaQCameraImageCaptureCaptureDestinations.cpp sipQtMultimediaQList0100QVideoFramePixelFormat.cpp sipQtMultimediaQMediaPlaylist.cpp sipQtMultimediaQAudioOutput.cpp sipQtMultimediaQMediaPlayer.cpp sipQtMultimediaQList0100QAudioDeviceInfo.cpp sipQtMultimediaQMultimedia.cpp sipQtMultimediaQAudioProbe.cpp sipQtMultimediaQVideoSurfaceFormat.cpp sipQtMultimediaQMediaObject.cpp sipQtMultimediaQMediaMetaData.cpp sipQtMultimediaQList0100QAudioFormatEndian.cpp sipQtMultimediaQAudioFormat.cpp sipQtMultimediaQImageEncoderSettings.cpp sipQtMultimediaQCameraInfo.cpp sipQtMultimediaQRadioTuner.cpp
