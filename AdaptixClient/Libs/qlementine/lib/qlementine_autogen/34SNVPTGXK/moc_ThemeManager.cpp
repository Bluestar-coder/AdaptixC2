/****************************************************************************
** Meta object code from reading C++ file 'ThemeManager.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../include/oclero/qlementine/style/ThemeManager.hpp"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ThemeManager.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_oclero__qlementine__ThemeManager_t {
    uint offsetsAndSizes[16];
    char stringdata0[33];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[13];
    char stringdata5[17];
    char stringdata6[13];
    char stringdata7[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_oclero__qlementine__ThemeManager_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_oclero__qlementine__ThemeManager_t qt_meta_stringdata_oclero__qlementine__ThemeManager = {
    {
        QT_MOC_LITERAL(0, 32),  // "oclero::qlementine::ThemeManager"
        QT_MOC_LITERAL(33, 19),  // "currentThemeChanged"
        QT_MOC_LITERAL(53, 0),  // ""
        QT_MOC_LITERAL(54, 17),  // "themeCountChanged"
        QT_MOC_LITERAL(72, 12),  // "setNextTheme"
        QT_MOC_LITERAL(85, 16),  // "setPreviousTheme"
        QT_MOC_LITERAL(102, 12),  // "currentTheme"
        QT_MOC_LITERAL(115, 10)   // "themeCount"
    },
    "oclero::qlementine::ThemeManager",
    "currentThemeChanged",
    "",
    "themeCountChanged",
    "setNextTheme",
    "setPreviousTheme",
    "currentTheme",
    "themeCount"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_oclero__qlementine__ThemeManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    3 /* Public */,
       3,    0,   39,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   40,    2, 0x0a,    5 /* Public */,
       5,    0,   41,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00015103, uint(0), 0,
       7, QMetaType::Int, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject oclero::qlementine::ThemeManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_oclero__qlementine__ThemeManager.offsetsAndSizes,
    qt_meta_data_oclero__qlementine__ThemeManager,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_oclero__qlementine__ThemeManager_t,
        // property 'currentTheme'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'themeCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ThemeManager, std::true_type>,
        // method 'currentThemeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'themeCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setNextTheme'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setPreviousTheme'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void oclero::qlementine::ThemeManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThemeManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentThemeChanged(); break;
        case 1: _t->themeCountChanged(); break;
        case 2: _t->setNextTheme(); break;
        case 3: _t->setPreviousTheme(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ThemeManager::*)();
            if (_t _q_method = &ThemeManager::currentThemeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ThemeManager::*)();
            if (_t _q_method = &ThemeManager::themeCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ThemeManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentTheme(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->themeCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ThemeManager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentTheme(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *oclero::qlementine::ThemeManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oclero::qlementine::ThemeManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oclero__qlementine__ThemeManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int oclero::qlementine::ThemeManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void oclero::qlementine::ThemeManager::currentThemeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void oclero::qlementine::ThemeManager::themeCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
