/****************************************************************************
** Meta object code from reading C++ file 'Expander.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../include/oclero/qlementine/widgets/Expander.hpp"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Expander.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_oclero__qlementine__Expander_t {
    uint offsetsAndSizes[28];
    char stringdata0[29];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[14];
    char stringdata5[10];
    char stringdata6[10];
    char stringdata7[19];
    char stringdata8[15];
    char stringdata9[12];
    char stringdata10[9];
    char stringdata11[15];
    char stringdata12[16];
    char stringdata13[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_oclero__qlementine__Expander_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_oclero__qlementine__Expander_t qt_meta_stringdata_oclero__qlementine__Expander = {
    {
        QT_MOC_LITERAL(0, 28),  // "oclero::qlementine::Expander"
        QT_MOC_LITERAL(29, 15),  // "expandedChanged"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 13),  // "aboutToExpand"
        QT_MOC_LITERAL(60, 13),  // "aboutToShrink"
        QT_MOC_LITERAL(74, 9),  // "didExpand"
        QT_MOC_LITERAL(84, 9),  // "didShrink"
        QT_MOC_LITERAL(94, 18),  // "orientationChanged"
        QT_MOC_LITERAL(113, 14),  // "contentChanged"
        QT_MOC_LITERAL(128, 11),  // "setExpanded"
        QT_MOC_LITERAL(140, 8),  // "expanded"
        QT_MOC_LITERAL(149, 14),  // "setOrientation"
        QT_MOC_LITERAL(164, 15),  // "Qt::Orientation"
        QT_MOC_LITERAL(180, 11)   // "orientation"
    },
    "oclero::qlementine::Expander",
    "expandedChanged",
    "",
    "aboutToExpand",
    "aboutToShrink",
    "didExpand",
    "didShrink",
    "orientationChanged",
    "contentChanged",
    "setExpanded",
    "expanded",
    "setOrientation",
    "Qt::Orientation",
    "orientation"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_oclero__qlementine__Expander[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       2,   81, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    3 /* Public */,
       3,    0,   69,    2, 0x06,    4 /* Public */,
       4,    0,   70,    2, 0x06,    5 /* Public */,
       5,    0,   71,    2, 0x06,    6 /* Public */,
       6,    0,   72,    2, 0x06,    7 /* Public */,
       7,    0,   73,    2, 0x06,    8 /* Public */,
       8,    0,   74,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,   75,    2, 0x0a,   10 /* Public */,
      11,    1,   78,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00015103, uint(0), 0,
      13, 0x80000000 | 12, 0x0001510b, uint(5), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject oclero::qlementine::Expander::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_oclero__qlementine__Expander.offsetsAndSizes,
    qt_meta_data_oclero__qlementine__Expander,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_oclero__qlementine__Expander_t,
        // property 'expanded'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'orientation'
        QtPrivate::TypeAndForceComplete<Qt::Orientation, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Expander, std::true_type>,
        // method 'expandedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'aboutToExpand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'aboutToShrink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'didExpand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'didShrink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'orientationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'contentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setExpanded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setOrientation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Qt::Orientation, std::false_type>
    >,
    nullptr
} };

void oclero::qlementine::Expander::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Expander *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->expandedChanged(); break;
        case 1: _t->aboutToExpand(); break;
        case 2: _t->aboutToShrink(); break;
        case 3: _t->didExpand(); break;
        case 4: _t->didShrink(); break;
        case 5: _t->orientationChanged(); break;
        case 6: _t->contentChanged(); break;
        case 7: _t->setExpanded((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->setOrientation((*reinterpret_cast< std::add_pointer_t<Qt::Orientation>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Expander::*)();
            if (_t _q_method = &Expander::expandedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Expander::*)();
            if (_t _q_method = &Expander::aboutToExpand; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Expander::*)();
            if (_t _q_method = &Expander::aboutToShrink; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Expander::*)();
            if (_t _q_method = &Expander::didExpand; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Expander::*)();
            if (_t _q_method = &Expander::didShrink; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Expander::*)();
            if (_t _q_method = &Expander::orientationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Expander::*)();
            if (_t _q_method = &Expander::contentChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Expander *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->expanded(); break;
        case 1: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Expander *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setExpanded(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *oclero::qlementine::Expander::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oclero::qlementine::Expander::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oclero__qlementine__Expander.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int oclero::qlementine::Expander::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void oclero::qlementine::Expander::expandedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void oclero::qlementine::Expander::aboutToExpand()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void oclero::qlementine::Expander::aboutToShrink()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void oclero::qlementine::Expander::didExpand()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void oclero::qlementine::Expander::didShrink()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void oclero::qlementine::Expander::orientationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void oclero::qlementine::Expander::contentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
