/****************************************************************************
** Meta object code from reading C++ file 'issueassistantdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dialogs/issueassistantdialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'issueassistantdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN20IssueAssistantDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto IssueAssistantDialog::qt_create_metaobjectdata<qt_meta_tag_ZN20IssueAssistantDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "IssueAssistantDialog",
        "on_nextButton_clicked",
        "",
        "on_backButton_clicked",
        "on_issueTypeComboBox_currentIndexChanged",
        "index",
        "on_refreshLogButton_clicked",
        "on_postButton_clicked",
        "allowIssuePageNextButton",
        "allowLogPageNextButton",
        "allowDebugSettingsPageNextButton",
        "on_cancelButton_clicked",
        "on_searchIssueButton_clicked",
        "on_newIssueButton_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_nextButton_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_backButton_clicked'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_issueTypeComboBox_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'on_refreshLogButton_clicked'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_postButton_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'allowIssuePageNextButton'
        QtMocHelpers::SlotData<void() const>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'allowLogPageNextButton'
        QtMocHelpers::SlotData<void() const>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'allowDebugSettingsPageNextButton'
        QtMocHelpers::SlotData<void() const>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_cancelButton_clicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_searchIssueButton_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_newIssueButton_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<IssueAssistantDialog, qt_meta_tag_ZN20IssueAssistantDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject IssueAssistantDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<MasterDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20IssueAssistantDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20IssueAssistantDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20IssueAssistantDialogE_t>.metaTypes,
    nullptr
} };

void IssueAssistantDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<IssueAssistantDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_nextButton_clicked(); break;
        case 1: _t->on_backButton_clicked(); break;
        case 2: _t->on_issueTypeComboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_refreshLogButton_clicked(); break;
        case 4: _t->on_postButton_clicked(); break;
        case 5: _t->allowIssuePageNextButton(); break;
        case 6: _t->allowLogPageNextButton(); break;
        case 7: _t->allowDebugSettingsPageNextButton(); break;
        case 8: _t->on_cancelButton_clicked(); break;
        case 9: _t->on_searchIssueButton_clicked(); break;
        case 10: _t->on_newIssueButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *IssueAssistantDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IssueAssistantDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20IssueAssistantDialogE_t>.strings))
        return static_cast<void*>(this);
    return MasterDialog::qt_metacast(_clname);
}

int IssueAssistantDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MasterDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
