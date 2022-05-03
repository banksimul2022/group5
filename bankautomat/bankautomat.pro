QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    creditdebit.cpp \
    main.cpp \
    mainwindow.cpp \
    nosta_rahaa.cpp \
    paaikkuna.cpp \
    talleta_rahaa.cpp

HEADERS += \
    creditdebit.h \
    mainwindow.h \
    nosta_rahaa.h \
    paaikkuna.h \
    talleta_rahaa.h

FORMS += \
    creditdebit.ui \
    mainwindow.ui \
    nosta_rahaa.ui \
    paaikkuna.ui \
    talleta_rahaa.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32: LIBS += -L$$PWD/RFID_DLL/build/debug/ -lRFID_DLL

INCLUDEPATH += $$PWD/RFID_DLL
DEPENDPATH += $$PWD/RFID_DLL

win32: LIBS += -L$$PWD/pinkoodi_dll/build/debug/ -lpinkoodi_dll

INCLUDEPATH += $$PWD/pinkoodi_dll
DEPENDPATH += $$PWD/pinkoodi_dll



win32: LIBS += -L$$PWD/RESTAPI_DLL/RESTAPI/build/debug/ -lRESTAPI

INCLUDEPATH += $$PWD/RESTAPI_DLL/RESTAPI
DEPENDPATH += $$PWD/RESTAPI_DLL/RESTAPI
