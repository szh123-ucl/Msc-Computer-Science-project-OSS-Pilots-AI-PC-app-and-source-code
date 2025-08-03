/****************************************************************************
** Meta object code from reading C++ file 'tododialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dialogs/tododialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tododialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10TodoDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto TodoDialog::qt_create_metaobjectdata<qt_meta_tag_ZN10TodoDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TodoDialog",
        "reloadTodoList",
        "",
        "on_TodoDialog_finished",
        "result",
        "on_todoListSelector_currentIndexChanged",
        "index",
        "on_prioritySlider_valueChanged",
        "value",
        "on_showCompletedItemsCheckBox_clicked",
        "on_saveButton_clicked",
        "on_todoItemLoadingProgressBar_valueChanged",
        "on_newItemEdit_returnPressed",
        "on_removeButton_clicked",
        "on_reminderCheckBox_clicked",
        "on_summaryEdit_returnPressed",
        "on_newItemEdit_textChanged",
        "onSaveAndInsertButtonClicked",
        "onImportAsNoteButtonClicked",
        "clearCacheAndReloadTodoList",
        "on_todoItemTreeWidget_currentItemChanged",
        "QTreeWidgetItem*",
        "current",
        "previous",
        "on_todoItemTreeWidget_itemChanged",
        "item",
        "column",
        "on_todoItemTreeWidget_customContextMenuRequested",
        "pos",
        "on_showDueTodayItemsOnlyCheckBox_clicked",
        "on_tagsLineEdit_returnPressed",
        "updateCalendarItem",
        "CalendarItem"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'reloadTodoList'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_TodoDialog_finished'
        QtMocHelpers::SlotData<void(int)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Slot 'on_todoListSelector_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Slot 'on_prioritySlider_valueChanged'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'on_showCompletedItemsCheckBox_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_saveButton_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_todoItemLoadingProgressBar_valueChanged'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'on_newItemEdit_returnPressed'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_removeButton_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_reminderCheckBox_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_summaryEdit_returnPressed'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_newItemEdit_textChanged'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSaveAndInsertButtonClicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onImportAsNoteButtonClicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clearCacheAndReloadTodoList'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_todoItemTreeWidget_currentItemChanged'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, QTreeWidgetItem *)>(20, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 21, 22 }, { 0x80000000 | 21, 23 },
        }}),
        // Slot 'on_todoItemTreeWidget_itemChanged'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 21, 25 }, { QMetaType::Int, 26 },
        }}),
        // Slot 'on_todoItemTreeWidget_customContextMenuRequested'
        QtMocHelpers::SlotData<void(QPoint)>(27, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QPoint, 28 },
        }}),
        // Slot 'on_showDueTodayItemsOnlyCheckBox_clicked'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tagsLineEdit_returnPressed'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateCalendarItem'
        QtMocHelpers::SlotData<void(CalendarItem)>(31, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 32, 25 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TodoDialog, qt_meta_tag_ZN10TodoDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TodoDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<MasterDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10TodoDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10TodoDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10TodoDialogE_t>.metaTypes,
    nullptr
} };

void TodoDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TodoDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->reloadTodoList(); break;
        case 1: _t->on_TodoDialog_finished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_todoListSelector_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_prioritySlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_showCompletedItemsCheckBox_clicked(); break;
        case 5: _t->on_saveButton_clicked(); break;
        case 6: _t->on_todoItemLoadingProgressBar_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_newItemEdit_returnPressed(); break;
        case 8: _t->on_removeButton_clicked(); break;
        case 9: _t->on_reminderCheckBox_clicked(); break;
        case 10: _t->on_summaryEdit_returnPressed(); break;
        case 11: _t->on_newItemEdit_textChanged(); break;
        case 12: _t->onSaveAndInsertButtonClicked(); break;
        case 13: _t->onImportAsNoteButtonClicked(); break;
        case 14: _t->clearCacheAndReloadTodoList(); break;
        case 15: _t->on_todoItemTreeWidget_currentItemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 16: _t->on_todoItemTreeWidget_itemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 17: _t->on_todoItemTreeWidget_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 18: _t->on_showDueTodayItemsOnlyCheckBox_clicked(); break;
        case 19: _t->on_tagsLineEdit_returnPressed(); break;
        case 20: _t->updateCalendarItem((*reinterpret_cast< std::add_pointer_t<CalendarItem>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *TodoDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TodoDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10TodoDialogE_t>.strings))
        return static_cast<void*>(this);
    return MasterDialog::qt_metacast(_clname);
}

int TodoDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MasterDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    return _id;
}
QT_WARNING_POP
