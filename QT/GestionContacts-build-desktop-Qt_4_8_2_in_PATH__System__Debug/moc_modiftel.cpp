/****************************************************************************
** Meta object code from reading C++ file 'modiftel.h'
**
** Created: Mon Nov 28 10:14:57 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GestionContacts/modiftel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modiftel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ModifTel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   10,    9,    9, 0x08,
      64,    9,    9,    9, 0x08,
      90,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ModifTel[] = {
    "ModifTel\0\0arg1\0"
    "on_lineEditModifNumPortable_textChanged(QString)\0"
    "on_pushButtonOk_clicked()\0"
    "on_pushButton_2_clicked()\0"
};

void ModifTel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ModifTel *_t = static_cast<ModifTel *>(_o);
        switch (_id) {
        case 0: _t->on_lineEditModifNumPortable_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButtonOk_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ModifTel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ModifTel::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ModifTel,
      qt_meta_data_ModifTel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ModifTel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ModifTel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ModifTel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ModifTel))
        return static_cast<void*>(const_cast< ModifTel*>(this));
    return QDialog::qt_metacast(_clname);
}

int ModifTel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
