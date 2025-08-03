/****************************************************************************
** Meta object code from reading C++ file 'toolbar_editor.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libraries/qttoolbareditor/src/toolbar_editor.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'toolbar_editor.hpp' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14Toolbar_EditorE_t {};
} // unnamed namespace

template <> constexpr inline auto Toolbar_Editor::qt_create_metaobjectdata<qt_meta_tag_ZN14Toolbar_EditorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Toolbar_Editor",
        "apply",
        "",
        "updateBars",
        "on_combo_menu_currentIndexChanged",
        "index",
        "on_button_up_clicked",
        "on_button_down_clicked",
        "on_button_insert_clicked",
        "on_button_remove_clicked",
        "on_button_insert_separator_clicked",
        "on_button_remove_toolbar_clicked",
        "on_button_add_toolbar_clicked",
        "update_list_toolbar",
        "on_list_menu_doubleClicked",
        "QModelIndex",
        "on_list_toolbar_doubleClicked",
        "targetWindow",
        "QMainWindow*",
        "customToolbarRemovalOnly"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'apply'
        QtMocHelpers::SlotData<void() const>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateBars'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_combo_menu_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'on_button_up_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_button_down_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_button_insert_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_button_remove_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_button_insert_separator_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_button_remove_toolbar_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_button_add_toolbar_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'update_list_toolbar'
        QtMocHelpers::SlotData<void(int)>(13, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'on_list_menu_doubleClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 15, 5 },
        }}),
        // Slot 'on_list_toolbar_doubleClicked'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 15, 5 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'targetWindow'
        QtMocHelpers::PropertyData<QMainWindow*>(17, 0x80000000 | 18, QMC::Readable | QMC::Writable | QMC::Scriptable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'customToolbarRemovalOnly'
        QtMocHelpers::PropertyData<bool>(19, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Toolbar_Editor, qt_meta_tag_ZN14Toolbar_EditorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Toolbar_Editor::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14Toolbar_EditorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14Toolbar_EditorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14Toolbar_EditorE_t>.metaTypes,
    nullptr
} };

void Toolbar_Editor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Toolbar_Editor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->updateBars(); break;
        case 2: _t->on_combo_menu_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_button_up_clicked(); break;
        case 4: _t->on_button_down_clicked(); break;
        case 5: _t->on_button_insert_clicked(); break;
        case 6: _t->on_button_remove_clicked(); break;
        case 7: _t->on_button_insert_separator_clicked(); break;
        case 8: _t->on_button_remove_toolbar_clicked(); break;
        case 9: _t->on_button_add_toolbar_clicked(); break;
        case 10: _t->update_list_toolbar((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_list_menu_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 12: _t->on_list_toolbar_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMainWindow* >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QMainWindow**>(_v) = _t->targetWindow(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->customToolbarRemovalOnly(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTargetWindow(*reinterpret_cast<QMainWindow**>(_v)); break;
        case 1: _t->setCustomToolbarRemovalOnly(*reinterpret_cast<bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Toolbar_Editor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Toolbar_Editor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14Toolbar_EditorE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Toolbar_Editor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
