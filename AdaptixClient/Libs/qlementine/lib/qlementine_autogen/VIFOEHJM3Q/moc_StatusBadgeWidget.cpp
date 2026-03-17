/****************************************************************************
** Meta object code from reading C++ file 'StatusBadgeWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../include/oclero/qlementine/widgets/StatusBadgeWidget.hpp"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StatusBadgeWidget.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_oclero__qlementine__StatusBadgeWidget_t {
    uint offsetsAndSizes[20];
    char stringdata0[38];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[9];
    char stringdata5[12];
    char stringdata6[6];
    char stringdata7[13];
    char stringdata8[16];
    char stringdata9[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_oclero__qlementine__StatusBadgeWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_oclero__qlementine__StatusBadgeWidget_t qt_meta_stringdata_oclero__qlementine__StatusBadgeWidget = {
    {
        QT_MOC_LITERAL(0, 37),  // "oclero::qlementine::StatusBad..."
        QT_MOC_LITERAL(38, 12),  // "badgeChanged"
        QT_MOC_LITERAL(51, 0),  // ""
        QT_MOC_LITERAL(52, 16),  // "badgeSizeChanged"
        QT_MOC_LITERAL(69, 8),  // "setBadge"
        QT_MOC_LITERAL(78, 11),  // "StatusBadge"
        QT_MOC_LITERAL(90, 5),  // "badge"
        QT_MOC_LITERAL(96, 12),  // "setBadgeSize"
        QT_MOC_LITERAL(109, 15),  // "StatusBadgeSize"
        QT_MOC_LITERAL(125, 4)   // "size"
    },
    "oclero::qlementine::StatusBadgeWidget",
    "badgeChanged",
    "",
    "badgeSizeChanged",
    "setBadge",
    "StatusBadge",
    "badge",
    "setBadgeSize",
    "StatusBadgeSize",
    "size"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_oclero__qlementine__StatusBadgeWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,
       3,    0,   39,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   40,    2, 0x0a,    3 /* Public */,
       7,    1,   43,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject oclero::qlementine::StatusBadgeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_oclero__qlementine__StatusBadgeWidget.offsetsAndSizes,
    qt_meta_data_oclero__qlementine__StatusBadgeWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_oclero__qlementine__StatusBadgeWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<StatusBadgeWidget, std::true_type>,
        // method 'badgeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'badgeSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setBadge'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<StatusBadge, std::false_type>,
        // method 'setBadgeSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<StatusBadgeSize, std::false_type>
    >,
    nullptr
} };

void oclero::qlementine::StatusBadgeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StatusBadgeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->badgeChanged(); break;
        case 1: _t->badgeSizeChanged(); break;
        case 2: _t->setBadge((*reinterpret_cast< std::add_pointer_t<StatusBadge>>(_a[1]))); break;
        case 3: _t->setBadgeSize((*reinterpret_cast< std::add_pointer_t<StatusBadgeSize>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StatusBadgeWidget::*)();
            if (_t _q_method = &StatusBadgeWidget::badgeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StatusBadgeWidget::*)();
            if (_t _q_method = &StatusBadgeWidget::badgeSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *oclero::qlementine::StatusBadgeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oclero::qlementine::StatusBadgeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oclero__qlementine__StatusBadgeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int oclero::qlementine::StatusBadgeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    }
    return _id;
}

// SIGNAL 0
void oclero::qlementine::StatusBadgeWidget::badgeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void oclero::qlementine::StatusBadgeWidget::badgeSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
