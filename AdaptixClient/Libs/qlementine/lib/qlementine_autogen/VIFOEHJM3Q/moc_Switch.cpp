/****************************************************************************
** Meta object code from reading C++ file 'Switch.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../include/oclero/qlementine/widgets/Switch.hpp"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Switch.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_oclero__qlementine__Switch_t {
    uint offsetsAndSizes[14];
    char stringdata0[27];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[32];
    char stringdata5[9];
    char stringdata6[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_oclero__qlementine__Switch_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_oclero__qlementine__Switch_t qt_meta_stringdata_oclero__qlementine__Switch = {
    {
        QT_MOC_LITERAL(0, 26),  // "oclero::qlementine::Switch"
        QT_MOC_LITERAL(27, 17),  // "checkStateChanged"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 15),  // "tristateChanged"
        QT_MOC_LITERAL(62, 31),  // "showAccessibilitySymbolsChanged"
        QT_MOC_LITERAL(94, 8),  // "tristate"
        QT_MOC_LITERAL(103, 24)   // "showAccessibilitySymbols"
    },
    "oclero::qlementine::Switch",
    "checkStateChanged",
    "",
    "tristateChanged",
    "showAccessibilitySymbolsChanged",
    "tristate",
    "showAccessibilitySymbols"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_oclero__qlementine__Switch[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   41, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x06,    3 /* Public */,
       3,    1,   35,    2, 0x06,    5 /* Public */,
       4,    1,   38,    2, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags
       5, QMetaType::Bool, 0x00015103, uint(1), 0,
       6, QMetaType::Bool, 0x00015103, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject oclero::qlementine::Switch::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractButton::staticMetaObject>(),
    qt_meta_stringdata_oclero__qlementine__Switch.offsetsAndSizes,
    qt_meta_data_oclero__qlementine__Switch,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_oclero__qlementine__Switch_t,
        // property 'tristate'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'showAccessibilitySymbols'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Switch, std::true_type>,
        // method 'checkStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'tristateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'showAccessibilitySymbolsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void oclero::qlementine::Switch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Switch *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->checkStateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->tristateChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->showAccessibilitySymbolsChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Switch::*)(int );
            if (_t _q_method = &Switch::checkStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Switch::*)(bool );
            if (_t _q_method = &Switch::tristateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Switch::*)(bool );
            if (_t _q_method = &Switch::showAccessibilitySymbolsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Switch *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isTristate(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->showAccessibilitySymbols(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Switch *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTristate(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setShowAccessibilitySymbols(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *oclero::qlementine::Switch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oclero::qlementine::Switch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oclero__qlementine__Switch.stringdata0))
        return static_cast<void*>(this);
    return QAbstractButton::qt_metacast(_clname);
}

int oclero::qlementine::Switch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void oclero::qlementine::Switch::checkStateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void oclero::qlementine::Switch::tristateChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void oclero::qlementine::Switch::showAccessibilitySymbolsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
