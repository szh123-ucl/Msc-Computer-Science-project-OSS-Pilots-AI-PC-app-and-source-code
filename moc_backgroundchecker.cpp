/****************************************************************************
** Meta object code from reading C++ file 'backgroundchecker.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libraries/sonnet/src/core/backgroundchecker.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backgroundchecker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN6Sonnet17BackgroundCheckerE_t {};
} // unnamed namespace

template <> constexpr inline auto Sonnet::BackgroundChecker::qt_create_metaobjectdata<qt_meta_tag_ZN6Sonnet17BackgroundCheckerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Sonnet::BackgroundChecker",
        "misspelling",
        "",
        "word",
        "start",
        "done",
        "stop",
        "replace",
        "oldText",
        "newText",
        "changeLanguage",
        "lang",
        "continueChecking",
        "slotEngineDone"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'misspelling'
        QtMocHelpers::SignalData<void(const QString &, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::Int, 4 },
        }}),
        // Signal 'done'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'start'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'stop'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'replace'
        QtMocHelpers::SlotData<void(int, const QString &, const QString &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 }, { QMetaType::QString, 8 }, { QMetaType::QString, 9 },
        }}),
        // Slot 'changeLanguage'
        QtMocHelpers::SlotData<void(const QString &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 },
        }}),
        // Slot 'continueChecking'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'slotEngineDone'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<BackgroundChecker, qt_meta_tag_ZN6Sonnet17BackgroundCheckerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Sonnet::BackgroundChecker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6Sonnet17BackgroundCheckerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6Sonnet17BackgroundCheckerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6Sonnet17BackgroundCheckerE_t>.metaTypes,
    nullptr
} };

void Sonnet::BackgroundChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<BackgroundChecker *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->misspelling((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->done(); break;
        case 2: _t->start(); break;
        case 3: _t->stop(); break;
        case 4: _t->replace((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 5: _t->changeLanguage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->continueChecking(); break;
        case 7: _t->slotEngineDone(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (BackgroundChecker::*)(const QString & , int )>(_a, &BackgroundChecker::misspelling, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (BackgroundChecker::*)()>(_a, &BackgroundChecker::done, 1))
            return;
    }
}

const QMetaObject *Sonnet::BackgroundChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Sonnet::BackgroundChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6Sonnet17BackgroundCheckerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Sonnet::BackgroundChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Sonnet::BackgroundChecker::misspelling(const QString & _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void Sonnet::BackgroundChecker::done()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
