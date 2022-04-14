#include "pinkoodi_dll.h"

Pinkoodi_dll::Pinkoodi_dll()
{
    objectpinkoodi_engine = new pinkoodi_engine;
}

void Pinkoodi_dll::show()
{
    objectpinkoodi_engine->show();

}
