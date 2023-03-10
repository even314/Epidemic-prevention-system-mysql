/****************************************************************************
** Meta object code from reading C++ file 'citizens.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../db_test1/citizens.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'citizens.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_citizens_t {
    QByteArrayData data[14];
    char stringdata0[281];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_citizens_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_citizens_t qt_meta_stringdata_citizens = {
    {
QT_MOC_LITERAL(0, 0, 8), // "citizens"
QT_MOC_LITERAL(1, 9, 15), // "on_back_clicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 16), // "on_in_id_clicked"
QT_MOC_LITERAL(4, 43, 14), // "lineEditGetTem"
QT_MOC_LITERAL(5, 58, 3), // "str"
QT_MOC_LITERAL(6, 62, 30), // "on_vaccine_appointment_clicked"
QT_MOC_LITERAL(7, 93, 27), // "on_test_appiontment_clicked"
QT_MOC_LITERAL(8, 121, 22), // "on_test_result_clicked"
QT_MOC_LITERAL(9, 144, 25), // "on_vaccine_result_clicked"
QT_MOC_LITERAL(10, 170, 31), // "on_risk_region_inside_a_clicked"
QT_MOC_LITERAL(11, 202, 31), // "on_risk_region_ouside_A_clicked"
QT_MOC_LITERAL(12, 234, 22), // "on_health_code_clicked"
QT_MOC_LITERAL(13, 257, 23) // "on_is_key_range_clicked"

    },
    "citizens\0on_back_clicked\0\0on_in_id_clicked\0"
    "lineEditGetTem\0str\0on_vaccine_appointment_clicked\0"
    "on_test_appiontment_clicked\0"
    "on_test_result_clicked\0on_vaccine_result_clicked\0"
    "on_risk_region_inside_a_clicked\0"
    "on_risk_region_ouside_A_clicked\0"
    "on_health_code_clicked\0on_is_key_range_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_citizens[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    1,   71,    2, 0x08 /* Private */,
       6,    0,   74,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,
      12,    0,   80,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
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

void citizens::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        citizens *_t = static_cast<citizens *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_back_clicked(); break;
        case 1: _t->on_in_id_clicked(); break;
        case 2: _t->lineEditGetTem((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_vaccine_appointment_clicked(); break;
        case 4: _t->on_test_appiontment_clicked(); break;
        case 5: _t->on_test_result_clicked(); break;
        case 6: _t->on_vaccine_result_clicked(); break;
        case 7: _t->on_risk_region_inside_a_clicked(); break;
        case 8: _t->on_risk_region_ouside_A_clicked(); break;
        case 9: _t->on_health_code_clicked(); break;
        case 10: _t->on_is_key_range_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject citizens::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_citizens.data,
      qt_meta_data_citizens,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *citizens::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *citizens::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_citizens.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int citizens::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
