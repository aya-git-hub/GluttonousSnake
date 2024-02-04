#-------------------------------------------------
#
# Project created by QtCreator 2020-11-19T18:06:19
#
#-------------------------------------------------

QT       += core gui
CONFIG   +=console #调用控制台
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = snk #用于指定生成exe的名字
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        myqt.cpp \
    ../tcs/food.cpp \
    ../tcs/pause.cpp \
    ../tcs/screen.cpp \
    ../tcs/snake.cpp \
    ../tcs/wall.cpp

HEADERS += \
        myqt.h \
    ../tcs/food.h \
    ../tcs/pause.h \
    ../tcs/screen.h \
    ../tcs/snake.h \
    ../tcs/wall.h \
    using.h

FORMS += \
        myqt.ui
