/****************************************************************************
** Meta object code from reading C++ file 'NodeAdapter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/NodeAdapter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NodeAdapter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WalletGui__NodeAdapter_t {
    QByteArrayData data[24];
    char stringdata0[403];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletGui__NodeAdapter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletGui__NodeAdapter_t qt_meta_stringdata_WalletGui__NodeAdapter = {
    {
QT_MOC_LITERAL(0, 0, 22), // "WalletGui::NodeAdapter"
QT_MOC_LITERAL(1, 23, 28), // "localBlockchainUpdatedSignal"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 7), // "_height"
QT_MOC_LITERAL(4, 61, 33), // "lastKnownBlockHeightUpdatedSi..."
QT_MOC_LITERAL(5, 95, 23), // "nodeInitCompletedSignal"
QT_MOC_LITERAL(6, 119, 22), // "peerCountUpdatedSignal"
QT_MOC_LITERAL(7, 142, 8), // "quintptr"
QT_MOC_LITERAL(8, 151, 6), // "_count"
QT_MOC_LITERAL(9, 158, 14), // "initNodeSignal"
QT_MOC_LITERAL(10, 173, 6), // "Node**"
QT_MOC_LITERAL(11, 180, 5), // "_node"
QT_MOC_LITERAL(12, 186, 27), // "const CryptoNote::Currency*"
QT_MOC_LITERAL(13, 214, 8), // "currency"
QT_MOC_LITERAL(14, 223, 14), // "INodeCallback*"
QT_MOC_LITERAL(15, 238, 9), // "_callback"
QT_MOC_LITERAL(16, 248, 23), // "Logging::LoggerManager*"
QT_MOC_LITERAL(17, 272, 14), // "_loggerManager"
QT_MOC_LITERAL(18, 287, 22), // "CryptoNote::CoreConfig"
QT_MOC_LITERAL(19, 310, 11), // "_coreConfig"
QT_MOC_LITERAL(20, 322, 25), // "CryptoNote::NetNodeConfig"
QT_MOC_LITERAL(21, 348, 14), // "_netNodeConfig"
QT_MOC_LITERAL(22, 363, 16), // "deinitNodeSignal"
QT_MOC_LITERAL(23, 380, 22) // "connectionFailedSignal"

    },
    "WalletGui::NodeAdapter\0"
    "localBlockchainUpdatedSignal\0\0_height\0"
    "lastKnownBlockHeightUpdatedSignal\0"
    "nodeInitCompletedSignal\0peerCountUpdatedSignal\0"
    "quintptr\0_count\0initNodeSignal\0Node**\0"
    "_node\0const CryptoNote::Currency*\0"
    "currency\0INodeCallback*\0_callback\0"
    "Logging::LoggerManager*\0_loggerManager\0"
    "CryptoNote::CoreConfig\0_coreConfig\0"
    "CryptoNote::NetNodeConfig\0_netNodeConfig\0"
    "deinitNodeSignal\0connectionFailedSignal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletGui__NodeAdapter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       5,    0,   55,    2, 0x06 /* Public */,
       6,    1,   56,    2, 0x06 /* Public */,
       9,    6,   59,    2, 0x06 /* Public */,
      22,    1,   72,    2, 0x06 /* Public */,
      23,    0,   75,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong,    3,
    QMetaType::Void, QMetaType::ULongLong,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12, 0x80000000 | 14, 0x80000000 | 16, 0x80000000 | 18, 0x80000000 | 20,   11,   13,   15,   17,   19,   21,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void WalletGui::NodeAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NodeAdapter *_t = static_cast<NodeAdapter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->localBlockchainUpdatedSignal((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 1: _t->lastKnownBlockHeightUpdatedSignal((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 2: _t->nodeInitCompletedSignal(); break;
        case 3: _t->peerCountUpdatedSignal((*reinterpret_cast< quintptr(*)>(_a[1]))); break;
        case 4: _t->initNodeSignal((*reinterpret_cast< Node**(*)>(_a[1])),(*reinterpret_cast< const CryptoNote::Currency*(*)>(_a[2])),(*reinterpret_cast< INodeCallback*(*)>(_a[3])),(*reinterpret_cast< Logging::LoggerManager*(*)>(_a[4])),(*reinterpret_cast< const CryptoNote::CoreConfig(*)>(_a[5])),(*reinterpret_cast< const CryptoNote::NetNodeConfig(*)>(_a[6]))); break;
        case 5: _t->deinitNodeSignal((*reinterpret_cast< Node**(*)>(_a[1]))); break;
        case 6: _t->connectionFailedSignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (NodeAdapter::*_t)(quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeAdapter::localBlockchainUpdatedSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (NodeAdapter::*_t)(quint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeAdapter::lastKnownBlockHeightUpdatedSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (NodeAdapter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeAdapter::nodeInitCompletedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (NodeAdapter::*_t)(quintptr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeAdapter::peerCountUpdatedSignal)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (NodeAdapter::*_t)(Node * * , const CryptoNote::Currency * , INodeCallback * , Logging::LoggerManager * , const CryptoNote::CoreConfig & , const CryptoNote::NetNodeConfig & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeAdapter::initNodeSignal)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (NodeAdapter::*_t)(Node * * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeAdapter::deinitNodeSignal)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (NodeAdapter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NodeAdapter::connectionFailedSignal)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject WalletGui::NodeAdapter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletGui__NodeAdapter.data,
      qt_meta_data_WalletGui__NodeAdapter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WalletGui::NodeAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletGui::NodeAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WalletGui__NodeAdapter.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "INodeCallback"))
        return static_cast< INodeCallback*>(this);
    return QObject::qt_metacast(_clname);
}

int WalletGui::NodeAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void WalletGui::NodeAdapter::localBlockchainUpdatedSignal(quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletGui::NodeAdapter::lastKnownBlockHeightUpdatedSignal(quint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletGui::NodeAdapter::nodeInitCompletedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WalletGui::NodeAdapter::peerCountUpdatedSignal(quintptr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WalletGui::NodeAdapter::initNodeSignal(Node * * _t1, const CryptoNote::Currency * _t2, INodeCallback * _t3, Logging::LoggerManager * _t4, const CryptoNote::CoreConfig & _t5, const CryptoNote::NetNodeConfig & _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WalletGui::NodeAdapter::deinitNodeSignal(Node * * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WalletGui::NodeAdapter::connectionFailedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
