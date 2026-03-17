/****************************************************************************
** Meta object code from reading C++ file 'LoadingSpinner.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../include/oclero/qlementine/widgets/LoadingSpinner.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoadingSpinner.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_oclero__qlementine__LoadingSpinner_t {
    uint offsetsAndSizes[10];
    char stringdata0[35];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_oclero__qlementine__LoadingSpinner_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_oclero__qlementine__LoadingSpinner_t qt_meta_stringdata_oclero__qlementine__LoadingSpinner = {
    {
        QT_MOC_LITERAL(0, 34),  // "oclero::qlementine::LoadingSp..."
        QT_MOC_LITERAL(35, 15),  // "spinningChanged"
        QT_MOC_LITERAL(51, 0),  // ""
        QT_MOC_LITERAL(52, 11),  // "setSpinning"
        QT_MOC_LITERAL(64, 8)   // "spinning"
    },
    "oclero::qlementine::LoadingSpinner",
    "spinningChanged",
    "",
    "setSpinning",
    "spinning"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_oclero__qlementine__LoadingSpinner[] = {

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
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00015103, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject oclero::qlementine::LoadingSpinner::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_oclero__qlementine__LoadingSpinner.offsetsAndSizes,
    qt_meta_data_oclero__qlementine__LoadingSpinner,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_oclero__qlementine__LoadingSpinner_t,
        // property 'spinning'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LoadingSpinner, std::true_type>,
        // method 'spinningChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSpinning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void oclero::qlementine::LoadingSpinner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoadingSpinner *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->spinningChanged(); break;
        case 1: _t->setSpinning((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoadingSpinner::*)();
            if (_t _q_method = &LoadingSpinner::spinningChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LoadingSpinner *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->spinning(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LoadingSpinner *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpinning(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *oclero::qlementine::LoadingSpinner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oclero::qlementine::LoadingSpinner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oclero__qlementine__LoadingSpinner.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int oclero::qlementine::LoadingSpinner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void oclero::qlementine::LoadingSpinner::spinningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
