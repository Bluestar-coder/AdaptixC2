/****************************************************************************
** Meta object code from reading C++ file 'ColorButton.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../include/oclero/qlementine/widgets/ColorButton.hpp"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ColorButton.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_oclero__qlementine__ColorButton_t {
    uint offsetsAndSizes[14];
    char stringdata0[32];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[6];
    char stringdata5[10];
    char stringdata6[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_oclero__qlementine__ColorButton_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_oclero__qlementine__ColorButton_t qt_meta_stringdata_oclero__qlementine__ColorButton = {
    {
        QT_MOC_LITERAL(0, 31),  // "oclero::qlementine::ColorButton"
        QT_MOC_LITERAL(32, 12),  // "colorChanged"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 16),  // "colorModeChanged"
        QT_MOC_LITERAL(63, 5),  // "color"
        QT_MOC_LITERAL(69, 9),  // "colorMode"
        QT_MOC_LITERAL(79, 9)   // "ColorMode"
    },
    "oclero::qlementine::ColorButton",
    "colorChanged",
    "",
    "colorModeChanged",
    "color",
    "colorMode",
    "ColorMode"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_oclero__qlementine__ColorButton[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    3 /* Public */,
       3,    0,   27,    2, 0x06,    4 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QColor, 0x00015103, uint(0), 0,
       5, 0x80000000 | 6, 0x0001510b, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject oclero::qlementine::ColorButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractButton::staticMetaObject>(),
    qt_meta_stringdata_oclero__qlementine__ColorButton.offsetsAndSizes,
    qt_meta_data_oclero__qlementine__ColorButton,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_oclero__qlementine__ColorButton_t,
        // property 'color'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'colorMode'
        QtPrivate::TypeAndForceComplete<ColorMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ColorButton, std::true_type>,
        // method 'colorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'colorModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void oclero::qlementine::ColorButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->colorChanged(); break;
        case 1: _t->colorModeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorButton::*)();
            if (_t _q_method = &ColorButton::colorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ColorButton::*)();
            if (_t _q_method = &ColorButton::colorModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ColorButton *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast< ColorMode*>(_v) = _t->colorMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ColorButton *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setColorMode(*reinterpret_cast< ColorMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *oclero::qlementine::ColorButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oclero::qlementine::ColorButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oclero__qlementine__ColorButton.stringdata0))
        return static_cast<void*>(this);
    return QAbstractButton::qt_metacast(_clname);
}

int oclero::qlementine::ColorButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractButton::qt_metacall(_c, _id, _a);
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
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void oclero::qlementine::ColorButton::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void oclero::qlementine::ColorButton::colorModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
