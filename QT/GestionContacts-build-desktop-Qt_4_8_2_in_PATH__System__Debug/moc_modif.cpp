/****************************************************************************
** Meta object code from reading C++ file 'modif.h'
**
** Created: Mon Nov 28 10:17:46 2016
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GestionContacts/modif.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modif.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Modif[] = {

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
      12,    7,    6,    6, 0x08,
      50,    6,    6,    6, 0x08,
      81,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Modif[] = {
    "Modif\0\0arg1\0on_lineEditModif_textChanged(QString)\0"
    "on_pushButtonQuitter_clicked()\0"
    "on_pushButtonOK_clicked()\0"
};

void Modif::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Modif *_t = static_cast<Modif *>(_o);
        switch (_id) {
        case 0: _t->on_lineEditModif_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_pushButtonQuitter_clicked(); break;
        case 2: _t->on_pushButtonOK_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Modif::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Modif::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Modif,
      qt_meta_data_Modif, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Modif::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Modif::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Modif::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Modif))
        return static_cast<void*>(const_cast< Modif*>(this));
    return QDialog::qt_metacast(_clname);
}

int Modif::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
