/****************************************************************************
** Meta object code from reading C++ file 'contexte.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cpp/contexte.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'contexte.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Contexte_t {
    QByteArrayData data[11];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Contexte_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Contexte_t qt_meta_stringdata_Contexte = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Contexte"
QT_MOC_LITERAL(1, 9, 14), // "chaine1Changed"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "chaine1"
QT_MOC_LITERAL(4, 33, 21), // "rootVisibilityChanged"
QT_MOC_LITERAL(5, 55, 14), // "rootVisibility"
QT_MOC_LITERAL(6, 70, 10), // "setChaine1"
QT_MOC_LITERAL(7, 81, 13), // "doActionInCpp"
QT_MOC_LITERAL(8, 95, 9), // "nomAction"
QT_MOC_LITERAL(9, 105, 1), // "i"
QT_MOC_LITERAL(10, 107, 17) // "setRootVisibility"

    },
    "Contexte\0chaine1Changed\0\0chaine1\0"
    "rootVisibilityChanged\0rootVisibility\0"
    "setChaine1\0doActionInCpp\0nomAction\0i\0"
    "setRootVisibility"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Contexte[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   50,    2, 0x0a /* Public */,
       7,    2,   53,    2, 0x0a /* Public */,
       7,    1,   58,    2, 0x2a /* Public | MethodCloned */,
      10,    1,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    8,    9,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Bool,    5,

 // properties: name, type, flags
       5, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       1,

       0        // eod
};

void Contexte::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Contexte *_t = static_cast<Contexte *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->chaine1Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->rootVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->setChaine1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->doActionInCpp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->doActionInCpp((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setRootVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Contexte::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Contexte::chaine1Changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Contexte::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Contexte::rootVisibilityChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Contexte *_t = static_cast<Contexte *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->rootVisibility(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Contexte *_t = static_cast<Contexte *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRootVisibility(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Contexte::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Contexte.data,
      qt_meta_data_Contexte,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Contexte::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Contexte::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Contexte.stringdata0))
        return static_cast<void*>(const_cast< Contexte*>(this));
    return QObject::qt_metacast(_clname);
}

int Contexte::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Contexte::chaine1Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Contexte::rootVisibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
