/****************************************************************************
** Meta object code from reading C++ file 'Action.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../include/oclero/qlementine/widgets/Action.hpp"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Action.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_oclero__qlementine__Action_t {
    uint offsetsAndSizes[20];
    char stringdata0[27];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[28];
    char stringdata5[19];
    char stringdata6[17];
    char stringdata7[12];
    char stringdata8[13];
    char stringdata9[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_oclero__qlementine__Action_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_oclero__qlementine__Action_t qt_meta_stringdata_oclero__qlementine__Action = {
    {
        QT_MOC_LITERAL(0, 26),  // "oclero::qlementine::Action"
        QT_MOC_LITERAL(27, 23),  // "shortcutEditableChanged"
        QT_MOC_LITERAL(51, 0),  // ""
        QT_MOC_LITERAL(52, 19),  // "userShortcutChanged"
        QT_MOC_LITERAL(72, 27),  // "shortcutEditedByUserChanged"
        QT_MOC_LITERAL(100, 18),  // "descriptionChanged"
        QT_MOC_LITERAL(119, 16),  // "shortcutEditable"
        QT_MOC_LITERAL(136, 11),  // "description"
        QT_MOC_LITERAL(148, 12),  // "userShortcut"
        QT_MOC_LITERAL(161, 12)   // "QKeySequence"
    },
    "oclero::qlementine::Action",
    "shortcutEditableChanged",
    "",
    "userShortcutChanged",
    "shortcutEditedByUserChanged",
    "descriptionChanged",
    "shortcutEditable",
    "description",
    "userShortcut",
    "QKeySequence"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_oclero__qlementine__Action[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    4 /* Public */,
       3,    0,   39,    2, 0x06,    5 /* Public */,
       4,    0,   40,    2, 0x06,    6 /* Public */,
       5,    0,   41,    2, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00015103, uint(0), 0,
       7, QMetaType::QString, 0x00015103, uint(3), 0,
       8, 0x80000000 | 9, 0x0001510b, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject oclero::qlementine::Action::staticMetaObject = { {
    QMetaObject::SuperData::link<QAction::staticMetaObject>(),
    qt_meta_stringdata_oclero__qlementine__Action.offsetsAndSizes,
    qt_meta_data_oclero__qlementine__Action,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_oclero__qlementine__Action_t,
        // property 'shortcutEditable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'description'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'userShortcut'
        QtPrivate::TypeAndForceComplete<QKeySequence, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Action, std::true_type>,
        // method 'shortcutEditableChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'userShortcutChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'shortcutEditedByUserChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'descriptionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void oclero::qlementine::Action::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Action *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->shortcutEditableChanged(); break;
        case 1: _t->userShortcutChanged(); break;
        case 2: _t->shortcutEditedByUserChanged(); break;
        case 3: _t->descriptionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Action::*)();
            if (_t _q_method = &Action::shortcutEditableChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Action::*)();
            if (_t _q_method = &Action::userShortcutChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Action::*)();
            if (_t _q_method = &Action::shortcutEditedByUserChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Action::*)();
            if (_t _q_method = &Action::descriptionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Action *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->shortcutEditable(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 2: *reinterpret_cast< QKeySequence*>(_v) = _t->userShortcut(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Action *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setShortcutEditable(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setUserShortcut(*reinterpret_cast< QKeySequence*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *oclero::qlementine::Action::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oclero::qlementine::Action::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oclero__qlementine__Action.stringdata0))
        return static_cast<void*>(this);
    return QAction::qt_metacast(_clname);
}

int oclero::qlementine::Action::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAction::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void oclero::qlementine::Action::shortcutEditableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void oclero::qlementine::Action::userShortcutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void oclero::qlementine::Action::shortcutEditedByUserChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void oclero::qlementine::Action::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
