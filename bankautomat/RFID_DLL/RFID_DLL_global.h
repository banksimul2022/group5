#ifndef RFID_DLL_GLOBAL_H
#define RFID_DLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RFID_DLL_LIBRARY)
#  define RFID_DLL_EXPORT Q_DECL_EXPORT
#else
#  define RFID_DLL_EXPORT Q_DECL_IMPORT
#endif

#endif // RFID_DLL_GLOBAL_H
