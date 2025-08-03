/****************************************************************************
** Meta object code from reading C++ file 'notesubfolderapi.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../api/notesubfolderapi.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notesubfolderapi.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16NoteSubFolderApiE_t {};
} // unnamed namespace

template <> constexpr inline auto NoteSubFolderApi::qt_create_metaobjectdata<qt_meta_tag_ZN16NoteSubFolderApiE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NoteSubFolderApi",
        "fetchNoteSubFolderById",
        "NoteSubFolderApi*",
        "",
        "id",
        "activeNoteSubFolder",
        "fetchNoteSubFoldersByParentId",
        "QList<QObject*>",
        "parentId",
        "notes",
        "QQmlListProperty<NoteApi>",
        "relativePath",
        "fullPath",
        "name"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'fetchNoteSubFolderById'
        QtMocHelpers::MethodData<NoteSubFolderApi *(int)>(1, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::Int, 4 },
        }}),
        // Method 'activeNoteSubFolder'
        QtMocHelpers::MethodData<NoteSubFolderApi *()>(5, 3, QMC::AccessPublic, 0x80000000 | 2),
        // Method 'fetchNoteSubFoldersByParentId'
        QtMocHelpers::MethodData<QList<QObject*>(int)>(6, 3, QMC::AccessPublic, 0x80000000 | 7, {{
            { QMetaType::Int, 8 },
        }}),
        // Method 'notes'
        QtMocHelpers::MethodData<QQmlListProperty<NoteApi>()>(9, 3, QMC::AccessPublic, 0x80000000 | 10),
        // Method 'relativePath'
        QtMocHelpers::MethodData<QString()>(11, 3, QMC::AccessPublic, QMetaType::QString),
        // Method 'fullPath'
        QtMocHelpers::MethodData<QString()>(12, 3, QMC::AccessPublic, QMetaType::QString),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'id'
        QtMocHelpers::PropertyData<int>(4, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'name'
        QtMocHelpers::PropertyData<QString>(13, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'notes'
        QtMocHelpers::PropertyData<QQmlListProperty<NoteApi>>(9, 0x80000000 | 10, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NoteSubFolderApi, qt_meta_tag_ZN16NoteSubFolderApiE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject NoteSubFolderApi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16NoteSubFolderApiE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16NoteSubFolderApiE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16NoteSubFolderApiE_t>.metaTypes,
    nullptr
} };

void NoteSubFolderApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NoteSubFolderApi *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { NoteSubFolderApi* _r = _t->fetchNoteSubFolderById((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< NoteSubFolderApi**>(_a[0]) = std::move(_r); }  break;
        case 1: { NoteSubFolderApi* _r = _t->activeNoteSubFolder();
            if (_a[0]) *reinterpret_cast< NoteSubFolderApi**>(_a[0]) = std::move(_r); }  break;
        case 2: { QList<QObject*> _r = _t->fetchNoteSubFoldersByParentId((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<QObject*>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QQmlListProperty<NoteApi> _r = _t->notes();
            if (_a[0]) *reinterpret_cast< QQmlListProperty<NoteApi>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QString _r = _t->relativePath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->fullPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->getId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->getName(); break;
        case 2: *reinterpret_cast<QQmlListProperty<NoteApi>*>(_v) = _t->notes(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setName(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *NoteSubFolderApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NoteSubFolderApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16NoteSubFolderApiE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "NoteSubFolder"))
        return static_cast< NoteSubFolder*>(this);
    return QObject::qt_metacast(_clname);
}

int NoteSubFolderApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
