#include "pinkoodi_dll.h"

Pinkoodi_dll::Pinkoodi_dll()
{
    objectpinkoodi_engine = new pinkoodi_engine;
<<<<<<< HEAD
=======

    connect(objectpinkoodi_engine, SIGNAL(pinkoodi_signal(QString)),
            this, SLOT(pinkoodi_slot(QString)));

>>>>>>> 25e5b889254ed63f4e8f5602babe973b8de6a929
}

void Pinkoodi_dll::show()
{
<<<<<<< HEAD
    objectpinkoodi_engine->show();

=======
    objectpinkoodi_engine ->show();
>>>>>>> 25e5b889254ed63f4e8f5602babe973b8de6a929
}

void Pinkoodi_dll::pinkoodi_slot(QString pinkoodi)
{
    emit pinkoodi_signal(pinkoodi);
}
