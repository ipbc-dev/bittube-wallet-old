/****************************************************************************
** Meta object code from reading C++ file 'TransferFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/TransferFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransferFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__TransferFrame_t {
    QByteArrayData data[10];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__TransferFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__TransferFrame_t qt_meta_stringdata_WalletGui__TransferFrame = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WalletGui::TransferFrame"
QT_MOC_LITERAL(1, 25, 24), // "amountValueChangedSignal"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 21), // "insertPaymentIDSignal"
QT_MOC_LITERAL(4, 73, 10), // "_paymentid"
QT_MOC_LITERAL(5, 84, 18), // "addressBookClicked"
QT_MOC_LITERAL(6, 103, 12), // "pasteClicked"
QT_MOC_LITERAL(7, 116, 17), // "amountValueChange"
QT_MOC_LITERAL(8, 134, 13), // "addressEdited"
QT_MOC_LITERAL(9, 148, 5) // "_text"

    },
    "WalletGui::TransferFrame\0"
    "amountValueChangedSignal\0\0"
    "insertPaymentIDSignal\0_paymentid\0"
    "addressBookClicked\0pasteClicked\0"
    "amountValueChange\0addressEdited\0_text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__TransferFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void WalletGui::TransferFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransferFrame *_t = static_cast<TransferFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->amountValueChangedSignal(); break;
        case 1: _t->insertPaymentIDSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->addressBookClicked(); break;
        case 3: _t->pasteClicked(); break;
        case 4: _t->amountValueChange(); break;
        case 5: _t->addressEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (TransferFrame::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransferFrame::amountValueChangedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (TransferFrame::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransferFrame::insertPaymentIDSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::TransferFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGui__TransferFrame.data,
      qt_meta_data_WalletGui__TransferFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::TransferFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::TransferFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__TransferFrame.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int WalletGui::TransferFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void WalletGui::TransferFrame::amountValueChangedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WalletGui::TransferFrame::insertPaymentIDSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
