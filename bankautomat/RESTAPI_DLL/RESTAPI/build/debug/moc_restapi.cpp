/****************************************************************************
** Meta object code from reading C++ file 'restapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../restapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'restapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RESTAPI_t {
    QByteArrayData data[18];
    char stringdata0[215];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RESTAPI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RESTAPI_t qt_meta_stringdata_RESTAPI = {
    {
QT_MOC_LITERAL(0, 0, 7), // "RESTAPI"
QT_MOC_LITERAL(1, 8, 12), // "login_signal"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 12), // "creditSignal"
QT_MOC_LITERAL(4, 35, 11), // "debitSignal"
QT_MOC_LITERAL(5, 47, 15), // "tapahtumaSignal"
QT_MOC_LITERAL(6, 63, 13), // "asiakasSignal"
QT_MOC_LITERAL(7, 77, 9), // "nimiToExe"
QT_MOC_LITERAL(8, 87, 10), // "velkaToExe"
QT_MOC_LITERAL(9, 98, 10), // "saldoToExe"
QT_MOC_LITERAL(10, 109, 14), // "tapahtumaToExe"
QT_MOC_LITERAL(11, 124, 10), // "login_slot"
QT_MOC_LITERAL(12, 135, 14), // "getasiakasSlot"
QT_MOC_LITERAL(13, 150, 14), // "QNetworkReply*"
QT_MOC_LITERAL(14, 165, 5), // "reply"
QT_MOC_LITERAL(15, 171, 13), // "getcreditSlot"
QT_MOC_LITERAL(16, 185, 12), // "getdebitSlot"
QT_MOC_LITERAL(17, 198, 16) // "gettapahtumaSlot"

    },
    "RESTAPI\0login_signal\0\0creditSignal\0"
    "debitSignal\0tapahtumaSignal\0asiakasSignal\0"
    "nimiToExe\0velkaToExe\0saldoToExe\0"
    "tapahtumaToExe\0login_slot\0getasiakasSlot\0"
    "QNetworkReply*\0reply\0getcreditSlot\0"
    "getdebitSlot\0gettapahtumaSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RESTAPI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    1,   87,    2, 0x06 /* Public */,
       4,    1,   90,    2, 0x06 /* Public */,
       5,    1,   93,    2, 0x06 /* Public */,
       6,    1,   96,    2, 0x06 /* Public */,
       7,    2,   99,    2, 0x06 /* Public */,
       8,    1,  104,    2, 0x06 /* Public */,
       9,    1,  107,    2, 0x06 /* Public */,
      10,    1,  110,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,  113,    2, 0x08 /* Private */,
      12,    1,  116,    2, 0x08 /* Private */,
      15,    1,  119,    2, 0x08 /* Private */,
      16,    1,  122,    2, 0x08 /* Private */,
      17,    1,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,

       0        // eod
};

void RESTAPI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RESTAPI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->login_signal((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->creditSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->debitSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->tapahtumaSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->asiakasSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->nimiToExe((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 6: _t->velkaToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->saldoToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->tapahtumaToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->login_slot((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 10: _t->getasiakasSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 11: _t->getcreditSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 12: _t->getdebitSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 13: _t->gettapahtumaSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RESTAPI::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RESTAPI::login_signal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RESTAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RESTAPI::creditSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RESTAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RESTAPI::debitSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RESTAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RESTAPI::tapahtumaSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RESTAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RESTAPI::asiakasSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RESTAPI::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RESTAPI::nimiToExe)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (RESTAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RESTAPI::velkaToExe)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (RESTAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RESTAPI::saldoToExe)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (RESTAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RESTAPI::tapahtumaToExe)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RESTAPI::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RESTAPI.data,
    qt_meta_data_RESTAPI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RESTAPI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RESTAPI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RESTAPI.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RESTAPI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void RESTAPI::login_signal(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RESTAPI::creditSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RESTAPI::debitSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RESTAPI::tapahtumaSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RESTAPI::asiakasSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RESTAPI::nimiToExe(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RESTAPI::velkaToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RESTAPI::saldoToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RESTAPI::tapahtumaToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
