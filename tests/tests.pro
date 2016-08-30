include(../../defaults.pri)

TEMPLATE = subdirs

DEFINES += SRCDIR=\\\"$$PWD/\\\"

SUBDIRS += \
    Test_insertionSort \
    Test_selectionSort
