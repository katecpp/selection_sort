include(../defaults.pri)

CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = lib

TARGET = selsort

SOURCES += \
    CFoo.cpp
HEADERS += \
    SelectionSort.h \
    CFoo.h
