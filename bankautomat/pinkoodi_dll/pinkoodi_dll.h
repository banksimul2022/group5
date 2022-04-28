#ifndef PINKOODI_DLL_H
#define PINKOODI_DLL_H

#include <QObject>
#include "pinkoodi_dll_global.h"
#include "pinkoodi_engine.h"

class PINKOODI_DLL_EXPORT Pinkoodi_dll : public QObject
{
    Q_OBJECT

public:
    Pinkoodi_dll();
    void show();
    void close();

private slots:
    void pinkoodi_slot(QString);

signals:
    void pinkoodi_signal(QString);

private:
    pinkoodi_engine *objectpinkoodi_engine;

};

#endif // PINKOODI_DLL_H
