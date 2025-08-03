/****************************************************************************
** Meta object code from reading C++ file 'noteapi.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../api/noteapi.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'noteapi.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7NoteApiE_t {};
} // unnamed namespace

template <> constexpr inline auto NoteApi::qt_create_metaobjectdata<qt_meta_tag_ZN7NoteApiE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "NoteApi",
        "tags",
        "QQmlListProperty<TagApi>",
        "",
        "tagNames",
        "addTag",
        "tagName",
        "removeTag",
        "renameNoteFile",
        "newName",
        "fetchAll",
        "QQmlListProperty<NoteApi>",
        "limit",
        "offset",
        "toMarkdownHtml",
        "forExport",
        "getFileURLFromFileName",
        "localFileName",
        "allowDifferentFileName",
        "getNoteUrlForLinkingToNoteId",
        "noteId",
        "id",
        "name",
        "fileName",
        "fullNoteFilePath",
        "fullNoteFileDirPath",
        "relativeNoteFileDirPath",
        "noteSubFolderId",
        "noteText",
        "decryptedNoteText",
        "fileCreated",
        "fileLastModified",
        "hasDirtyData"
    };

    QtMocHelpers::UintData qt_methods {
        // Method 'tags'
        QtMocHelpers::MethodData<QQmlListProperty<TagApi>()>(1, 3, QMC::AccessPublic, 0x80000000 | 2),
        // Method 'tagNames'
        QtMocHelpers::MethodData<QStringList() const>(4, 3, QMC::AccessPublic, QMetaType::QStringList),
        // Method 'addTag'
        QtMocHelpers::MethodData<bool(const QString &)>(5, 3, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 6 },
        }}),
        // Method 'removeTag'
        QtMocHelpers::MethodData<bool(QString)>(7, 3, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 6 },
        }}),
        // Method 'renameNoteFile'
        QtMocHelpers::MethodData<bool(const QString &)>(8, 3, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 9 },
        }}),
        // Method 'fetchAll'
        QtMocHelpers::MethodData<QQmlListProperty<NoteApi>(int, int)>(10, 3, QMC::AccessPublic, 0x80000000 | 11, {{
            { QMetaType::Int, 12 }, { QMetaType::Int, 13 },
        }}),
        // Method 'fetchAll'
        QtMocHelpers::MethodData<QQmlListProperty<NoteApi>(int)>(10, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 11, {{
            { QMetaType::Int, 12 },
        }}),
        // Method 'fetchAll'
        QtMocHelpers::MethodData<QQmlListProperty<NoteApi>()>(10, 3, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 11),
        // Method 'toMarkdownHtml'
        QtMocHelpers::MethodData<QString(bool)>(14, 3, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Bool, 15 },
        }}),
        // Method 'toMarkdownHtml'
        QtMocHelpers::MethodData<QString()>(14, 3, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString),
        // Method 'getFileURLFromFileName'
        QtMocHelpers::MethodData<QString(const QString &)>(16, 3, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 17 },
        }}),
        // Method 'allowDifferentFileName'
        QtMocHelpers::MethodData<bool()>(18, 3, QMC::AccessPublic, QMetaType::Bool),
        // Method 'getNoteUrlForLinkingToNoteId'
        QtMocHelpers::MethodData<QString(int)>(19, 3, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Int, 20 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'id'
        QtMocHelpers::PropertyData<int>(21, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'name'
        QtMocHelpers::PropertyData<QString>(22, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'fileName'
        QtMocHelpers::PropertyData<QString>(23, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'fullNoteFilePath'
        QtMocHelpers::PropertyData<QString>(24, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'fullNoteFileDirPath'
        QtMocHelpers::PropertyData<QString>(25, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'relativeNoteFileDirPath'
        QtMocHelpers::PropertyData<QString>(26, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'noteSubFolderId'
        QtMocHelpers::PropertyData<int>(27, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'noteText'
        QtMocHelpers::PropertyData<QString>(28, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'decryptedNoteText'
        QtMocHelpers::PropertyData<QString>(29, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'fileCreated'
        QtMocHelpers::PropertyData<QDateTime>(30, QMetaType::QDateTime, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'fileLastModified'
        QtMocHelpers::PropertyData<QDateTime>(31, QMetaType::QDateTime, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'hasDirtyData'
        QtMocHelpers::PropertyData<bool>(32, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Constant),
        // property 'tags'
        QtMocHelpers::PropertyData<QQmlListProperty<TagApi>>(1, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::EnumOrFlag | QMC::Constant),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NoteApi, qt_meta_tag_ZN7NoteApiE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject NoteApi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7NoteApiE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7NoteApiE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7NoteApiE_t>.metaTypes,
    nullptr
} };

void NoteApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<NoteApi *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { QQmlListProperty<TagApi> _r = _t->tags();
            if (_a[0]) *reinterpret_cast< QQmlListProperty<TagApi>*>(_a[0]) = std::move(_r); }  break;
        case 1: { QStringList _r = _t->tagNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->addTag((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->removeTag((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->renameNoteFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { QQmlListProperty<NoteApi> _r = _t->fetchAll((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QQmlListProperty<NoteApi>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QQmlListProperty<NoteApi> _r = _t->fetchAll((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QQmlListProperty<NoteApi>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QQmlListProperty<NoteApi> _r = _t->fetchAll();
            if (_a[0]) *reinterpret_cast< QQmlListProperty<NoteApi>*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->toMarkdownHtml((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->toMarkdownHtml();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->getFileURLFromFileName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->allowDifferentFileName();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->getNoteUrlForLinkingToNoteId((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = _t->getId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->getName(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->getFileName(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->fullNoteFilePath(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->fullNoteFileDirPath(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->relativeNoteSubFolderPath(); break;
        case 6: *reinterpret_cast<int*>(_v) = _t->getNoteSubFolderId(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->getNoteText(); break;
        case 8: *reinterpret_cast<QString*>(_v) = _t->fetchDecryptedNoteText(); break;
        case 9: *reinterpret_cast<QDateTime*>(_v) = _t->getFileCreated(); break;
        case 10: *reinterpret_cast<QDateTime*>(_v) = _t->getFileLastModified(); break;
        case 11: *reinterpret_cast<bool*>(_v) = _t->getHasDirtyData(); break;
        case 12: *reinterpret_cast<QQmlListProperty<TagApi>*>(_v) = _t->tags(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setName(*reinterpret_cast<QString*>(_v)); break;
        case 7: _t->setNoteText(*reinterpret_cast<QString*>(_v)); break;
        case 8: _t->setDecryptedNoteText(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *NoteApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NoteApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7NoteApiE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Note"))
        return static_cast< Note*>(this);
    return QObject::qt_metacast(_clname);
}

int NoteApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
