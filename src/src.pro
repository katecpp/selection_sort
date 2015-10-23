include(../defaults.pri)

CONFIG   += console
CONFIG   -= app_bundle
CONFIG   -= qt

TEMPLATE = lib

TARGET = myapp

SOURCES += \
    SelectionSort.cpp
HEADERS += \
    SelectionSort.h
