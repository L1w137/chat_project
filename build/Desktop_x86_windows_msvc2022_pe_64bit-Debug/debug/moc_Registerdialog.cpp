/****************************************************************************
** Meta object code from reading C++ file 'Registerdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Registerdialog.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Registerdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSRegister_DialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRegister_DialogENDCLASS = QtMocHelpers::stringData(
    "Register_Dialog",
    "on_v_code_pushButton_clicked",
    "",
    "slot_reg_mod_finish",
    "ReqId",
    "id",
    "res",
    "ErrorCodes",
    "err"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRegister_DialogENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[16];
    char stringdata1[29];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[6];
    char stringdata5[3];
    char stringdata6[4];
    char stringdata7[11];
    char stringdata8[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRegister_DialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRegister_DialogENDCLASS_t qt_meta_stringdata_CLASSRegister_DialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "Register_Dialog"
        QT_MOC_LITERAL(16, 28),  // "on_v_code_pushButton_clicked"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 19),  // "slot_reg_mod_finish"
        QT_MOC_LITERAL(66, 5),  // "ReqId"
        QT_MOC_LITERAL(72, 2),  // "id"
        QT_MOC_LITERAL(75, 3),  // "res"
        QT_MOC_LITERAL(79, 10),  // "ErrorCodes"
        QT_MOC_LITERAL(90, 3)   // "err"
    },
    "Register_Dialog",
    "on_v_code_pushButton_clicked",
    "",
    "slot_reg_mod_finish",
    "ReqId",
    "id",
    "res",
    "ErrorCodes",
    "err"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRegister_DialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    3,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QString, 0x80000000 | 7,    5,    6,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject Register_Dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSRegister_DialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRegister_DialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRegister_DialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Register_Dialog, std::true_type>,
        // method 'on_v_code_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_reg_mod_finish'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ReqId, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<ErrorCodes, std::false_type>
    >,
    nullptr
} };

void Register_Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Register_Dialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_v_code_pushButton_clicked(); break;
        case 1: _t->slot_reg_mod_finish((*reinterpret_cast< std::add_pointer_t<ReqId>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ErrorCodes>>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject *Register_Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Register_Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRegister_DialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Register_Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
