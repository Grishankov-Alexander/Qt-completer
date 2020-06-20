QT += widgets
requires(qtConfig(completer))

RESOURCES += \
    completer.qrc

HEADERS += \
    fsmodel.h \
    mainwindow.h

SOURCES += \
    fsmodel.cpp \
    main.cpp \
    mainwindow.cpp
