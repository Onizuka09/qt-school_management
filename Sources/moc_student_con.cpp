/****************************************************************************
** Meta object code from reading C++ file 'student_con.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "student_con.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'student_con.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_student_t {
    uint offsetsAndSizes[22];
    char stringdata0[8];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[22];
    char stringdata5[26];
    char stringdata6[26];
    char stringdata7[24];
    char stringdata8[31];
    char stringdata9[26];
    char stringdata10[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_student_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_student_t qt_meta_stringdata_student = {
    {
        QT_MOC_LITERAL(0, 7),  // "student"
        QT_MOC_LITERAL(8, 18),  // "on_connect_clicked"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 19),  // "on_info_btn_clicked"
        QT_MOC_LITERAL(48, 21),  // "on_logout_btn_clicked"
        QT_MOC_LITERAL(70, 25),  // "on_time_table_btn_clicked"
        QT_MOC_LITERAL(96, 25),  // "on_classmates_btn_clicked"
        QT_MOC_LITERAL(122, 23),  // "on_teachers_btn_clicked"
        QT_MOC_LITERAL(146, 30),  // "on_create_new_user_btn_clicked"
        QT_MOC_LITERAL(177, 25),  // "on_delete_account_clicked"
        QT_MOC_LITERAL(203, 15)   // "get_best_grades"
    },
    "student",
    "on_connect_clicked",
    "",
    "on_info_btn_clicked",
    "on_logout_btn_clicked",
    "on_time_table_btn_clicked",
    "on_classmates_btn_clicked",
    "on_teachers_btn_clicked",
    "on_create_new_user_btn_clicked",
    "on_delete_account_clicked",
    "get_best_grades"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_student[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    0,   73,    2, 0x08,    6 /* Private */,
       8,    0,   74,    2, 0x08,    7 /* Private */,
       9,    0,   75,    2, 0x08,    8 /* Private */,
      10,    0,   76,    2, 0x08,    9 /* Private */,

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

void student::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<student *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_connect_clicked(); break;
        case 1: _t->on_info_btn_clicked(); break;
        case 2: _t->on_logout_btn_clicked(); break;
        case 3: _t->on_time_table_btn_clicked(); break;
        case 4: _t->on_classmates_btn_clicked(); break;
        case 5: _t->on_teachers_btn_clicked(); break;
        case 6: _t->on_create_new_user_btn_clicked(); break;
        case 7: _t->on_delete_account_clicked(); break;
        case 8: _t->get_best_grades(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject student::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_student.offsetsAndSizes,
    qt_meta_data_student,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_student_t
, QtPrivate::TypeAndForceComplete<student, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *student::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *student::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_student.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int student::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
