include(../defaults.pri)

CONFIG += console c++14
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    test_selectionsort.cpp

LIBS += -L../src -lselsort
QT       += testlib
QT       -= gui

TARGET = tests

DEFINES += SRCDIR=\\\"$$PWD/\\\"
