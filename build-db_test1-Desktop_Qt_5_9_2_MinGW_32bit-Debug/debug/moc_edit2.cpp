/****************************************************************************
** Meta object code from reading C++ file 'edit2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../db_test1/edit2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edit2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_edit2_t {
    QByteArrayData data[15];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_edit2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_edit2_t qt_meta_stringdata_edit2 = {
    {
QT_MOC_LITERAL(0, 0, 5), // "edit2"
QT_MOC_LITERAL(1, 6, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 18), // "on_add_btn_clicked"
QT_MOC_LITERAL(4, 48, 15), // "on_back_clicked"
QT_MOC_LITERAL(5, 64, 21), // "on_update_btn_clicked"
QT_MOC_LITERAL(6, 86, 27), // "on_table_currentItemChanged"
QT_MOC_LITERAL(7, 114, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(8, 132, 7), // "current"
QT_MOC_LITERAL(9, 140, 8), // "previous"
QT_MOC_LITERAL(10, 149, 14), // "lineEditGetTem"
QT_MOC_LITERAL(11, 164, 3), // "str"
QT_MOC_LITERAL(12, 168, 21), // "on_delete_btn_clicked"
QT_MOC_LITERAL(13, 190, 26), // "on_table_itemDoubleClicked"
QT_MOC_LITERAL(14, 217, 4) // "item"

    },
    "edit2\0on_pushButton_clicked\0\0"
    "on_add_btn_clicked\0on_back_clicked\0"
    "on_update_btn_clicked\0on_table_currentItemChanged\0"
    "QTableWidgetItem*\0current\0previous\0"
    "lineEditGetTem\0str\0on_delete_btn_clicked\0"
    "on_table_itemDoubleClicked\0item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_edit2[] = {

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
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    2,   58,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,
      12,    0,   66,    2, 0x08 /* Private */,
      13,    1,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,   14,

       0        // eod
};

void edit2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        edit2 *_t = static_cast<edit2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_add_btn_clicked(); break;
        case 2: _t->on_back_clicked(); break;
        case 3: _t->on_update_btn_clicked(); break;
        case 4: _t->on_table_currentItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QTableWidgetItem*(*)>(_a[2]))); break;
        case 5: _t->lineEditGetTem((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_delete_btn_clicked(); break;
        case 7: _t->on_table_itemDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject edit2::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_edit2.data,
      qt_meta_data_edit2,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *edit2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edit2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_edit2.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int edit2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
