QT -= gui
QT += widgets

TEMPLATE = lib
DEFINES += PINKOODI_DLL_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    pinkoodi_dll.cpp \
    pinkoodi_engine.cpp

HEADERS += \
    pinkoodi_dll_global.h \
    pinkoodi_dll.h \
    pinkoodi_engine.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target

FORMS += \
    pinkoodi_engine.ui
