#TEMPLATE = app

QT += qml quick
CONFIG += c++11

#CONFIG += qtquickcompiler

LIBS        += -L$$PWD/lib tag.lib
INCLUDEPATH += $$PWD/taglib

SOURCES += \
    main.cpp \
    tagreader.cpp \
    contentsprovider.cpp \
    workerthread.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
#include(deployment.pri)

#HEADERS += \

HEADERS += \
    tagreader.h \
    contentsprovider.h \
    workerthread.h

