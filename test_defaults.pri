QT += testlib core
CONFIG += console c++14
CONFIG -= app_bundle gui

TEMPLATE = app

unix {
    message("Build: unix. Unselect Shadow Build option.");
    LIBS += -L$$SRC_DIR/src -lselsort
} else {
    message("Build: windows");
    LIBS += -L$$SRC_DIR/src/debug -lselsort
}

unix {
    release: DESTDIR = build/release
    debug:   DESTDIR = build/debug

    OBJECTS_DIR = $$DESTDIR/.obj
    MOC_DIR = $$DESTDIR/.moc
    RCC_DIR = $$DESTDIR/.qrc
    UI_DIR = $$DESTDIR/.ui
}
