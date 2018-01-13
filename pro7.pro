#-------------------------------------------------
#
# Project created by QtCreator 2018-01-11T09:49:09
#
#-------------------------------------------------

QT       += core gui

TARGET = pro7
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    patternui.cpp \
    lightui.cpp \
    equipmentui.cpp \
    environmentui.cpp \
    switchbutton.cpp \
    test.cpp \
    win_qextserialport.cpp \
    serialcommunication.cpp \
    qextserialport.cpp \
    qextserialbase.cpp

HEADERS  += dialog.h \
    patternui.h \
    lightui.h \
    equipmentui.h \
    environmentui.h \
    switchbutton.h \
    test.h \
    serialcommunication.h \
    qextserialport.h \
    qextserialbase.h \
    win_qextserialport.h

FORMS    += dialog.ui \
    patternui.ui \
    lightui.ui \
    equipmentui.ui \
    environmentui.ui

RESOURCES += \
    img.qrc \
    img/pic.qrc
