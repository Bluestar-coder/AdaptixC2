/****************************************************************************
** Meta object code from reading C++ file 'PlainTextEdit.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../include/oclero/qlementine/widgets/PlainTextEdit.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlainTextEdit.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_oclero__qlementine__PlainTextEdit_t {
    uint offsetsAndSizes[12];
    char stringdata0[34];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[7];
    char stringdata5[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_oclero__qlementine__PlainTextEdit_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_oclero__qlementine__PlainTextEdit_t qt_meta_stringdata_oclero__qlementine__PlainTextEdit = {
    {
        QT_MOC_LITERAL(0, 33),  // "oclero::qlementine::PlainText..."
        QT_MOC_LITERAL(34, 13),  // "statusChanged"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 9),  // "setStatus"
        QT_MOC_LITERAL(59, 6),  // "Status"
        QT_MOC_LITERAL(66, 6)   // "status"
    },
    "oclero::qlementine::PlainTextEdit",
    "statusChanged",
    "",
    "setStatus",
    "Status",
    "status"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_oclero__qlementine__PlainTextEdit[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   27,    2, 0x0a,    3 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,

 // properties: name, type, flags
       5, 0x80000000 | 4, 0x0001510b, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject oclero::qlementine::PlainTextEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlainTextEdit::staticMetaObject>(),
    qt_meta_stringdata_oclero__qlementine__PlainTextEdit.offsetsAndSizes,
    qt_meta_data_oclero__qlementine__PlainTextEdit,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_oclero__qlementine__PlainTextEdit_t,
        // property 'status'
        QtPrivate::TypeAndForceComplete<Status, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PlainTextEdit, std::true_type>,
        // method 'statusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Status, std::false_type>
    >,
    nullptr
} };

void oclero::qlementine::PlainTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlainTextEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->statusChanged(); break;
        case 1: _t->setStatus((*reinterpret_cast< std::add_pointer_t<Status>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlainTextEdit::*)();
            if (_t _q_method = &PlainTextEdit::statusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PlainTextEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Status*>(_v) = _t->status(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PlainTextEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStatus(*reinterpret_cast< Status*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *oclero::qlementine::PlainTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oclero::qlementine::PlainTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oclero__qlementine__PlainTextEdit.stringdata0))
        return static_cast<void*>(this);
    return QPlainTextEdit::qt_metacast(_clname);
}

int oclero::qlementine::PlainTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void oclero::qlementine::PlainTextEdit::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
