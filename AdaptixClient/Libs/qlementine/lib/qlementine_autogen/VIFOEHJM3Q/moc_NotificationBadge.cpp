/****************************************************************************
** Meta object code from reading C++ file 'NotificationBadge.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../include/oclero/qlementine/widgets/NotificationBadge.hpp"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NotificationBadge.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_oclero__qlementine__NotificationBadge_t {
    uint offsetsAndSizes[34];
    char stringdata0[38];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[23];
    char stringdata5[24];
    char stringdata6[15];
    char stringdata7[8];
    char stringdata8[19];
    char stringdata9[19];
    char stringdata10[20];
    char stringdata11[11];
    char stringdata12[9];
    char stringdata13[5];
    char stringdata14[16];
    char stringdata15[16];
    char stringdata16[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_oclero__qlementine__NotificationBadge_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_oclero__qlementine__NotificationBadge_t qt_meta_stringdata_oclero__qlementine__NotificationBadge = {
    {
        QT_MOC_LITERAL(0, 37),  // "oclero::qlementine::Notificat..."
        QT_MOC_LITERAL(38, 11),  // "textChanged"
        QT_MOC_LITERAL(50, 0),  // ""
        QT_MOC_LITERAL(51, 22),  // "foregroundColorChanged"
        QT_MOC_LITERAL(74, 22),  // "backgroundColorChanged"
        QT_MOC_LITERAL(97, 23),  // "relativePositionChanged"
        QT_MOC_LITERAL(121, 14),  // "paddingChanged"
        QT_MOC_LITERAL(136, 7),  // "setText"
        QT_MOC_LITERAL(144, 18),  // "setForegroundColor"
        QT_MOC_LITERAL(163, 18),  // "setBackgroundColor"
        QT_MOC_LITERAL(182, 19),  // "setRelativePosition"
        QT_MOC_LITERAL(202, 10),  // "setPadding"
        QT_MOC_LITERAL(213, 8),  // "QMargins"
        QT_MOC_LITERAL(222, 4),  // "text"
        QT_MOC_LITERAL(227, 15),  // "foregroundColor"
        QT_MOC_LITERAL(243, 15),  // "backgroundColor"
        QT_MOC_LITERAL(259, 16)   // "relativePosition"
    },
    "oclero::qlementine::NotificationBadge",
    "textChanged",
    "",
    "foregroundColorChanged",
    "backgroundColorChanged",
    "relativePositionChanged",
    "paddingChanged",
    "setText",
    "setForegroundColor",
    "setBackgroundColor",
    "setRelativePosition",
    "setPadding",
    "QMargins",
    "text",
    "foregroundColor",
    "backgroundColor",
    "relativePosition"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_oclero__qlementine__NotificationBadge[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       4,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    5 /* Public */,
       3,    0,   75,    2, 0x06,    6 /* Public */,
       4,    0,   76,    2, 0x06,    7 /* Public */,
       5,    0,   77,    2, 0x06,    8 /* Public */,
       6,    0,   78,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   79,    2, 0x0a,   10 /* Public */,
       8,    1,   82,    2, 0x0a,   12 /* Public */,
       9,    1,   85,    2, 0x0a,   14 /* Public */,
      10,    1,   88,    2, 0x0a,   16 /* Public */,
      11,    1,   91,    2, 0x0a,   18 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, 0x80000000 | 12,    2,

 // properties: name, type, flags
      13, QMetaType::QString, 0x00015103, uint(0), 0,
      14, QMetaType::QColor, 0x00015103, uint(1), 0,
      15, QMetaType::QColor, 0x00015103, uint(2), 0,
      16, QMetaType::QPoint, 0x00015103, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject oclero::qlementine::NotificationBadge::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_oclero__qlementine__NotificationBadge.offsetsAndSizes,
    qt_meta_data_oclero__qlementine__NotificationBadge,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_oclero__qlementine__NotificationBadge_t,
        // property 'text'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'foregroundColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'backgroundColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'relativePosition'
        QtPrivate::TypeAndForceComplete<QPoint, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NotificationBadge, std::true_type>,
        // method 'textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'foregroundColorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'backgroundColorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'relativePositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'paddingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setForegroundColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'setBackgroundColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'setRelativePosition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'setPadding'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMargins &, std::false_type>
    >,
    nullptr
} };

void oclero::qlementine::NotificationBadge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NotificationBadge *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->textChanged(); break;
        case 1: _t->foregroundColorChanged(); break;
        case 2: _t->backgroundColorChanged(); break;
        case 3: _t->relativePositionChanged(); break;
        case 4: _t->paddingChanged(); break;
        case 5: _t->setText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->setForegroundColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 7: _t->setBackgroundColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 8: _t->setRelativePosition((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 9: _t->setPadding((*reinterpret_cast< std::add_pointer_t<QMargins>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NotificationBadge::*)();
            if (_t _q_method = &NotificationBadge::textChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NotificationBadge::*)();
            if (_t _q_method = &NotificationBadge::foregroundColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NotificationBadge::*)();
            if (_t _q_method = &NotificationBadge::backgroundColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NotificationBadge::*)();
            if (_t _q_method = &NotificationBadge::relativePositionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NotificationBadge::*)();
            if (_t _q_method = &NotificationBadge::paddingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NotificationBadge *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->foregroundColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->backgroundColor(); break;
        case 3: *reinterpret_cast< QPoint*>(_v) = _t->relativePosition(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<NotificationBadge *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setForegroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setRelativePosition(*reinterpret_cast< QPoint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *oclero::qlementine::NotificationBadge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oclero::qlementine::NotificationBadge::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oclero__qlementine__NotificationBadge.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int oclero::qlementine::NotificationBadge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void oclero::qlementine::NotificationBadge::textChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void oclero::qlementine::NotificationBadge::foregroundColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void oclero::qlementine::NotificationBadge::backgroundColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void oclero::qlementine::NotificationBadge::relativePositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void oclero::qlementine::NotificationBadge::paddingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
