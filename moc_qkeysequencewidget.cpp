/****************************************************************************
** Meta object code from reading C++ file 'qkeysequencewidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libraries/qkeysequencewidget/qkeysequencewidget/src/qkeysequencewidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qkeysequencewidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN18QKeySequenceWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto QKeySequenceWidget::qt_create_metaobjectdata<qt_meta_tag_ZN18QKeySequenceWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QKeySequenceWidget",
        "keySequenceChanged",
        "",
        "QKeySequence",
        "seq",
        "keySequenceAccepted",
        "keySequenceCleared",
        "keyNotSupported",
        "doneRecording",
        "setKeySequence",
        "key",
        "setDefaultKeySequence",
        "setShortcutButtonActiveColor",
        "color",
        "setShortcutButtonInactiveColor",
        "clearKeySequence",
        "setNoneText",
        "text",
        "setClearButtonIcon",
        "icon",
        "setClearButtonShow",
        "QKeySequenceWidget::ClearButtonShow",
        "show",
        "captureKeySequence",
        "keySequence",
        "defaultKeySequence",
        "shortcutButtonActiveColor",
        "shortcutButtonInactiveColor",
        "clearButton",
        "noneText",
        "clearButtonIcon",
        "ClearButtonShow",
        "ClearButton",
        "NoShow",
        "ShowLeft",
        "ShowRight"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'keySequenceChanged'
        QtMocHelpers::SignalData<void(const QKeySequence &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'keySequenceAccepted'
        QtMocHelpers::SignalData<void(const QKeySequence &)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'keySequenceCleared'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'keyNotSupported'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'doneRecording'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'setKeySequence'
        QtMocHelpers::SlotData<void(const QKeySequence &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 10 },
        }}),
        // Slot 'setDefaultKeySequence'
        QtMocHelpers::SlotData<void(const QKeySequence &)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 10 },
        }}),
        // Slot 'setShortcutButtonActiveColor'
        QtMocHelpers::SlotData<void(const QColor &)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QColor, 13 },
        }}),
        // Slot 'setShortcutButtonInactiveColor'
        QtMocHelpers::SlotData<void(const QColor &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QColor, 13 },
        }}),
        // Slot 'clearKeySequence'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setNoneText'
        QtMocHelpers::SlotData<void(const QString &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Slot 'setClearButtonIcon'
        QtMocHelpers::SlotData<void(const QIcon &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QIcon, 19 },
        }}),
        // Slot 'setClearButtonShow'
        QtMocHelpers::SlotData<void(QKeySequenceWidget::ClearButtonShow)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 21, 22 },
        }}),
        // Slot 'captureKeySequence'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'keySequence'
        QtMocHelpers::PropertyData<QKeySequence>(24, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'defaultKeySequence'
        QtMocHelpers::PropertyData<QKeySequence>(25, 0x80000000 | 3, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'shortcutButtonActiveColor'
        QtMocHelpers::PropertyData<QColor>(26, QMetaType::QColor, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'shortcutButtonInactiveColor'
        QtMocHelpers::PropertyData<QColor>(27, QMetaType::QColor, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'clearButton'
        QtMocHelpers::PropertyData<QKeySequenceWidget::ClearButtonShow>(28, 0x80000000 | 21, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'noneText'
        QtMocHelpers::PropertyData<QString>(29, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'clearButtonIcon'
        QtMocHelpers::PropertyData<QIcon>(30, QMetaType::QIcon, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'ClearButtonShow'
        QtMocHelpers::EnumData<ClearButtonShow>(31, 32, QMC::EnumFlags{}).add({
            {   33, ClearButton::NoShow },
            {   34, ClearButton::ShowLeft },
            {   35, ClearButton::ShowRight },
        }),
    };
    return QtMocHelpers::metaObjectData<QKeySequenceWidget, qt_meta_tag_ZN18QKeySequenceWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QKeySequenceWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18QKeySequenceWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18QKeySequenceWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18QKeySequenceWidgetE_t>.metaTypes,
    nullptr
} };

void QKeySequenceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QKeySequenceWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->keySequenceChanged((*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[1]))); break;
        case 1: _t->keySequenceAccepted((*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[1]))); break;
        case 2: _t->keySequenceCleared(); break;
        case 3: _t->keyNotSupported(); break;
        case 4: _t->d_func()->doneRecording(); break;
        case 5: _t->setKeySequence((*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[1]))); break;
        case 6: _t->setDefaultKeySequence((*reinterpret_cast< std::add_pointer_t<QKeySequence>>(_a[1]))); break;
        case 7: _t->setShortcutButtonActiveColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 8: _t->setShortcutButtonInactiveColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 9: _t->clearKeySequence(); break;
        case 10: _t->setNoneText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->setClearButtonIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 12: _t->setClearButtonShow((*reinterpret_cast< std::add_pointer_t<QKeySequenceWidget::ClearButtonShow>>(_a[1]))); break;
        case 13: _t->captureKeySequence(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QKeySequenceWidget::*)(const QKeySequence & )>(_a, &QKeySequenceWidget::keySequenceChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QKeySequenceWidget::*)(const QKeySequence & )>(_a, &QKeySequenceWidget::keySequenceAccepted, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QKeySequenceWidget::*)()>(_a, &QKeySequenceWidget::keySequenceCleared, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (QKeySequenceWidget::*)()>(_a, &QKeySequenceWidget::keyNotSupported, 3))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QKeySequence*>(_v) = _t->keySequence(); break;
        case 1: *reinterpret_cast<QKeySequence*>(_v) = _t->defaultKeySequence(); break;
        case 2: *reinterpret_cast<QColor*>(_v) = _t->shortcutButtonActiveColor(); break;
        case 3: *reinterpret_cast<QColor*>(_v) = _t->shortcutButtonInactiveColor(); break;
        case 4: *reinterpret_cast<QKeySequenceWidget::ClearButtonShow*>(_v) = _t->clearButtonShow(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->noneText(); break;
        case 6: *reinterpret_cast<QIcon*>(_v) = _t->clearButtonIcon(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setKeySequence(*reinterpret_cast<QKeySequence*>(_v)); break;
        case 1: _t->setDefaultKeySequence(*reinterpret_cast<QKeySequence*>(_v)); break;
        case 2: _t->setShortcutButtonActiveColor(*reinterpret_cast<QColor*>(_v)); break;
        case 3: _t->setShortcutButtonInactiveColor(*reinterpret_cast<QColor*>(_v)); break;
        case 4: _t->setClearButtonShow(*reinterpret_cast<QKeySequenceWidget::ClearButtonShow*>(_v)); break;
        case 5: _t->setNoneText(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setClearButtonIcon(*reinterpret_cast<QIcon*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QKeySequenceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QKeySequenceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18QKeySequenceWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QKeySequenceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QKeySequenceWidget::keySequenceChanged(const QKeySequence & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QKeySequenceWidget::keySequenceAccepted(const QKeySequence & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void QKeySequenceWidget::keySequenceCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QKeySequenceWidget::keyNotSupported()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
