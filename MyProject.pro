TEMPLATE = subdirs
CONFIG+=ordered
SUBDIRS = \
    src \
    tests

tests.depends = src

OTHER_FILES += \
    defaults.pri

