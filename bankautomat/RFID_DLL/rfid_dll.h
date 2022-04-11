#ifndef RFID_DLL_H
#define RFID_DLL_H

#include "RFID_DLL_global.h"

#include <QObject>
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>


class RFID_DLL_EXPORT RFID_DLL: public QObject
{
    Q_OBJECT

public:
    RFID_DLL(QObject * parent = nullptr);
   ~RFID_DLL();
    void luekortinid();

signals:
    void laheta(QByteArray);

public slots:
    void vastaanotaid();

private:
    QSerialPort * port;
    QByteArray ID;

};

#endif // RFID_DLL_H
