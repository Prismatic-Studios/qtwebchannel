QT = core quick webchannel-private

INCLUDEPATH += ../../webchannel
VPATH += ../../webchannel

IMPORT_VERSION = 1.$$QT_MINOR_VERSION
TARGETPATH = QtWebChannel

SOURCES += \
    plugin.cpp

load(qml_plugin)
