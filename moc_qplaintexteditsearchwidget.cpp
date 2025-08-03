/****************************************************************************
** Meta object code from reading C++ file 'qplaintexteditsearchwidget.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libraries/qmarkdowntextedit/qplaintexteditsearchwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplaintexteditsearchwidget.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN26QPlainTextEditSearchWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto QPlainTextEditSearchWidget::qt_create_metaobjectdata<qt_meta_tag_ZN26QPlainTextEditSearchWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QPlainTextEditSearchWidget",
        "activate",
        "",
        "deactivate",
        "doSearchDown",
        "doSearchUp",
        "setReplaceMode",
        "enabled",
        "activateReplace",
        "doReplace",
        "forAll",
        "doReplaceAll",
        "reset",
        "doSearchCount",
        "searchLineEditTextChanged",
        "arg1",
        "performSearch",
        "updateSearchCountLabelText",
        "setSearchSelectionColor",
        "color",
        "on_modeComboBox_currentIndexChanged",
        "index",
        "on_matchCaseSensitiveButton_toggled",
        "checked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'activate'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'deactivate'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'doSearchDown'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'doSearchUp'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setReplaceMode'
        QtMocHelpers::SlotData<void(bool)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 7 },
        }}),
        // Slot 'activateReplace'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'doReplace'
        QtMocHelpers::SlotData<bool(bool)>(9, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Bool, 10 },
        }}),
        // Slot 'doReplace'
        QtMocHelpers::SlotData<bool()>(9, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool),
        // Slot 'doReplaceAll'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reset'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'doSearchCount'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'searchLineEditTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(14, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QString, 15 },
        }}),
        // Slot 'performSearch'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'updateSearchCountLabelText'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessProtected, QMetaType::Void),
        // Slot 'setSearchSelectionColor'
        QtMocHelpers::SlotData<void(const QColor &)>(18, 2, QMC::AccessProtected, QMetaType::Void, {{
            { QMetaType::QColor, 19 },
        }}),
        // Slot 'on_modeComboBox_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 21 },
        }}),
        // Slot 'on_matchCaseSensitiveButton_toggled'
        QtMocHelpers::SlotData<void(bool)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QPlainTextEditSearchWidget, qt_meta_tag_ZN26QPlainTextEditSearchWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QPlainTextEditSearchWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26QPlainTextEditSearchWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26QPlainTextEditSearchWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN26QPlainTextEditSearchWidgetE_t>.metaTypes,
    nullptr
} };

void QPlainTextEditSearchWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QPlainTextEditSearchWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->activate(); break;
        case 1: _t->deactivate(); break;
        case 2: _t->doSearchDown(); break;
        case 3: _t->doSearchUp(); break;
        case 4: _t->setReplaceMode((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->activateReplace(); break;
        case 6: { bool _r = _t->doReplace((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->doReplace();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->doReplaceAll(); break;
        case 9: _t->reset(); break;
        case 10: _t->doSearchCount(); break;
        case 11: _t->searchLineEditTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->performSearch(); break;
        case 13: _t->updateSearchCountLabelText(); break;
        case 14: _t->setSearchSelectionColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 15: _t->on_modeComboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->on_matchCaseSensitiveButton_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *QPlainTextEditSearchWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlainTextEditSearchWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN26QPlainTextEditSearchWidgetE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QPlainTextEditSearchWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
