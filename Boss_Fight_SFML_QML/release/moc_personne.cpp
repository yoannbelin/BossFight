/****************************************************************************
** Meta object code from reading C++ file 'personne.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cpp/personne.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'personne.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Personne_t {
    QByteArrayData data[14];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Personne_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Personne_t qt_meta_stringdata_Personne = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Personne"
QT_MOC_LITERAL(1, 9, 10), // "nomChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 3), // "nom"
QT_MOC_LITERAL(4, 25, 13), // "prenomChanged"
QT_MOC_LITERAL(5, 39, 6), // "prenom"
QT_MOC_LITERAL(6, 46, 10), // "ageChanged"
QT_MOC_LITERAL(7, 57, 3), // "age"
QT_MOC_LITERAL(8, 61, 13), // "panierChanged"
QT_MOC_LITERAL(9, 75, 7), // "Panier*"
QT_MOC_LITERAL(10, 83, 6), // "panier"
QT_MOC_LITERAL(11, 90, 6), // "setNom"
QT_MOC_LITERAL(12, 97, 9), // "setPrenom"
QT_MOC_LITERAL(13, 107, 6) // "setAge"

    },
    "Personne\0nomChanged\0\0nom\0prenomChanged\0"
    "prenom\0ageChanged\0age\0panierChanged\0"
    "Panier*\0panier\0setNom\0setPrenom\0setAge"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Personne[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       8,    1,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   66,    2, 0x0a /* Public */,
      12,    1,   69,    2, 0x0a /* Public */,
      13,    1,   72,    2, 0x0a /* Public */,
      10,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       5, QMetaType::QString, 0x00495103,
       7, QMetaType::Int, 0x00495103,
      10, 0x80000000 | 9, 0x0049500b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Personne::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Personne *_t = static_cast<Personne *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nomChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->prenomChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->ageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->panierChanged((*reinterpret_cast< Panier*(*)>(_a[1]))); break;
        case 4: _t->setNom((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setPrenom((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setAge((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->panier((*reinterpret_cast< Panier*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Panier* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Panier* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Personne::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Personne::nomChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Personne::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Personne::prenomChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Personne::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Personne::ageChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Personne::*_t)(Panier * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Personne::panierChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Panier* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Personne *_t = static_cast<Personne *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->nom(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->prenom(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->age(); break;
        case 3: *reinterpret_cast< Panier**>(_v) = _t->panier(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Personne *_t = static_cast<Personne *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNom(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setPrenom(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setAge(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->panier(*reinterpret_cast< Panier**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Personne::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Personne.data,
      qt_meta_data_Personne,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Personne::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Personne::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Personne.stringdata0))
        return static_cast<void*>(const_cast< Personne*>(this));
    return QObject::qt_metacast(_clname);
}

int Personne::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Personne::nomChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Personne::prenomChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Personne::ageChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Personne::panierChanged(Panier * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
