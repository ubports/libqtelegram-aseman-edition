QT += gui
QT += network
QT += multimedia

TARGET = qtelegram-ae
TEMPLATE = lib
DEFINES += LIBQTELEGRAM_LIBRARY

macx {
    CONFIG += staticlib
    QT += macextras
} android {
    CONFIG += staticlib
}

include(libqtelegram-ae.pri)

linux {
    contains(QMAKE_HOST.arch, x86_64) {
        LIB_PATH = x86_64-linux-gnu
    } else {
        LIB_PATH = i386-linux-gnu
    }
}

isEmpty(PREFIX) {
    isEmpty(INSTALL_HEADERS_PREFIX): INSTALL_HEADERS_PREFIX = $$[QT_INSTALL_HEADERS]
    isEmpty(INSTALL_LIBS_PREFIX): INSTALL_LIBS_PREFIX = $$[QT_INSTALL_LIBS]
} else {
    isEmpty(INSTALL_HEADERS_PREFIX): INSTALL_HEADER_PREFIX = $$PREFIX/include
    isEmpty(INSTALL_LIBS_PREFIX): INSTALL_LIBS_PREFIX = $$PREFIX/lib/$$LIB_PATH
}

INSTALL_PREFIX = $$INSTALL_HEADERS_PREFIX/libqtelegram-ae
INSTALL_HEADERS = $$HEADERS
include(qmake/headerinstall.pri)

target = $$TARGET
target.path = $$INSTALL_LIBS_PREFIX

INSTALLS += target
