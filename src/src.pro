include(../defaults.pri)

CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = lib

TARGET = selsort

SOURCES += \
    data/CFoo.cpp
HEADERS += \
    data/CFoo.h \
    SelectionSort.h \
    InsertionSort.h \
    BubbleSort.h
