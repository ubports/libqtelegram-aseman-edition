# This file generated by libqtelegram-code-generator.
# You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
# DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN


CONFIG += c++11

include(functions/functions.pri)
include(types/types.pri)
include(objects/typeobjects.pri)

HEADERS += \
    $$PWD/coretypes.h \
    $$PWD/telegramapi.h \
    $$PWD/telegramcore.h \
    $$PWD/telegramcore_globals.h

SOURCES += \
    $$PWD/telegramapi.cpp \
    $$PWD/telegramcore.cpp
