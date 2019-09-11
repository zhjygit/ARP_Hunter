/****************************************************************************
** Meta object code from reading C++ file 'ARP_Hunter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ARP_Hunter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ARP_Hunter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ARP_Listener_t {
    QByteArrayData data[8];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ARP_Listener_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ARP_Listener_t qt_meta_stringdata_ARP_Listener = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ARP_Listener"
QT_MOC_LITERAL(1, 13, 7), // "newItem"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 3), // "len"
QT_MOC_LITERAL(4, 26, 3), // "src"
QT_MOC_LITERAL(5, 30, 3), // "des"
QT_MOC_LITERAL(6, 34, 5), // "frame"
QT_MOC_LITERAL(7, 40, 6) // "listen"

    },
    "ARP_Listener\0newItem\0\0len\0src\0des\0"
    "frame\0listen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ARP_Listener[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ARP_Listener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ARP_Listener *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->listen(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ARP_Listener::*)(int , QString , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ARP_Listener::newItem)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ARP_Listener::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ARP_Listener.data,
    qt_meta_data_ARP_Listener,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ARP_Listener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ARP_Listener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ARP_Listener.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ARP_Listener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ARP_Listener::newItem(int _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ARP_Hunter_t {
    QByteArrayData data[14];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ARP_Hunter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ARP_Hunter_t qt_meta_stringdata_ARP_Hunter = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ARP_Hunter"
QT_MOC_LITERAL(1, 11, 13), // "about_clicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 19), // "startButton_clicked"
QT_MOC_LITERAL(4, 46, 18), // "stopButton_clicked"
QT_MOC_LITERAL(5, 65, 19), // "clearButton_clicked"
QT_MOC_LITERAL(6, 85, 16), // "tableRow_clicked"
QT_MOC_LITERAL(7, 102, 1), // "x"
QT_MOC_LITERAL(8, 104, 1), // "y"
QT_MOC_LITERAL(9, 106, 11), // "updateTable"
QT_MOC_LITERAL(10, 118, 3), // "len"
QT_MOC_LITERAL(11, 122, 3), // "src"
QT_MOC_LITERAL(12, 126, 3), // "des"
QT_MOC_LITERAL(13, 130, 5) // "frame"

    },
    "ARP_Hunter\0about_clicked\0\0startButton_clicked\0"
    "stopButton_clicked\0clearButton_clicked\0"
    "tableRow_clicked\0x\0y\0updateTable\0len\0"
    "src\0des\0frame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ARP_Hunter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    2,   48,    2, 0x08 /* Private */,
       9,    4,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,   10,   11,   12,   13,

       0        // eod
};

void ARP_Hunter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ARP_Hunter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->about_clicked(); break;
        case 1: _t->startButton_clicked(); break;
        case 2: _t->stopButton_clicked(); break;
        case 3: _t->clearButton_clicked(); break;
        case 4: _t->tableRow_clicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->updateTable((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ARP_Hunter::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_ARP_Hunter.data,
    qt_meta_data_ARP_Hunter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ARP_Hunter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ARP_Hunter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ARP_Hunter.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ARP_Hunter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
