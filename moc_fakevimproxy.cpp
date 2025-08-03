/****************************************************************************
** Meta object code from reading C++ file 'fakevimproxy.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../helpers/fakevimproxy.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fakevimproxy.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN12FakeVimProxyE_t {};
} // unnamed namespace

template <> constexpr inline auto FakeVimProxy::qt_create_metaobjectdata<qt_meta_tag_ZN12FakeVimProxyE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "FakeVimProxy",
        "handleInput",
        "",
        "keys",
        "changeStatusData",
        "info",
        "highlightMatches",
        "pattern",
        "changeStatusMessage",
        "contents",
        "cursorPos",
        "anchorPos",
        "messageLevel",
        "changeExtraInformation",
        "updateStatusBar",
        "handleExCommand",
        "bool*",
        "handled",
        "FakeVim::Internal::ExCommand",
        "cmd",
        "requestSetBlockSelection",
        "QTextCursor",
        "tc",
        "requestDisableBlockSelection",
        "updateBlockSelection",
        "requestHasBlockSelection",
        "on",
        "indentRegion",
        "beginBlock",
        "endBlock",
        "typedChar",
        "checkForElectricCharacter",
        "result",
        "c"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'handleInput'
        QtMocHelpers::SignalData<void(const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'changeStatusData'
        QtMocHelpers::SlotData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'highlightMatches'
        QtMocHelpers::SlotData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Slot 'changeStatusMessage'
        QtMocHelpers::SlotData<void(const QString &, int, int, int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::Int, 10 }, { QMetaType::Int, 11 }, { QMetaType::Int, 12 },
        }}),
        // Slot 'changeExtraInformation'
        QtMocHelpers::SlotData<void(const QString &)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'updateStatusBar'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'handleExCommand'
        QtMocHelpers::SlotData<void(bool *, const FakeVim::Internal::ExCommand &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 }, { 0x80000000 | 18, 19 },
        }}),
        // Slot 'requestSetBlockSelection'
        QtMocHelpers::SlotData<void(const QTextCursor &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Slot 'requestDisableBlockSelection'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateBlockSelection'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'requestHasBlockSelection'
        QtMocHelpers::SlotData<void(bool *)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 26 },
        }}),
        // Slot 'indentRegion'
        QtMocHelpers::SlotData<void(int, int, QChar)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 28 }, { QMetaType::Int, 29 }, { QMetaType::QChar, 30 },
        }}),
        // Slot 'checkForElectricCharacter'
        QtMocHelpers::SlotData<void(bool *, QChar)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 32 }, { QMetaType::QChar, 33 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FakeVimProxy, qt_meta_tag_ZN12FakeVimProxyE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject FakeVimProxy::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12FakeVimProxyE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12FakeVimProxyE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12FakeVimProxyE_t>.metaTypes,
    nullptr
} };

void FakeVimProxy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<FakeVimProxy *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->handleInput((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->changeStatusData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->highlightMatches((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->changeStatusMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 4: _t->changeExtraInformation((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->updateStatusBar(); break;
        case 6: _t->handleExCommand((*reinterpret_cast< std::add_pointer_t<bool*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<FakeVim::Internal::ExCommand>>(_a[2]))); break;
        case 7: _t->requestSetBlockSelection((*reinterpret_cast< std::add_pointer_t<QTextCursor>>(_a[1]))); break;
        case 8: _t->requestDisableBlockSelection(); break;
        case 9: _t->updateBlockSelection(); break;
        case 10: _t->requestHasBlockSelection((*reinterpret_cast< std::add_pointer_t<bool*>>(_a[1]))); break;
        case 11: _t->indentRegion((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QChar>>(_a[3]))); break;
        case 12: _t->checkForElectricCharacter((*reinterpret_cast< std::add_pointer_t<bool*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QChar>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (FakeVimProxy::*)(const QString & )>(_a, &FakeVimProxy::handleInput, 0))
            return;
    }
}

const QMetaObject *FakeVimProxy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FakeVimProxy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12FakeVimProxyE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FakeVimProxy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void FakeVimProxy::handleInput(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
