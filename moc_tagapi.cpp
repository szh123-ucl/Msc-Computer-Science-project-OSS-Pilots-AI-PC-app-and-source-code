/****************************************************************************
** Meta object code from reading C++ file 'tagapi.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../api/tagapi.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tagapi.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6TagApiE_t {};
} // unnamed namespace

template <> constexpr inline auto TagApi::qt_create_metaobjectdata<qt_meta_tag_ZN6TagApiE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "TagApi",
        "fetchByName",
        "TagApi*",
        "",
        "name",
        "parentId",
        "getParentTagNames",
        "notes",
        "QQmlListProperty<NoteApi>",
        "id"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'fetchByName'
        QtMocHelpers::MethodData<TagApi *(const QString &, int)>(1, 3, QMC::AccessPublic, 0x80000000 | 2, {{
            { QMetaType::QString, 4 }, { QMetaType::Int, 5 },
        }}),
        // Method 'fetchByName'
        QtMocHelpers::MethodData<TagApi *(const QString &)>(1, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 2, {{
            { QMetaType::QString, 4 },
        }}),
        // Method 'getParentTagNames'
        QtMocHelpers::MethodData<QStringList()>(6, 3, QMC::AccessPublic, QMetaType::QStringList),
        // Method 'notes'
        QtMocHelpers::MethodData<QQmlListProperty<NoteApi>()>(7, 3, QMC::AccessPublic, 0x80000000 | 8),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'id'
        QtMocHelpers::PropertyData<int>(9, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'name'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'parentId'
        QtMocHelpers::PropertyData<int>(5, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'notes'
        QtMocHelpers::PropertyData<QQmlListProperty<NoteApi>>(7, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<TagApi, qt_meta_tag_ZN6TagApiE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject TagApi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6TagApiE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6TagApiE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6TagApiE_t>.metaTypes,
    nullptr
} };

void TagApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TagApi *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { TagApi* _r = _t->fetchByName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< TagApi**>(_a[0]) = std::move(_r); }  break;
        case 1: { TagApi* _r = _t->fetchByName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< TagApi**>(_a[0]) = std::move(_r); }  break;
        case 2: { QStringList _r = _t->getParentTagNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 3: { QQmlListProperty<NoteApi> _r = _t->notes();
            if (_a[0]) *reinterpret_cast< QQmlListProperty<NoteApi>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->getId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->getName(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->getParentId(); break;
        case 3: *reinterpret_cast<QQmlListProperty<NoteApi>*>(_v) = _t->notes(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setName(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setParentId(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *TagApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6TagApiE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Tag"))
        return static_cast< Tag*>(this);
    return QObject::qt_metacast(_clname);
}

int TagApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
