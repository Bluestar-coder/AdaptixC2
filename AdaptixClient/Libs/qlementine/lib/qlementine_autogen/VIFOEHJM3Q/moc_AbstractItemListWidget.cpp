/****************************************************************************
** Meta object code from reading C++ file 'AbstractItemListWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../include/oclero/qlementine/widgets/AbstractItemListWidget.hpp"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AbstractItemListWidget.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_oclero__qlementine__AbstractItemListWidget_t {
    uint offsetsAndSizes[28];
    char stringdata0[43];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[19];
    char stringdata5[16];
    char stringdata6[25];
    char stringdata7[15];
    char stringdata8[19];
    char stringdata9[13];
    char stringdata10[12];
    char stringdata11[10];
    char stringdata12[9];
    char stringdata13[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_oclero__qlementine__AbstractItemListWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_oclero__qlementine__AbstractItemListWidget_t qt_meta_stringdata_oclero__qlementine__AbstractItemListWidget = {
    {
        QT_MOC_LITERAL(0, 42),  // "oclero::qlementine::AbstractI..."
        QT_MOC_LITERAL(43, 16),  // "itemCountChanged"
        QT_MOC_LITERAL(60, 0),  // ""
        QT_MOC_LITERAL(61, 19),  // "currentIndexChanged"
        QT_MOC_LITERAL(81, 18),  // "currentDataChanged"
        QT_MOC_LITERAL(100, 15),  // "iconSizeChanged"
        QT_MOC_LITERAL(116, 24),  // "itemsShouldExpandChanged"
        QT_MOC_LITERAL(141, 14),  // "moveToNextItem"
        QT_MOC_LITERAL(156, 18),  // "moveToPreviousItem"
        QT_MOC_LITERAL(175, 12),  // "currentIndex"
        QT_MOC_LITERAL(188, 11),  // "currentData"
        QT_MOC_LITERAL(200, 9),  // "itemCount"
        QT_MOC_LITERAL(210, 8),  // "iconSize"
        QT_MOC_LITERAL(219, 17)   // "itemsShouldExpand"
    },
    "oclero::qlementine::AbstractItemListWidget",
    "itemCountChanged",
    "",
    "currentIndexChanged",
    "currentDataChanged",
    "iconSizeChanged",
    "itemsShouldExpandChanged",
    "moveToNextItem",
    "moveToPreviousItem",
    "currentIndex",
    "currentData",
    "itemCount",
    "iconSize",
    "itemsShouldExpand"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_oclero__qlementine__AbstractItemListWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       5,   63, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    6 /* Public */,
       3,    0,   57,    2, 0x06,    7 /* Public */,
       4,    0,   58,    2, 0x06,    8 /* Public */,
       5,    0,   59,    2, 0x06,    9 /* Public */,
       6,    0,   60,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   61,    2, 0x0a,   11 /* Public */,
       8,    0,   62,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00015103, uint(1), 0,
      10, QMetaType::QVariant, 0x00015103, uint(2), 0,
      11, QMetaType::Int, 0x00015001, uint(0), 0,
      12, QMetaType::QSize, 0x00015103, uint(3), 0,
      13, QMetaType::Bool, 0x00015103, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject oclero::qlementine::AbstractItemListWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_oclero__qlementine__AbstractItemListWidget.offsetsAndSizes,
    qt_meta_data_oclero__qlementine__AbstractItemListWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_oclero__qlementine__AbstractItemListWidget_t,
        // property 'currentIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'currentData'
        QtPrivate::TypeAndForceComplete<QVariant, std::true_type>,
        // property 'itemCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'iconSize'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // property 'itemsShouldExpand'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AbstractItemListWidget, std::true_type>,
        // method 'itemCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'iconSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'itemsShouldExpandChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveToNextItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moveToPreviousItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void oclero::qlementine::AbstractItemListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractItemListWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->itemCountChanged(); break;
        case 1: _t->currentIndexChanged(); break;
        case 2: _t->currentDataChanged(); break;
        case 3: _t->iconSizeChanged(); break;
        case 4: _t->itemsShouldExpandChanged(); break;
        case 5: _t->moveToNextItem(); break;
        case 6: _t->moveToPreviousItem(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractItemListWidget::*)();
            if (_t _q_method = &AbstractItemListWidget::itemCountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AbstractItemListWidget::*)();
            if (_t _q_method = &AbstractItemListWidget::currentIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AbstractItemListWidget::*)();
            if (_t _q_method = &AbstractItemListWidget::currentDataChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AbstractItemListWidget::*)();
            if (_t _q_method = &AbstractItemListWidget::iconSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AbstractItemListWidget::*)();
            if (_t _q_method = &AbstractItemListWidget::itemsShouldExpandChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AbstractItemListWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->currentData(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->itemCount(); break;
        case 3: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->itemsShouldExpand(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AbstractItemListWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setCurrentData(*reinterpret_cast< QVariant*>(_v)); break;
        case 3: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 4: _t->setItemsShouldExpand(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *oclero::qlementine::AbstractItemListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *oclero::qlementine::AbstractItemListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_oclero__qlementine__AbstractItemListWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int oclero::qlementine::AbstractItemListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void oclero::qlementine::AbstractItemListWidget::itemCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void oclero::qlementine::AbstractItemListWidget::currentIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void oclero::qlementine::AbstractItemListWidget::currentDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void oclero::qlementine::AbstractItemListWidget::iconSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void oclero::qlementine::AbstractItemListWidget::itemsShouldExpandChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
