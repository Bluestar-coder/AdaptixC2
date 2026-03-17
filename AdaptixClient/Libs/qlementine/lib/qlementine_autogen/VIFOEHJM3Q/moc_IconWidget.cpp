/****************************************************************************
** Meta object code from reading C++ file 'IconWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../include/oclero/qlementine/widgets/IconWidget.hpp"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IconWidget.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_oclero__qlementine__IconWidget_t {
    uint offsetsAndSizes[16];
    char stringdata0[31];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[8];
    char stringdata5[5];
    char stringdata6[12];
    char stringdata7[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_oclero__qlementine__IconWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_oclero__qlementine__IconWidget_t qt_meta_stringdata_oclero__qlementine__IconWidget = {
    {
        QT_MOC_LITERAL(0, 30),  // "oclero::qlementine::IconWidget"
        QT_MOC_LITERAL(31, 11),  // "iconChanged"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 15),  // "iconSizeChanged"
        QT_MOC_LITERAL(60, 7),  // "setIcon"
        QT_MOC_LITERAL(68, 4),  // "icon"
        QT_MOC_LITERAL(73, 11),  // "setIconSize"
        QT_MOC_LITERAL(85, 8)   // "iconSize"
    },
    "oclero::qlementine::IconWidget",
    "iconChanged",
    "",
    "iconSizeChanged",
    "setIcon",
    "icon",
    "setIconSize",
    "iconSize"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_oclero__qlementine__IconWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    3 /* Public */,
       3,    0,   39,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   40,    2, 0x0a,    5 /* Public */,
       6,    1,   43,    2, 0x0a,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QIcon,    5,
    QMetaType::Void, QMetaType::QSize,    7,

 // properties: name, type, flags
       5, QMetaType::QIcon, 0x00015103, uint(0), 0,
       7, QMetaType::QSize, 0x00015103, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject oclero::qlementine::IconWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_oclero__qlementine__IconWidget.offsetsAndSizes,
    qt_meta_data_oclero__qlementine__IconWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_oclero__qlementine__IconWidget_t,
        // property 'icon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'iconSize'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<IconWidget, std::true_type>,
        // method 'iconChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'iconSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'setIconSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSize &, std::false_type>
    >,
    nullptr
} };

void oclero::qlementine::IconWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IconWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->iconChanged(); break;
        case 1: _t->iconSizeChanged(); break;
        case 2: _t->setIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 3: _t->setIconSize((*reinterpret_cast< std::add_pointer_t<QSize>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IconWidget::*)();
            if (_t _q_method = &IconWidget::iconChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IconWidget::*)();
            if (_t _q_method = &IconWidget::iconSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<IconWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QIcon*>(_v) = _t->icon(); break;
        case 1: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<IconWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 1: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *oclero::qlementine::IconWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oclero::qlementine::IconWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oclero__qlementine__IconWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int oclero::qlementine::IconWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void oclero::qlementine::IconWidget::iconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void oclero::qlementine::IconWidget::iconSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
