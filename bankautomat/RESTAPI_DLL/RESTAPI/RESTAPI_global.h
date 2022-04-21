#ifndef RESTAPI_GLOBAL_H
#define RESTAPI_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RESTAPI_LIBRARY)
#  define RESTAPI_EXPORT Q_DECL_EXPORT
#else
#  define RESTAPI_EXPORT Q_DECL_IMPORT
#endif

#endif // RESTAPI_GLOBAL_H
