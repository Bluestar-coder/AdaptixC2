/****************************************************************************
** Meta object code from reading C++ file 'PopoverButton.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../include/oclero/qlementine/widgets/PopoverButton.hpp"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PopoverButton.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_oclero__qlementine__PopoverButton_t {
    uint offsetsAndSizes[12];
    char stringdata0[34];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[7];
    char stringdata5[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_oclero__qlementine__PopoverButton_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_oclero__qlementine__PopoverButton_t qt_meta_stringdata_oclero__qlementine__PopoverButton = {
    {
        QT_MOC_LITERAL(0, 33),  // "oclero::qlementine::PopoverBu..."
        QT_MOC_LITERAL(34, 27),  // "popoverContentWidgetChanged"
        QT_MOC_LITERAL(62, 0),  // ""
        QT_MOC_LITERAL(63, 20),  // "popoverOpenedChanged"
        QT_MOC_LITERAL(84, 6),  // "opened"
        QT_MOC_LITERAL(91, 16)   // "setPopoverOpened"
    },
    "oclero::qlementine::PopoverButton",
    "popoverContentWidgetChanged",
    "",
    "popoverOpenedChanged",
    "opened",
    "setPopoverOpened"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_oclero__qlementine__PopoverButton[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    1 /* Public */,
       3,    1,   33,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   36,    2, 0x0a,    4 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject oclero::qlementine::PopoverButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_oclero__qlementine__PopoverButton.offsetsAndSizes,
    qt_meta_data_oclero__qlementine__PopoverButton,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_oclero__qlementine__PopoverButton_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PopoverButton, std::true_type>,
        // method 'popoverContentWidgetChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'popoverOpenedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setPopoverOpened'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void oclero::qlementine::PopoverButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PopoverButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->popoverContentWidgetChanged(); break;
        case 1: _t->popoverOpenedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->setPopoverOpened((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PopoverButton::*)();
            if (_t _q_method = &PopoverButton::popoverContentWidgetChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PopoverButton::*)(bool );
            if (_t _q_method = &PopoverButton::popoverOpenedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *oclero::qlementine::PopoverButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oclero::qlementine::PopoverButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oclero__qlementine__PopoverButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int oclero::qlementine::PopoverButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
    }
    return _id;
}

// SIGNAL 0
void oclero::qlementine::PopoverButton::popoverContentWidgetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void oclero::qlementine::PopoverButton::popoverOpenedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
