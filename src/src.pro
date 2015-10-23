include(../defaults.pri)

CONFIG   += console
CONFIG   -= app_bundle
CONFIG   -= qt

TEMPLATE = lib

TARGET = selsort

SOURCES += \
    SelectionSort.cpp
HEADERS += \
    SelectionSort.h
