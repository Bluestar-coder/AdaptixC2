/****************************************************************************
** Meta object code from reading C++ file 'QlementineStyle.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../include/oclero/qlementine/style/QlementineStyle.hpp"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QlementineStyle.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_oclero__qlementine__QlementineStyle_t {
    uint offsetsAndSizes[10];
    char stringdata0[36];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_oclero__qlementine__QlementineStyle_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_oclero__qlementine__QlementineStyle_t qt_meta_stringdata_oclero__qlementine__QlementineStyle = {
    {
        QT_MOC_LITERAL(0, 35),  // "oclero::qlementine::Qlementin..."
        QT_MOC_LITERAL(36, 12),  // "themeChanged"
        QT_MOC_LITERAL(49, 0),  // ""
        QT_MOC_LITERAL(50, 24),  // "animationsEnabledChanged"
        QT_MOC_LITERAL(75, 17)   // "animationsEnabled"
    },
    "oclero::qlementine::QlementineStyle",
    "themeChanged",
    "",
    "animationsEnabledChanged",
    "animationsEnabled"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_oclero__qlementine__QlementineStyle[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    2 /* Public */,
       3,    0,   27,    2, 0x06,    3 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00015103, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject oclero::qlementine::QlementineStyle::staticMetaObject = { {
    QMetaObject::SuperData::link<QCommonStyle::staticMetaObject>(),
    qt_meta_stringdata_oclero__qlementine__QlementineStyle.offsetsAndSizes,
    qt_meta_data_oclero__qlementine__QlementineStyle,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_oclero__qlementine__QlementineStyle_t,
        // property 'animationsEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QlementineStyle, std::true_type>,
        // method 'themeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'animationsEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void oclero::qlementine::QlementineStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QlementineStyle *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->themeChanged(); break;
        case 1: _t->animationsEnabledChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QlementineStyle::*)();
            if (_t _q_method = &QlementineStyle::themeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QlementineStyle::*)();
            if (_t _q_method = &QlementineStyle::animationsEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QlementineStyle *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->animationsEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QlementineStyle *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAnimationsEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *oclero::qlementine::QlementineStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oclero::qlementine::QlementineStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oclero__qlementine__QlementineStyle.stringdata0))
        return static_cast<void*>(this);
    return QCommonStyle::qt_metacast(_clname);
}

int oclero::qlementine::QlementineStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCommonStyle::qt_metacall(_c, _id, _a);
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
void oclero::qlementine::QlementineStyle::themeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void oclero::qlementine::QlementineStyle::animationsEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
