/****************************************************************************
** Meta object code from reading C++ file 'pluginsdialog.h'
**
** Created: Sat Oct 15 11:20:17 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../glMiSOM/UI/pluginsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pluginsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PluginsDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   15,   14,   14, 0x05,
      57,   46,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     101,   14,   14,   14, 0x08,
     135,  124,   14,   14, 0x08,
     172,   14,   14,   14, 0x08,
     192,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PluginsDialog[] = {
    "PluginsDialog\0\0filename\0addExtractor(QString)\0"
    "extractors\0deleteExtractor(QList<ExtractorInterface*>)\0"
    "on_btnCancel_clicked()\0currentRow\0"
    "on_lstPlugins_currentRowChanged(int)\0"
    "on_btnAdd_clicked()\0on_btnDelete_clicked()\0"
};

const QMetaObject PluginsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PluginsDialog,
      qt_meta_data_PluginsDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PluginsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PluginsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PluginsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PluginsDialog))
        return static_cast<void*>(const_cast< PluginsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int PluginsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addExtractor((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: deleteExtractor((*reinterpret_cast< QList<ExtractorInterface*>(*)>(_a[1]))); break;
        case 2: on_btnCancel_clicked(); break;
        case 3: on_lstPlugins_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: on_btnAdd_clicked(); break;
        case 5: on_btnDelete_clicked(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void PluginsDialog::addExtractor(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PluginsDialog::deleteExtractor(QList<ExtractorInterface*> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE