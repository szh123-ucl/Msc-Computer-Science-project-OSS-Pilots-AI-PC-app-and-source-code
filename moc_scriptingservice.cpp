/****************************************************************************
** Meta object code from reading C++ file 'scriptingservice.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../services/scriptingservice.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scriptingservice.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN16ScriptingServiceE_t {};
} // unnamed namespace

template <> constexpr inline auto ScriptingService::qt_create_metaobjectdata<qt_meta_tag_ZN16ScriptingServiceE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ScriptingService",
        "noteStored",
        "",
        "QVariant",
        "note",
        "onCurrentNoteChanged",
        "Note*",
        "reloadEngine",
        "onCustomActionInvoked",
        "identifier",
        "callCustomActionInvokedForObject",
        "object",
        "onScriptThreadDone",
        "ScriptThread*",
        "thread",
        "cacheDir",
        "subFolder",
        "clearCacheDir",
        "startDetachedProcess",
        "executablePath",
        "parameters",
        "callbackIdentifier",
        "callbackParameter",
        "processData",
        "workingDirectory",
        "startSynchronousProcess",
        "data",
        "currentNoteFolderPath",
        "currentNote",
        "NoteApi*",
        "log",
        "text",
        "downloadUrlToString",
        "url",
        "downloadUrlToMedia",
        "returnUrlOnly",
        "aiComplete",
        "prompt",
        "insertMediaFile",
        "mediaFilePath",
        "insertAttachmentFile",
        "attachmentFilePath",
        "fileName",
        "registerCustomAction",
        "menuText",
        "buttonText",
        "icon",
        "useInNoteEditContextMenu",
        "hideButtonInToolbar",
        "useInNoteListContextMenu",
        "createNote",
        "clipboard",
        "asHtml",
        "noteTextEditWrite",
        "noteTextEditSelectedText",
        "noteTextEditSelectAll",
        "noteTextEditSelectCurrentLine",
        "noteTextEditSelectCurrentWord",
        "noteTextEditSetSelection",
        "start",
        "end",
        "noteTextEditSetCursorPosition",
        "position",
        "noteTextEditCursorPosition",
        "noteTextEditSelectionStart",
        "noteTextEditSelectionEnd",
        "noteTextEditCurrentWord",
        "withPreviousCharacters",
        "noteTextEditCurrentBlock",
        "encryptionDisablePassword",
        "platformIsLinux",
        "platformIsOSX",
        "platformIsWindows",
        "tagCurrentNote",
        "tagName",
        "addStyleSheet",
        "stylesheet",
        "reloadScriptingEngine",
        "fetchNoteByFileName",
        "noteSubFolderId",
        "fetchNoteById",
        "id",
        "noteExistsByFileName",
        "ignoreNoteId",
        "setClipboardText",
        "setCurrentNote",
        "asTab",
        "informationMessageBox",
        "title",
        "questionMessageBox",
        "buttons",
        "defaultButton",
        "getOpenFileName",
        "caption",
        "dir",
        "filter",
        "getSaveFileName",
        "registerLabel",
        "setLabelText",
        "toNativeDirSeparators",
        "path",
        "fromNativeDirSeparators",
        "dirSeparator",
        "selectedNotesPaths",
        "inputDialogGetItem",
        "label",
        "items",
        "current",
        "editable",
        "inputDialogGetText",
        "inputDialogGetMultiLineText",
        "textDiffDialog",
        "text1",
        "text2",
        "setPersistentVariable",
        "key",
        "value",
        "addHighlightingRule",
        "pattern",
        "shouldContain",
        "state",
        "capturingGroup",
        "maskedGroup",
        "getPersistentVariable",
        "defaultValue",
        "getApplicationSettingsVariable",
        "jumpToNoteSubFolder",
        "noteSubFolderPath",
        "separator",
        "searchTagsByName",
        "name",
        "getTagByNameBreadcrumbList",
        "TagApi*",
        "nameList",
        "createMissing",
        "regenerateNotePreview",
        "selectedNotesIds",
        "QList<int>",
        "writeToFile",
        "filePath",
        "createParentDirs",
        "readFromFile",
        "codec",
        "fileExists",
        "fetchNoteIdsByNoteTextPart",
        "triggerMenuAction",
        "objectName",
        "checked"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'noteStored'
        QtMocHelpers::SignalData<void(QVariant)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'onCurrentNoteChanged'
        QtMocHelpers::SlotData<void(Note *)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 4 },
        }}),
        // Slot 'reloadEngine'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onCustomActionInvoked'
        QtMocHelpers::SlotData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Slot 'callCustomActionInvokedForObject'
        QtMocHelpers::SlotData<void(QObject *, const QString &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QObjectStar, 11 }, { QMetaType::QString, 9 },
        }}),
        // Slot 'onScriptThreadDone'
        QtMocHelpers::SlotData<void(ScriptThread *)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Method 'cacheDir'
        QtMocHelpers::MethodData<QString(const QString &) const>(15, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 16 },
        }}),
        // Method 'cacheDir'
        QtMocHelpers::MethodData<QString() const>(15, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString),
        // Method 'clearCacheDir'
        QtMocHelpers::MethodData<bool(const QString &) const>(17, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 16 },
        }}),
        // Method 'clearCacheDir'
        QtMocHelpers::MethodData<bool() const>(17, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool),
        // Method 'startDetachedProcess'
        QtMocHelpers::MethodData<bool(const QString &, const QStringList &, const QString &, const QVariant &, const QByteArray &, const QString &)>(18, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 19 }, { QMetaType::QStringList, 20 }, { QMetaType::QString, 21 }, { 0x80000000 | 3, 22 },
            { QMetaType::QByteArray, 23 }, { QMetaType::QString, 24 },
        }}),
        // Method 'startDetachedProcess'
        QtMocHelpers::MethodData<bool(const QString &, const QStringList &, const QString &, const QVariant &, const QByteArray &)>(18, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 19 }, { QMetaType::QStringList, 20 }, { QMetaType::QString, 21 }, { 0x80000000 | 3, 22 },
            { QMetaType::QByteArray, 23 },
        }}),
        // Method 'startDetachedProcess'
        QtMocHelpers::MethodData<bool(const QString &, const QStringList &, const QString &, const QVariant &)>(18, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 19 }, { QMetaType::QStringList, 20 }, { QMetaType::QString, 21 }, { 0x80000000 | 3, 22 },
        }}),
        // Method 'startDetachedProcess'
        QtMocHelpers::MethodData<bool(const QString &, const QStringList &, const QString &)>(18, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 19 }, { QMetaType::QStringList, 20 }, { QMetaType::QString, 21 },
        }}),
        // Method 'startDetachedProcess'
        QtMocHelpers::MethodData<bool(const QString &, const QStringList &)>(18, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 19 }, { QMetaType::QStringList, 20 },
        }}),
        // Method 'startSynchronousProcess'
        QtMocHelpers::MethodData<QByteArray(const QString &, const QStringList &, const QByteArray &, const QString &) const>(25, 2, QMC::AccessPublic, QMetaType::QByteArray, {{
            { QMetaType::QString, 19 }, { QMetaType::QStringList, 20 }, { QMetaType::QByteArray, 26 }, { QMetaType::QString, 24 },
        }}),
        // Method 'startSynchronousProcess'
        QtMocHelpers::MethodData<QByteArray(const QString &, const QStringList &, const QByteArray &) const>(25, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QByteArray, {{
            { QMetaType::QString, 19 }, { QMetaType::QStringList, 20 }, { QMetaType::QByteArray, 26 },
        }}),
        // Method 'startSynchronousProcess'
        QtMocHelpers::MethodData<QByteArray(const QString &, const QStringList &) const>(25, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QByteArray, {{
            { QMetaType::QString, 19 }, { QMetaType::QStringList, 20 },
        }}),
        // Method 'currentNoteFolderPath'
        QtMocHelpers::MethodData<QString()>(27, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'currentNote'
        QtMocHelpers::MethodData<NoteApi *() const>(28, 2, QMC::AccessPublic, 0x80000000 | 29),
        // Method 'log'
        QtMocHelpers::MethodData<void(QString)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 31 },
        }}),
        // Method 'downloadUrlToString'
        QtMocHelpers::MethodData<QString(const QUrl &)>(32, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QUrl, 33 },
        }}),
        // Method 'downloadUrlToMedia'
        QtMocHelpers::MethodData<QString(const QUrl &, bool)>(34, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QUrl, 33 }, { QMetaType::Bool, 35 },
        }}),
        // Method 'downloadUrlToMedia'
        QtMocHelpers::MethodData<QString(const QUrl &)>(34, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QUrl, 33 },
        }}),
        // Method 'aiComplete'
        QtMocHelpers::MethodData<QString(const QString &)>(36, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 37 },
        }}),
        // Method 'insertMediaFile'
        QtMocHelpers::MethodData<QString(const QString &, bool)>(38, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 39 }, { QMetaType::Bool, 35 },
        }}),
        // Method 'insertMediaFile'
        QtMocHelpers::MethodData<QString(const QString &)>(38, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 39 },
        }}),
        // Method 'insertAttachmentFile'
        QtMocHelpers::MethodData<QString(const QString &, const QString &, bool)>(40, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 41 }, { QMetaType::QString, 42 }, { QMetaType::Bool, 35 },
        }}),
        // Method 'registerCustomAction'
        QtMocHelpers::MethodData<void(const QString &, const QString &, const QString &, const QString &, bool, bool, bool)>(43, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 44 }, { QMetaType::QString, 45 }, { QMetaType::QString, 46 },
            { QMetaType::Bool, 47 }, { QMetaType::Bool, 48 }, { QMetaType::Bool, 49 },
        }}),
        // Method 'registerCustomAction'
        QtMocHelpers::MethodData<void(const QString &, const QString &, const QString &, const QString &, bool, bool)>(43, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 44 }, { QMetaType::QString, 45 }, { QMetaType::QString, 46 },
            { QMetaType::Bool, 47 }, { QMetaType::Bool, 48 },
        }}),
        // Method 'registerCustomAction'
        QtMocHelpers::MethodData<void(const QString &, const QString &, const QString &, const QString &, bool)>(43, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 44 }, { QMetaType::QString, 45 }, { QMetaType::QString, 46 },
            { QMetaType::Bool, 47 },
        }}),
        // Method 'registerCustomAction'
        QtMocHelpers::MethodData<void(const QString &, const QString &, const QString &, const QString &)>(43, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 44 }, { QMetaType::QString, 45 }, { QMetaType::QString, 46 },
        }}),
        // Method 'registerCustomAction'
        QtMocHelpers::MethodData<void(const QString &, const QString &, const QString &)>(43, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 44 }, { QMetaType::QString, 45 },
        }}),
        // Method 'registerCustomAction'
        QtMocHelpers::MethodData<void(const QString &, const QString &)>(43, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 44 },
        }}),
        // Method 'createNote'
        QtMocHelpers::MethodData<void(QString)>(50, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 31 },
        }}),
        // Method 'clipboard'
        QtMocHelpers::MethodData<QString(bool)>(51, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Bool, 52 },
        }}),
        // Method 'clipboard'
        QtMocHelpers::MethodData<QString()>(51, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString),
        // Method 'noteTextEditWrite'
        QtMocHelpers::MethodData<void(const QString &)>(53, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 31 },
        }}),
        // Method 'noteTextEditSelectedText'
        QtMocHelpers::MethodData<QString()>(54, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'noteTextEditSelectAll'
        QtMocHelpers::MethodData<void()>(55, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'noteTextEditSelectCurrentLine'
        QtMocHelpers::MethodData<void()>(56, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'noteTextEditSelectCurrentWord'
        QtMocHelpers::MethodData<void()>(57, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'noteTextEditSetSelection'
        QtMocHelpers::MethodData<void(int, int)>(58, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 59 }, { QMetaType::Int, 60 },
        }}),
        // Method 'noteTextEditSetCursorPosition'
        QtMocHelpers::MethodData<void(int)>(61, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 62 },
        }}),
        // Method 'noteTextEditCursorPosition'
        QtMocHelpers::MethodData<int()>(63, 2, QMC::AccessPublic, QMetaType::Int),
        // Method 'noteTextEditSelectionStart'
        QtMocHelpers::MethodData<int()>(64, 2, QMC::AccessPublic, QMetaType::Int),
        // Method 'noteTextEditSelectionEnd'
        QtMocHelpers::MethodData<int()>(65, 2, QMC::AccessPublic, QMetaType::Int),
        // Method 'noteTextEditCurrentWord'
        QtMocHelpers::MethodData<QString(bool)>(66, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::Bool, 67 },
        }}),
        // Method 'noteTextEditCurrentWord'
        QtMocHelpers::MethodData<QString()>(66, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString),
        // Method 'noteTextEditCurrentBlock'
        QtMocHelpers::MethodData<QString()>(68, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'encryptionDisablePassword'
        QtMocHelpers::MethodData<void()>(69, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'platformIsLinux'
        QtMocHelpers::MethodData<bool()>(70, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'platformIsOSX'
        QtMocHelpers::MethodData<bool()>(71, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'platformIsWindows'
        QtMocHelpers::MethodData<bool()>(72, 2, QMC::AccessPublic, QMetaType::Bool),
        // Method 'tagCurrentNote'
        QtMocHelpers::MethodData<void(const QString &)>(73, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 74 },
        }}),
        // Method 'addStyleSheet'
        QtMocHelpers::MethodData<void(const QString &)>(75, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 76 },
        }}),
        // Method 'reloadScriptingEngine'
        QtMocHelpers::MethodData<void()>(77, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'fetchNoteByFileName'
        QtMocHelpers::MethodData<NoteApi *(const QString &, int)>(78, 2, QMC::AccessPublic, 0x80000000 | 29, {{
            { QMetaType::QString, 42 }, { QMetaType::Int, 79 },
        }}),
        // Method 'fetchNoteByFileName'
        QtMocHelpers::MethodData<NoteApi *(const QString &)>(78, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 29, {{
            { QMetaType::QString, 42 },
        }}),
        // Method 'fetchNoteById'
        QtMocHelpers::MethodData<NoteApi *(int)>(80, 2, QMC::AccessPublic, 0x80000000 | 29, {{
            { QMetaType::Int, 81 },
        }}),
        // Method 'noteExistsByFileName'
        QtMocHelpers::MethodData<bool(const QString &, int, int)>(82, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 42 }, { QMetaType::Int, 83 }, { QMetaType::Int, 79 },
        }}),
        // Method 'noteExistsByFileName'
        QtMocHelpers::MethodData<bool(const QString &, int)>(82, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 42 }, { QMetaType::Int, 83 },
        }}),
        // Method 'noteExistsByFileName'
        QtMocHelpers::MethodData<bool(const QString &)>(82, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 42 },
        }}),
        // Method 'setClipboardText'
        QtMocHelpers::MethodData<void(const QString &, bool)>(84, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 31 }, { QMetaType::Bool, 52 },
        }}),
        // Method 'setClipboardText'
        QtMocHelpers::MethodData<void(const QString &)>(84, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 31 },
        }}),
        // Method 'setCurrentNote'
        QtMocHelpers::MethodData<void(NoteApi *, bool)>(85, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 29, 4 }, { QMetaType::Bool, 86 },
        }}),
        // Method 'setCurrentNote'
        QtMocHelpers::MethodData<void(NoteApi *)>(85, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 29, 4 },
        }}),
        // Method 'informationMessageBox'
        QtMocHelpers::MethodData<void(const QString &, const QString &)>(87, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 31 }, { QMetaType::QString, 88 },
        }}),
        // Method 'informationMessageBox'
        QtMocHelpers::MethodData<void(const QString &)>(87, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 31 },
        }}),
        // Method 'questionMessageBox'
        QtMocHelpers::MethodData<int(const QString &, const QString &, int, int)>(89, 2, QMC::AccessPublic, QMetaType::Int, {{
            { QMetaType::QString, 31 }, { QMetaType::QString, 88 }, { QMetaType::Int, 90 }, { QMetaType::Int, 91 },
        }}),
        // Method 'questionMessageBox'
        QtMocHelpers::MethodData<int(const QString &, const QString &, int)>(89, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Int, {{
            { QMetaType::QString, 31 }, { QMetaType::QString, 88 }, { QMetaType::Int, 90 },
        }}),
        // Method 'questionMessageBox'
        QtMocHelpers::MethodData<int(const QString &, const QString &)>(89, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Int, {{
            { QMetaType::QString, 31 }, { QMetaType::QString, 88 },
        }}),
        // Method 'questionMessageBox'
        QtMocHelpers::MethodData<int(const QString &)>(89, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Int, {{
            { QMetaType::QString, 31 },
        }}),
        // Method 'getOpenFileName'
        QtMocHelpers::MethodData<QString(const QString &, const QString &, const QString &)>(92, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 93 }, { QMetaType::QString, 94 }, { QMetaType::QString, 95 },
        }}),
        // Method 'getOpenFileName'
        QtMocHelpers::MethodData<QString(const QString &, const QString &)>(92, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 93 }, { QMetaType::QString, 94 },
        }}),
        // Method 'getOpenFileName'
        QtMocHelpers::MethodData<QString(const QString &)>(92, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 93 },
        }}),
        // Method 'getOpenFileName'
        QtMocHelpers::MethodData<QString()>(92, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString),
        // Method 'getSaveFileName'
        QtMocHelpers::MethodData<QString(const QString &, const QString &, const QString &)>(96, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 93 }, { QMetaType::QString, 94 }, { QMetaType::QString, 95 },
        }}),
        // Method 'getSaveFileName'
        QtMocHelpers::MethodData<QString(const QString &, const QString &)>(96, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 93 }, { QMetaType::QString, 94 },
        }}),
        // Method 'getSaveFileName'
        QtMocHelpers::MethodData<QString(const QString &)>(96, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 93 },
        }}),
        // Method 'getSaveFileName'
        QtMocHelpers::MethodData<QString()>(96, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString),
        // Method 'registerLabel'
        QtMocHelpers::MethodData<void(const QString &, const QString &)>(97, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 31 },
        }}),
        // Method 'registerLabel'
        QtMocHelpers::MethodData<void(const QString &)>(97, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 9 },
        }}),
        // Method 'setLabelText'
        QtMocHelpers::MethodData<void(const QString &, const QString &)>(98, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 9 }, { QMetaType::QString, 31 },
        }}),
        // Method 'toNativeDirSeparators'
        QtMocHelpers::MethodData<QString(const QString &)>(99, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 100 },
        }}),
        // Method 'fromNativeDirSeparators'
        QtMocHelpers::MethodData<QString(const QString &)>(101, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 100 },
        }}),
        // Method 'dirSeparator'
        QtMocHelpers::MethodData<QString()>(102, 2, QMC::AccessPublic, QMetaType::QString),
        // Method 'selectedNotesPaths'
        QtMocHelpers::MethodData<QStringList()>(103, 2, QMC::AccessPublic, QMetaType::QStringList),
        // Method 'inputDialogGetItem'
        QtMocHelpers::MethodData<QString(const QString &, const QString &, const QStringList &, int, bool)>(104, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 88 }, { QMetaType::QString, 105 }, { QMetaType::QStringList, 106 }, { QMetaType::Int, 107 },
            { QMetaType::Bool, 108 },
        }}),
        // Method 'inputDialogGetItem'
        QtMocHelpers::MethodData<QString(const QString &, const QString &, const QStringList &, int)>(104, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 88 }, { QMetaType::QString, 105 }, { QMetaType::QStringList, 106 }, { QMetaType::Int, 107 },
        }}),
        // Method 'inputDialogGetItem'
        QtMocHelpers::MethodData<QString(const QString &, const QString &, const QStringList &)>(104, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 88 }, { QMetaType::QString, 105 }, { QMetaType::QStringList, 106 },
        }}),
        // Method 'inputDialogGetText'
        QtMocHelpers::MethodData<QString(const QString &, const QString &, const QString &)>(109, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 88 }, { QMetaType::QString, 105 }, { QMetaType::QString, 31 },
        }}),
        // Method 'inputDialogGetText'
        QtMocHelpers::MethodData<QString(const QString &, const QString &)>(109, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 88 }, { QMetaType::QString, 105 },
        }}),
        // Method 'inputDialogGetMultiLineText'
        QtMocHelpers::MethodData<QString(const QString &, const QString &, const QString &)>(110, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 88 }, { QMetaType::QString, 105 }, { QMetaType::QString, 31 },
        }}),
        // Method 'inputDialogGetMultiLineText'
        QtMocHelpers::MethodData<QString(const QString &, const QString &)>(110, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 88 }, { QMetaType::QString, 105 },
        }}),
        // Method 'textDiffDialog'
        QtMocHelpers::MethodData<QString(const QString &, const QString &, QString, QString)>(111, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 88 }, { QMetaType::QString, 105 }, { QMetaType::QString, 112 }, { QMetaType::QString, 113 },
        }}),
        // Method 'setPersistentVariable'
        QtMocHelpers::MethodData<void(const QString &, const QVariant &)>(114, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 115 }, { 0x80000000 | 3, 116 },
        }}),
        // Method 'addHighlightingRule'
        QtMocHelpers::MethodData<void(const QString &, const QString &, int, int, int)>(117, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 118 }, { QMetaType::QString, 119 }, { QMetaType::Int, 120 }, { QMetaType::Int, 121 },
            { QMetaType::Int, 122 },
        }}),
        // Method 'addHighlightingRule'
        QtMocHelpers::MethodData<void(const QString &, const QString &, int, int)>(117, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 118 }, { QMetaType::QString, 119 }, { QMetaType::Int, 120 }, { QMetaType::Int, 121 },
        }}),
        // Method 'addHighlightingRule'
        QtMocHelpers::MethodData<void(const QString &, const QString &, int)>(117, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 118 }, { QMetaType::QString, 119 }, { QMetaType::Int, 120 },
        }}),
        // Method 'getPersistentVariable'
        QtMocHelpers::MethodData<QVariant(const QString &, const QVariant &)>(123, 2, QMC::AccessPublic, 0x80000000 | 3, {{
            { QMetaType::QString, 115 }, { 0x80000000 | 3, 124 },
        }}),
        // Method 'getPersistentVariable'
        QtMocHelpers::MethodData<QVariant(const QString &)>(123, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 3, {{
            { QMetaType::QString, 115 },
        }}),
        // Method 'getApplicationSettingsVariable'
        QtMocHelpers::MethodData<QVariant(const QString &, const QVariant &)>(125, 2, QMC::AccessPublic, 0x80000000 | 3, {{
            { QMetaType::QString, 115 }, { 0x80000000 | 3, 124 },
        }}),
        // Method 'getApplicationSettingsVariable'
        QtMocHelpers::MethodData<QVariant(const QString &)>(125, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 3, {{
            { QMetaType::QString, 115 },
        }}),
        // Method 'jumpToNoteSubFolder'
        QtMocHelpers::MethodData<bool(const QString &, const QString &)>(126, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 127 }, { QMetaType::QString, 128 },
        }}),
        // Method 'jumpToNoteSubFolder'
        QtMocHelpers::MethodData<bool(const QString &)>(126, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 127 },
        }}),
        // Method 'searchTagsByName'
        QtMocHelpers::MethodData<QStringList(const QString &) const>(129, 2, QMC::AccessPublic, QMetaType::QStringList, {{
            { QMetaType::QString, 130 },
        }}),
        // Method 'getTagByNameBreadcrumbList'
        QtMocHelpers::MethodData<TagApi *(const QStringList &, bool) const>(131, 2, QMC::AccessPublic, 0x80000000 | 132, {{
            { QMetaType::QStringList, 133 }, { QMetaType::Bool, 134 },
        }}),
        // Method 'getTagByNameBreadcrumbList'
        QtMocHelpers::MethodData<TagApi *(const QStringList &) const>(131, 2, QMC::AccessPublic | QMC::MethodCloned, 0x80000000 | 132, {{
            { QMetaType::QStringList, 133 },
        }}),
        // Method 'regenerateNotePreview'
        QtMocHelpers::MethodData<void() const>(135, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'selectedNotesIds'
        QtMocHelpers::MethodData<QList<int>() const>(136, 2, QMC::AccessPublic, 0x80000000 | 137),
        // Method 'writeToFile'
        QtMocHelpers::MethodData<bool(const QString &, const QString &, const bool) const>(138, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 139 }, { QMetaType::QString, 26 }, { QMetaType::Bool, 140 },
        }}),
        // Method 'writeToFile'
        QtMocHelpers::MethodData<bool(const QString &, const QString &) const>(138, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::QString, 139 }, { QMetaType::QString, 26 },
        }}),
        // Method 'readFromFile'
        QtMocHelpers::MethodData<QString(const QString &, const QString &) const>(141, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 139 }, { QMetaType::QString, 142 },
        }}),
        // Method 'readFromFile'
        QtMocHelpers::MethodData<QString(const QString &) const>(141, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::QString, {{
            { QMetaType::QString, 139 },
        }}),
        // Method 'fileExists'
        QtMocHelpers::MethodData<bool(const QString &) const>(143, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 139 },
        }}),
        // Method 'fetchNoteIdsByNoteTextPart'
        QtMocHelpers::MethodData<QVector<int>(const QString &) const>(144, 2, QMC::AccessPublic, 0x80000000 | 137, {{
            { QMetaType::QString, 31 },
        }}),
        // Method 'triggerMenuAction'
        QtMocHelpers::MethodData<void(const QString &, const QString &) const>(145, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 146 }, { QMetaType::QString, 147 },
        }}),
        // Method 'triggerMenuAction'
        QtMocHelpers::MethodData<void(const QString &) const>(145, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 146 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ScriptingService, qt_meta_tag_ZN16ScriptingServiceE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ScriptingService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16ScriptingServiceE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16ScriptingServiceE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN16ScriptingServiceE_t>.metaTypes,
    nullptr
} };

void ScriptingService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ScriptingService *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->noteStored((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 1: _t->onCurrentNoteChanged((*reinterpret_cast< std::add_pointer_t<Note*>>(_a[1]))); break;
        case 2: _t->reloadEngine(); break;
        case 3: _t->onCustomActionInvoked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->callCustomActionInvokedForObject((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->onScriptThreadDone((*reinterpret_cast< std::add_pointer_t<ScriptThread*>>(_a[1]))); break;
        case 6: { QString _r = _t->cacheDir((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->cacheDir();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->clearCacheDir((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->clearCacheDir();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->startDetachedProcess((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->startDetachedProcess((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->startDetachedProcess((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->startDetachedProcess((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->startDetachedProcess((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { QByteArray _r = _t->startSynchronousProcess((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 16: { QByteArray _r = _t->startSynchronousProcess((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 17: { QByteArray _r = _t->startSynchronousProcess((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 18: { QString _r = _t->currentNoteFolderPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 19: { NoteApi* _r = _t->currentNote();
            if (_a[0]) *reinterpret_cast< NoteApi**>(_a[0]) = std::move(_r); }  break;
        case 20: _t->log((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: { QString _r = _t->downloadUrlToString((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 22: { QString _r = _t->downloadUrlToMedia((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 23: { QString _r = _t->downloadUrlToMedia((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 24: { QString _r = _t->aiComplete((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 25: { QString _r = _t->insertMediaFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 26: { QString _r = _t->insertMediaFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 27: { QString _r = _t->insertAttachmentFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 28: _t->registerCustomAction((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[7]))); break;
        case 29: _t->registerCustomAction((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6]))); break;
        case 30: _t->registerCustomAction((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 31: _t->registerCustomAction((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 32: _t->registerCustomAction((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 33: _t->registerCustomAction((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 34: _t->createNote((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 35: { QString _r = _t->clipboard((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 36: { QString _r = _t->clipboard();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 37: _t->noteTextEditWrite((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 38: { QString _r = _t->noteTextEditSelectedText();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 39: _t->noteTextEditSelectAll(); break;
        case 40: _t->noteTextEditSelectCurrentLine(); break;
        case 41: _t->noteTextEditSelectCurrentWord(); break;
        case 42: _t->noteTextEditSetSelection((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 43: _t->noteTextEditSetCursorPosition((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 44: { int _r = _t->noteTextEditCursorPosition();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 45: { int _r = _t->noteTextEditSelectionStart();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 46: { int _r = _t->noteTextEditSelectionEnd();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 47: { QString _r = _t->noteTextEditCurrentWord((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 48: { QString _r = _t->noteTextEditCurrentWord();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 49: { QString _r = _t->noteTextEditCurrentBlock();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 50: _t->encryptionDisablePassword(); break;
        case 51: { bool _r = _t->platformIsLinux();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 52: { bool _r = _t->platformIsOSX();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 53: { bool _r = _t->platformIsWindows();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 54: _t->tagCurrentNote((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 55: _t->addStyleSheet((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 56: _t->reloadScriptingEngine(); break;
        case 57: { NoteApi* _r = _t->fetchNoteByFileName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< NoteApi**>(_a[0]) = std::move(_r); }  break;
        case 58: { NoteApi* _r = _t->fetchNoteByFileName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< NoteApi**>(_a[0]) = std::move(_r); }  break;
        case 59: { NoteApi* _r = _t->fetchNoteById((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< NoteApi**>(_a[0]) = std::move(_r); }  break;
        case 60: { bool _r = _t->noteExistsByFileName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 61: { bool _r = _t->noteExistsByFileName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 62: { bool _r = _t->noteExistsByFileName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 63: _t->setClipboardText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 64: _t->setClipboardText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 65: _t->setCurrentNote((*reinterpret_cast< std::add_pointer_t<NoteApi*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 66: _t->setCurrentNote((*reinterpret_cast< std::add_pointer_t<NoteApi*>>(_a[1]))); break;
        case 67: _t->informationMessageBox((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 68: _t->informationMessageBox((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 69: { int _r = _t->questionMessageBox((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 70: { int _r = _t->questionMessageBox((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 71: { int _r = _t->questionMessageBox((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 72: { int _r = _t->questionMessageBox((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 73: { QString _r = _t->getOpenFileName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 74: { QString _r = _t->getOpenFileName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 75: { QString _r = _t->getOpenFileName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 76: { QString _r = _t->getOpenFileName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 77: { QString _r = _t->getSaveFileName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 78: { QString _r = _t->getSaveFileName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 79: { QString _r = _t->getSaveFileName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 80: { QString _r = _t->getSaveFileName();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 81: _t->registerLabel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 82: _t->registerLabel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 83: _t->setLabelText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 84: { QString _r = _t->toNativeDirSeparators((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 85: { QString _r = _t->fromNativeDirSeparators((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 86: { QString _r = _t->dirSeparator();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 87: { QStringList _r = _t->selectedNotesPaths();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 88: { QString _r = _t->inputDialogGetItem((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 89: { QString _r = _t->inputDialogGetItem((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 90: { QString _r = _t->inputDialogGetItem((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 91: { QString _r = _t->inputDialogGetText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 92: { QString _r = _t->inputDialogGetText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 93: { QString _r = _t->inputDialogGetMultiLineText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 94: { QString _r = _t->inputDialogGetMultiLineText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 95: { QString _r = _t->textDiffDialog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 96: _t->setPersistentVariable((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 97: _t->addHighlightingRule((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5]))); break;
        case 98: _t->addHighlightingRule((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 99: _t->addHighlightingRule((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 100: { QVariant _r = _t->getPersistentVariable((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 101: { QVariant _r = _t->getPersistentVariable((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 102: { QVariant _r = _t->getApplicationSettingsVariable((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 103: { QVariant _r = _t->getApplicationSettingsVariable((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        case 104: { bool _r = _t->jumpToNoteSubFolder((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 105: { bool _r = _t->jumpToNoteSubFolder((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 106: { QStringList _r = _t->searchTagsByName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 107: { TagApi* _r = _t->getTagByNameBreadcrumbList((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< TagApi**>(_a[0]) = std::move(_r); }  break;
        case 108: { TagApi* _r = _t->getTagByNameBreadcrumbList((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1])));
            if (_a[0]) *reinterpret_cast< TagApi**>(_a[0]) = std::move(_r); }  break;
        case 109: _t->regenerateNotePreview(); break;
        case 110: { QList<int> _r = _t->selectedNotesIds();
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 111: { bool _r = _t->writeToFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 112: { bool _r = _t->writeToFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 113: { QString _r = _t->readFromFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 114: { QString _r = _t->readFromFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 115: { bool _r = _t->fileExists((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 116: { QList<int> _r = _t->fetchNoteIdsByNoteTextPart((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 117: _t->triggerMenuAction((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 118: _t->triggerMenuAction((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ScriptThread* >(); break;
            }
            break;
        case 65:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NoteApi* >(); break;
            }
            break;
        case 66:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NoteApi* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ScriptingService::*)(QVariant )>(_a, &ScriptingService::noteStored, 0))
            return;
    }
}

const QMetaObject *ScriptingService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScriptingService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN16ScriptingServiceE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ScriptingService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 119)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 119;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 119)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 119;
    }
    return _id;
}

// SIGNAL 0
void ScriptingService::noteStored(QVariant _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
