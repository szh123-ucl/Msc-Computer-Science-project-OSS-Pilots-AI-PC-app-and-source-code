/****************************************************************************
** Meta object code from reading C++ file 'qownnotesmarkdowntextedit.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qownnotesmarkdowntextedit.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qownnotesmarkdowntextedit.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN25QOwnNotesMarkdownTextEditE_t {};
} // unnamed namespace

template <> constexpr inline auto QOwnNotesMarkdownTextEdit::qt_create_metaobjectdata<qt_meta_tag_ZN25QOwnNotesMarkdownTextEditE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QOwnNotesMarkdownTextEdit",
        "EditorWidthMode",
        "Narrow",
        "Medium",
        "Wide",
        "Full",
        "Custom",
        "FontModificationMode",
        "Increase",
        "Decrease",
        "Reset"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'EditorWidthMode'
        QtMocHelpers::EnumData<EditorWidthMode>(1, 1, QMC::EnumFlags{}).add({
            {    2, EditorWidthMode::Narrow },
            {    3, EditorWidthMode::Medium },
            {    4, EditorWidthMode::Wide },
            {    5, EditorWidthMode::Full },
            {    6, EditorWidthMode::Custom },
        }),
        // enum 'FontModificationMode'
        QtMocHelpers::EnumData<FontModificationMode>(7, 7, QMC::EnumFlags{}).add({
            {    8, FontModificationMode::Increase },
            {    9, FontModificationMode::Decrease },
            {   10, FontModificationMode::Reset },
        }),
    };
    return QtMocHelpers::metaObjectData<QOwnNotesMarkdownTextEdit, qt_meta_tag_ZN25QOwnNotesMarkdownTextEditE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QOwnNotesMarkdownTextEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QMarkdownTextEdit::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25QOwnNotesMarkdownTextEditE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25QOwnNotesMarkdownTextEditE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN25QOwnNotesMarkdownTextEditE_t>.metaTypes,
    nullptr
} };

void QOwnNotesMarkdownTextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QOwnNotesMarkdownTextEdit *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *QOwnNotesMarkdownTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QOwnNotesMarkdownTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25QOwnNotesMarkdownTextEditE_t>.strings))
        return static_cast<void*>(this);
    return QMarkdownTextEdit::qt_metacast(_clname);
}

int QOwnNotesMarkdownTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMarkdownTextEdit::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
