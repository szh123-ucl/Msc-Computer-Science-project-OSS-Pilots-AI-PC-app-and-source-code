/****************************************************************************
** Meta object code from reading C++ file 'owncloudservice.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../services/owncloudservice.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'owncloudservice.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN15OwnCloudServiceE_t {};
} // unnamed namespace

template <> constexpr inline auto OwnCloudService::qt_create_metaobjectdata<qt_meta_tag_ZN15OwnCloudServiceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OwnCloudService",
        "slotAuthenticationRequired",
        "",
        "QNetworkReply*",
        "reply",
        "QAuthenticator*",
        "authenticator",
        "slotCalendarAuthenticationRequired",
        "slotReplyFinished",
        "CalendarBackend",
        "LegacyOwnCloudCalendar",
        "CalendarPlus",
        "CalDAVCalendar",
        "DefaultOwnCloudCalendar"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'slotAuthenticationRequired'
        QtMocHelpers::SlotData<void(QNetworkReply *, QAuthenticator *)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Slot 'slotCalendarAuthenticationRequired'
        QtMocHelpers::SlotData<void(QNetworkReply *, QAuthenticator *)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Slot 'slotReplyFinished'
        QtMocHelpers::SlotData<void(QNetworkReply *)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 3, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'CalendarBackend'
        QtMocHelpers::EnumData<CalendarBackend>(9, 9, QMC::EnumFlags{}).add({
            {   10, CalendarBackend::LegacyOwnCloudCalendar },
            {   11, CalendarBackend::CalendarPlus },
            {   12, CalendarBackend::CalDAVCalendar },
            {   13, CalendarBackend::DefaultOwnCloudCalendar },
        }),
    };
    return QtMocHelpers::metaObjectData<OwnCloudService, qt_meta_tag_ZN15OwnCloudServiceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OwnCloudService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15OwnCloudServiceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15OwnCloudServiceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15OwnCloudServiceE_t>.metaTypes,
    nullptr
} };

void OwnCloudService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OwnCloudService *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->slotAuthenticationRequired((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2]))); break;
        case 1: _t->slotCalendarAuthenticationRequired((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2]))); break;
        case 2: _t->slotReplyFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *OwnCloudService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OwnCloudService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15OwnCloudServiceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OwnCloudService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
