/****************************************************************************
** Meta object code from reading C++ file 'Label.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../include/oclero/qlementine/widgets/Label.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Label.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_oclero__qlementine__Label_t {
    uint offsetsAndSizes[14];
    char stringdata0[26];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[9];
    char stringdata5[5];
    char stringdata6[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_oclero__qlementine__Label_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_oclero__qlementine__Label_t qt_meta_stringdata_oclero__qlementine__Label = {
    {
        QT_MOC_LITERAL(0, 25),  // "oclero::qlementine::Label"
        QT_MOC_LITERAL(26, 11),  // "roleChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 7),  // "setRole"
        QT_MOC_LITERAL(47, 8),  // "TextRole"
        QT_MOC_LITERAL(56, 4),  // "role"
        QT_MOC_LITERAL(61, 28)   // "oclero::qlementine::TextRole"
    },
    "oclero::qlementine::Label",
    "roleChanged",
    "",
    "setRole",
    "TextRole",
    "role",
    "oclero::qlementine::TextRole"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_oclero__qlementine__Label[] = {

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
       5, 0x80000000 | 6, 0x0001510b, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject oclero::qlementine::Label::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_oclero__qlementine__Label.offsetsAndSizes,
    qt_meta_data_oclero__qlementine__Label,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_oclero__qlementine__Label_t,
        // property 'role'
        QtPrivate::TypeAndForceComplete<oclero::qlementine::TextRole, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Label, std::true_type>,
        // method 'roleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setRole'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TextRole, std::false_type>
    >,
    nullptr
} };

void oclero::qlementine::Label::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Label *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->roleChanged(); break;
        case 1: _t->setRole((*reinterpret_cast< std::add_pointer_t<TextRole>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Label::*)();
            if (_t _q_method = &Label::roleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Label *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< oclero::qlementine::TextRole*>(_v) = _t->role(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Label *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRole(*reinterpret_cast< oclero::qlementine::TextRole*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *oclero::qlementine::Label::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oclero::qlementine::Label::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oclero__qlementine__Label.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int oclero::qlementine::Label::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
void oclero::qlementine::Label::roleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
