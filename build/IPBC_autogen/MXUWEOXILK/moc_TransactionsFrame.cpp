/****************************************************************************
** Meta object code from reading C++ file 'TransactionsFrame.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/TransactionsFrame.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TransactionsFrame.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__TransactionsFrame_t {
    QByteArrayData data[20];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__TransactionsFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__TransactionsFrame_t qt_meta_stringdata_WalletGui__TransactionsFrame = {
    {
QT_MOC_LITERAL(0, 0, 28), // "WalletGui::TransactionsFrame"
QT_MOC_LITERAL(1, 29, 19), // "onCustomContextMenu"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 5), // "point"
QT_MOC_LITERAL(4, 56, 10), // "chooseDate"
QT_MOC_LITERAL(5, 67, 3), // "idx"
QT_MOC_LITERAL(6, 71, 10), // "chooseType"
QT_MOC_LITERAL(7, 82, 16), // "changedSearchFor"
QT_MOC_LITERAL(8, 99, 12), // "searchstring"
QT_MOC_LITERAL(9, 112, 10), // "copyTxHash"
QT_MOC_LITERAL(10, 123, 10), // "copyAmount"
QT_MOC_LITERAL(11, 134, 13), // "copyPaymentID"
QT_MOC_LITERAL(12, 148, 13), // "showTxDetails"
QT_MOC_LITERAL(13, 162, 15), // "computeSelected"
QT_MOC_LITERAL(14, 178, 22), // "showTransactionDetails"
QT_MOC_LITERAL(15, 201, 6), // "_index"
QT_MOC_LITERAL(16, 208, 12), // "walletClosed"
QT_MOC_LITERAL(17, 221, 11), // "exportToCsv"
QT_MOC_LITERAL(18, 233, 16), // "dateRangeChanged"
QT_MOC_LITERAL(19, 250, 18) // "resetFilterClicked"

    },
    "WalletGui::TransactionsFrame\0"
    "onCustomContextMenu\0\0point\0chooseDate\0"
    "idx\0chooseType\0changedSearchFor\0"
    "searchstring\0copyTxHash\0copyAmount\0"
    "copyPaymentID\0showTxDetails\0computeSelected\0"
    "showTransactionDetails\0_index\0"
    "walletClosed\0exportToCsv\0dateRangeChanged\0"
    "resetFilterClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__TransactionsFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x0a /* Public */,
       4,    1,   87,    2, 0x0a /* Public */,
       6,    1,   90,    2, 0x0a /* Public */,
       7,    1,   93,    2, 0x0a /* Public */,
       9,    0,   96,    2, 0x0a /* Public */,
      10,    0,   97,    2, 0x0a /* Public */,
      11,    0,   98,    2, 0x0a /* Public */,
      12,    0,   99,    2, 0x0a /* Public */,
      13,    0,  100,    2, 0x0a /* Public */,
      14,    1,  101,    2, 0x0a /* Public */,
      16,    0,  104,    2, 0x0a /* Public */,
      17,    0,  105,    2, 0x08 /* Private */,
      18,    0,  106,    2, 0x08 /* Private */,
      19,    0,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WalletGui::TransactionsFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransactionsFrame *_t = static_cast<TransactionsFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onCustomContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->chooseDate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->chooseType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->changedSearchFor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->copyTxHash(); break;
        case 5: _t->copyAmount(); break;
        case 6: _t->copyPaymentID(); break;
        case 7: _t->showTxDetails(); break;
        case 8: _t->computeSelected(); break;
        case 9: _t->showTransactionDetails((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->walletClosed(); break;
        case 11: _t->exportToCsv(); break;
        case 12: _t->dateRangeChanged(); break;
        case 13: _t->resetFilterClicked(); break;
        default: ;
        }
    }
}

const QMetaObject WalletGui::TransactionsFrame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_WalletGui__TransactionsFrame.data,
      qt_meta_data_WalletGui__TransactionsFrame,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::TransactionsFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::TransactionsFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__TransactionsFrame.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int WalletGui::TransactionsFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
