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
    QByteArrayData data[21];
    char stringdata0[296];
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
QT_MOC_LITERAL(5, 47, 20), // "debittapahtumaSignal"
QT_MOC_LITERAL(6, 68, 21), // "credittapahtumaSignal"
QT_MOC_LITERAL(7, 90, 13), // "asiakasSignal"
QT_MOC_LITERAL(8, 104, 9), // "nimiToExe"
QT_MOC_LITERAL(9, 114, 10), // "velkaToExe"
QT_MOC_LITERAL(10, 125, 10), // "saldoToExe"
QT_MOC_LITERAL(11, 136, 19), // "debittapahtumaToExe"
QT_MOC_LITERAL(12, 156, 20), // "credittapahtumaToExe"
QT_MOC_LITERAL(13, 177, 10), // "login_slot"
QT_MOC_LITERAL(14, 188, 14), // "getasiakasSlot"
QT_MOC_LITERAL(15, 203, 14), // "QNetworkReply*"
QT_MOC_LITERAL(16, 218, 5), // "reply"
QT_MOC_LITERAL(17, 224, 13), // "getcreditSlot"
QT_MOC_LITERAL(18, 238, 12), // "getdebitSlot"
QT_MOC_LITERAL(19, 251, 21), // "getdebittapahtumaSlot"
QT_MOC_LITERAL(20, 273, 22) // "getcredittapahtumaSlot"

    },
    "RESTAPI\0login_signal\0\0creditSignal\0"
    "debitSignal\0debittapahtumaSignal\0"
    "credittapahtumaSignal\0asiakasSignal\0"
    "nimiToExe\0velkaToExe\0saldoToExe\0"
    "debittapahtumaToExe\0credittapahtumaToExe\0"
    "login_slot\0getasiakasSlot\0QNetworkReply*\0"
    "reply\0getcreditSlot\0getdebitSlot\0"
    "getdebittapahtumaSlot\0getcredittapahtumaSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RESTAPI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       3,    1,  102,    2, 0x06 /* Public */,
       4,    1,  105,    2, 0x06 /* Public */,
       5,    1,  108,    2, 0x06 /* Public */,
       6,    1,  111,    2, 0x06 /* Public */,
       7,    1,  114,    2, 0x06 /* Public */,
       8,    2,  117,    2, 0x06 /* Public */,
       9,    1,  122,    2, 0x06 /* Public */,
      10,    1,  125,    2, 0x06 /* Public */,
      11,    1,  128,    2, 0x06 /* Public */,
      12,    1,  131,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  134,    2, 0x08 /* Private */,
      14,    1,  137,    2, 0x08 /* Private */,
      17,    1,  140,    2, 0x08 /* Private */,
      18,    1,  143,    2, 0x08 /* Private */,
      19,    1,  146,    2, 0x08 /* Private */,
      20,    1,  149,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,

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
        case 3: _t->debittapahtumaSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->credittapahtumaSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->asiakasSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->nimiToExe((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->velkaToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->saldoToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->debittapahtumaToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->credittapahtumaToExe((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->login_slot((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 12: _t->getasiakasSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 13: _t->getcreditSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 14: _t->getdebitSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 15: _t->getdebittapahtumaSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 16: _t->getcredittapahtumaSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
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
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 16:
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RESTAPI::debittapahtumaSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RESTAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RESTAPI::credittapahtumaSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (RESTAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RESTAPI::asiakasSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (RESTAPI::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RESTAPI::nimiToExe)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (RESTAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RESTAPI::velkaToExe)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (RESTAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RESTAPI::saldoToExe)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (RESTAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RESTAPI::debittapahtumaToExe)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (RESTAPI::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RESTAPI::credittapahtumaToExe)) {
                *result = 10;
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
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
void RESTAPI::debittapahtumaSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RESTAPI::credittapahtumaSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RESTAPI::asiakasSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RESTAPI::nimiToExe(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RESTAPI::velkaToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RESTAPI::saldoToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void RESTAPI::debittapahtumaToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void RESTAPI::credittapahtumaToExe(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
