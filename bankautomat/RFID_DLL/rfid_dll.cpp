#include "rfid_dll.h"
#include <QDebug>

RFID_DLL::RFID_DLL(QObject *parent) : QObject (parent)
{

}

RFID_DLL::~RFID_DLL()
{

}

void RFID_DLL::printti()
{
    qDebug()<<"TESTI!"<<Qt::endl;
}

