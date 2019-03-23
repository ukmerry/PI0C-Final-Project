/****************************************************************************
** Meta object code from reading C++ file 'tictactoe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TicTacToe/tictactoe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tictactoe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TicTacToe_t {
    QByteArrayData data[11];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TicTacToe_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TicTacToe_t qt_meta_stringdata_TicTacToe = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TicTacToe"
QT_MOC_LITERAL(1, 10, 24), // "on_toolButton_11_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 24), // "on_toolButton_12_clicked"
QT_MOC_LITERAL(4, 61, 24), // "on_toolButton_13_clicked"
QT_MOC_LITERAL(5, 86, 24), // "on_toolButton_21_clicked"
QT_MOC_LITERAL(6, 111, 24), // "on_toolButton_22_clicked"
QT_MOC_LITERAL(7, 136, 24), // "on_toolButton_23_clicked"
QT_MOC_LITERAL(8, 161, 24), // "on_toolButton_31_clicked"
QT_MOC_LITERAL(9, 186, 24), // "on_toolButton_32_clicked"
QT_MOC_LITERAL(10, 211, 24) // "on_toolButton_33_clicked"

    },
    "TicTacToe\0on_toolButton_11_clicked\0\0"
    "on_toolButton_12_clicked\0"
    "on_toolButton_13_clicked\0"
    "on_toolButton_21_clicked\0"
    "on_toolButton_22_clicked\0"
    "on_toolButton_23_clicked\0"
    "on_toolButton_31_clicked\0"
    "on_toolButton_32_clicked\0"
    "on_toolButton_33_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TicTacToe[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TicTacToe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TicTacToe *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_toolButton_11_clicked(); break;
        case 1: _t->on_toolButton_12_clicked(); break;
        case 2: _t->on_toolButton_13_clicked(); break;
        case 3: _t->on_toolButton_21_clicked(); break;
        case 4: _t->on_toolButton_22_clicked(); break;
        case 5: _t->on_toolButton_23_clicked(); break;
        case 6: _t->on_toolButton_31_clicked(); break;
        case 7: _t->on_toolButton_32_clicked(); break;
        case 8: _t->on_toolButton_33_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TicTacToe::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_TicTacToe.data,
    qt_meta_data_TicTacToe,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TicTacToe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TicTacToe::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TicTacToe.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TicTacToe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
