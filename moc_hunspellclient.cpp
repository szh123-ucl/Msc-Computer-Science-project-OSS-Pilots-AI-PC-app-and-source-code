/****************************************************************************
** Meta object code from reading C++ file 'hunspellclient.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libraries/sonnet/src/plugins/hunspell/hunspellclient.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hunspellclient.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14HunspellClientE_t {};
} // unnamed namespace

template <> constexpr inline auto HunspellClient::qt_create_metaobjectdata<qt_meta_tag_ZN14HunspellClientE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "HunspellClient"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<HunspellClient, qt_meta_tag_ZN14HunspellClientE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject HunspellClient::staticMetaObject = { {
    QMetaObject::SuperData::link<Sonnet::Client::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14HunspellClientE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14HunspellClientE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14HunspellClientE_t>.metaTypes,
    nullptr
} };

void HunspellClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<HunspellClient *>(_o);
    (void)_t;
    (void)_c;
    (void)_id;
    (void)_a;
}

const QMetaObject *HunspellClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HunspellClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14HunspellClientE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.kde.sonnet.Client"))
        return static_cast< Sonnet::Client*>(this);
    return Sonnet::Client::qt_metacast(_clname);
}

int HunspellClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Sonnet::Client::qt_metacall(_c, _id, _a);
    return _id;
}

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_HunspellClient[] = {
    0xbf, 
    // "IID"
    0x02,  0x78,  0x1d,  'o',  'r',  'g',  '.',  'k', 
    'd',  'e',  '.',  'S',  'o',  'n',  'n',  'e', 
    't',  '.',  'H',  'u',  'n',  's',  'p',  'e', 
    'l',  'l',  'C',  'l',  'i',  'e',  'n',  't', 
    // "className"
    0x03,  0x6e,  'H',  'u',  'n',  's',  'p',  'e', 
    'l',  'l',  'C',  'l',  'i',  'e',  'n',  't', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(HunspellClient, HunspellClient, qt_pluginMetaDataV2_HunspellClient)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_HunspellClient[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x1d,  'o',  'r',  'g',  '.',  'k', 
    'd',  'e',  '.',  'S',  'o',  'n',  'n',  'e', 
    't',  '.',  'H',  'u',  'n',  's',  'p',  'e', 
    'l',  'l',  'C',  'l',  'i',  'e',  'n',  't', 
    // "className"
    0x03,  0x6e,  'H',  'u',  'n',  's',  'p',  'e', 
    'l',  'l',  'C',  'l',  'i',  'e',  'n',  't', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(HunspellClient, HunspellClient)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
