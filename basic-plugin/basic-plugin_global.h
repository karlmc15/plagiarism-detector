#ifndef BASICPLUGIN_GLOBAL_H
#define BASICPLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(BASICPLUGIN_LIBRARY)
#  define BASICPLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define BASICPLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // BASICPLUGIN_GLOBAL_H