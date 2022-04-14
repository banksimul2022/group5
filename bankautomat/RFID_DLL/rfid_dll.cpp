#include "rfid_dll.h"
#include <QDebug>

RFID_DLL::RFID_DLL(QObject *parent) : QObject (parent)
{
    port = new QSerialPort(this);
}

RFID_DLL::~RFID_DLL()
{
    delete port;
    port = nullptr;

}

void RFID_DLL::luekortinid()
{
    port->setPortName("COM4");
    port->open(QIODevice::ReadOnly);
    qDebug() << "Odotetaan pankkikorttia...";
    connect(port, SIGNAL(readyRead()), this, SLOT(vastaanotaid()));
}

void RFID_DLL::vastaanotaid()
{
    QByteArray ID = port->read(16).chopped(3).remove(0, 3);
    qDebug() << "Vastaanotettiin data lukijalta: "<<ID.data();
    disconnect(port, SIGNAL(readyRead()), this, SLOT(vastaanotaid()));
    emit laheta(ID);

}
