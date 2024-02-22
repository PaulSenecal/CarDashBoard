QT       += core gui
QT += widgets
QT += gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    app/appdashboard.cpp \
    call/calldashboard.cpp \
    main.cpp \
    mainwindow.cpp \
    music/musicdashboard.cpp \
    setting/settingdashboard.cpp

HEADERS += \
    app/appdashboard.h \
    call/calldashboard.h \
    mainwindow.h \
    music/musicdashboard.h \
    setting/settingdashboard.h


FORMS += \
    app/appdashboard.ui \
    call/calldashboard.ui \
    mainwindow.ui \
    music/musicdashboard.ui \
    setting/settingdashboard.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    recources.qrc
