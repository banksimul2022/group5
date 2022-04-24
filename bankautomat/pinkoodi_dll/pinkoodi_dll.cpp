#include "pinkoodi_dll.h"

Pinkoodi_dll::Pinkoodi_dll()
{
    objectpinkoodi_engine = new pinkoodi_engine;
    connect(objectpinkoodi_engine, SIGNAL(pinkoodi_signal(QString)),
            this, SLOT(pinkoodi_slot(QString)));
}

void Pinkoodi_dll::show()
{
    objectpinkoodi_engine->show();
    objectpinkoodi_engine->timer->start(10000);
}

void Pinkoodi_dll::pinkoodi_slot(QString pinkoodi)
{
    emit pinkoodi_signal(pinkoodi);
}
