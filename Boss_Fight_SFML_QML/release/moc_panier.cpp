/****************************************************************************
** Meta object code from reading C++ file 'panier.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cpp/panier.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'panier.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Panier_t {
    QByteArrayData data[8];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Panier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Panier_t qt_meta_stringdata_Panier = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Panier"
QT_MOC_LITERAL(1, 7, 13), // "myListChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "myList"
QT_MOC_LITERAL(4, 29, 15), // "myStringChanged"
QT_MOC_LITERAL(5, 45, 8), // "myString"
QT_MOC_LITERAL(6, 54, 9), // "setMyList"
QT_MOC_LITERAL(7, 64, 11) // "setmyString"

    },
    "Panier\0myListChanged\0\0myList\0"
    "myStringChanged\0myString\0setMyList\0"
    "setmyString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Panier[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495003,
       3, QMetaType::QStringList, 0x00495103,

 // properties: notify_signal_id
       1,
       0,

       0        // eod
};

void Panier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Panier *_t = static_cast<Panier *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->myListChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->myStringChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setMyList((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->setmyString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Panier::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Panier::myListChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Panier::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Panier::myStringChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Panier *_t = static_cast<Panier *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->myString(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->myList(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Panier *_t = static_cast<Panier *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setmyString(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setMyList(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Panier::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Panier.data,
      qt_meta_data_Panier,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Panier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Panier::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Panier.stringdata0))
        return static_cast<void*>(const_cast< Panier*>(this));
    return QObject::qt_metacast(_clname);
}

int Panier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Panier::myListChanged(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Panier::myStringChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
