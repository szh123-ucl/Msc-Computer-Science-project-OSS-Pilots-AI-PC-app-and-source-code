/****************************************************************************
** Meta object code from reading C++ file 'scriptrepositorydialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../dialogs/scriptrepositorydialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scriptrepositorydialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN22ScriptRepositoryDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto ScriptRepositoryDialog::qt_create_metaobjectdata<qt_meta_tag_ZN22ScriptRepositoryDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ScriptRepositoryDialog",
        "updateFound",
        "",
        "noUpdateFound",
        "on_scriptTreeWidget_currentItemChanged",
        "QTreeWidgetItem*",
        "current",
        "previous",
        "on_installButton_clicked",
        "on_searchScriptEdit_textChanged",
        "arg1"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'updateFound'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'noUpdateFound'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'on_scriptTreeWidget_currentItemChanged'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, QTreeWidgetItem *)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 5, 7 },
        }}),
        // Slot 'on_installButton_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_searchScriptEdit_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 10 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScriptRepositoryDialog, qt_meta_tag_ZN22ScriptRepositoryDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ScriptRepositoryDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<MasterDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22ScriptRepositoryDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22ScriptRepositoryDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN22ScriptRepositoryDialogE_t>.metaTypes,
    nullptr
} };

void ScriptRepositoryDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptRepositoryDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->updateFound(); break;
        case 1: _t->noUpdateFound(); break;
        case 2: _t->on_scriptTreeWidget_currentItemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 3: _t->on_installButton_clicked(); break;
        case 4: _t->on_searchScriptEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ScriptRepositoryDialog::*)()>(_a, &ScriptRepositoryDialog::updateFound, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ScriptRepositoryDialog::*)()>(_a, &ScriptRepositoryDialog::noUpdateFound, 1))
            return;
    }
}

const QMetaObject *ScriptRepositoryDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptRepositoryDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN22ScriptRepositoryDialogE_t>.strings))
        return static_cast<void*>(this);
    return MasterDialog::qt_metacast(_clname);
}

int ScriptRepositoryDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MasterDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ScriptRepositoryDialog::updateFound()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ScriptRepositoryDialog::noUpdateFound()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
