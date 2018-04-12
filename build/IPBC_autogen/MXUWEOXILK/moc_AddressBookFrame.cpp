/****************************************************************************
** Meta object code from reading C++ file 'AddressBookFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/AddressBookFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddressBookFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__AddressBookFrame_t {
    QByteArrayData data[12];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__AddressBookFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__AddressBookFrame_t qt_meta_stringdata_WalletGui__AddressBookFrame = {
    {
QT_MOC_LITERAL(0, 0, 27), // "WalletGui::AddressBookFrame"
QT_MOC_LITERAL(1, 28, 19), // "onCustomContextMenu"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 5), // "point"
QT_MOC_LITERAL(4, 55, 10), // "addClicked"
QT_MOC_LITERAL(5, 66, 11), // "editClicked"
QT_MOC_LITERAL(6, 78, 11), // "copyClicked"
QT_MOC_LITERAL(7, 90, 20), // "copyPaymentIdClicked"
QT_MOC_LITERAL(8, 111, 16), // "copyLabelClicked"
QT_MOC_LITERAL(9, 128, 13), // "deleteClicked"
QT_MOC_LITERAL(10, 142, 21), // "currentAddressChanged"
QT_MOC_LITERAL(11, 164, 6) // "_index"

    },
    "WalletGui::AddressBookFrame\0"
    "onCustomContextMenu\0\0point\0addClicked\0"
    "editClicked\0copyClicked\0copyPaymentIdClicked\0"
    "copyLabelClicked\0deleteClicked\0"
    "currentAddressChanged\0_index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__AddressBookFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    0,   57,    2, 0x0a /* Public */,
       5,    0,   58,    2, 0x0a /* Public */,
       6,    0,   59,    2, 0x0a /* Public */,
       7,    0,   60,    2, 0x0a /* Public */,
       8,    0,   61,    2, 0x0a /* Public */,
       9,    0,   62,    2, 0x0a /* Public */,
      10,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   11,

       0        // eod
};

void WalletGui::AddressBookFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddressBookFrame *_t = static_cast<AddressBookFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onCustomContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->addClicked(); break;
        case 2: _t->editClicked(); break;
        case 3: _t->copyClicked(); break;
        case 4: _t->copyPaymentIdClicked(); break;
        case 5: _t->copyLabelClicked(); break;
        case 6: _t->deleteClicked(); break;
        case 7: _t->currentAddressChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WalletGui::AddressBookFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGui__AddressBookFrame.data,
      qt_meta_data_WalletGui__AddressBookFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::AddressBookFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::AddressBookFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__AddressBookFrame.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int WalletGui::AddressBookFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
