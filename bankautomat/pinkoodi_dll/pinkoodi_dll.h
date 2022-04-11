#ifndef PINKOODI_DLL_H
#define PINKOODI_DLL_H

#include "pinkoodi_dll_global.h"
#include "pinkoodi_engine.h"

class PINKOODI_DLL_EXPORT Pinkoodi_dll
{
public:
    Pinkoodi_dll();

private:
    pinkoodi_engine *objectpinkoodi_engine;
};

#endif // PINKOODI_DLL_H
