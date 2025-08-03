/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "currentNoteChanged",
        "",
        "Note&",
        "note",
        "log",
        "LogWidget::LogType",
        "logType",
        "text",
        "settingsChanged",
        "setCurrentNoteFromNoteId",
        "noteId",
        "regenerateNotePreview",
        "forceRegenerateNotePreview",
        "storeUpdatedNotesToDisk",
        "changeNoteFolder",
        "noteFolderId",
        "forceChange",
        "allowNoteEditing",
        "disallowNoteEditing",
        "openSelectedNotesInTab",
        "openNoteInTab",
        "Note",
        "openCurrentNoteInTab",
        "focusNoteTextEdit",
        "onNavigationWidgetPositionClicked",
        "position",
        "on_noteTextEdit_textChanged",
        "on_action_Quit_triggered",
        "quitApp",
        "notesDirectoryWasModified",
        "str",
        "notesWereModified",
        "on_actionSet_ownCloud_Folder_triggered",
        "on_searchLineEdit_textChanged",
        "arg1",
        "on_action_Find_note_triggered",
        "on_searchLineEdit_returnPressed",
        "on_action_Remove_note_triggered",
        "on_actionAbout_QOwnNotes_triggered",
        "on_action_New_note_triggered",
        "onNotePreviewAnchorClicked",
        "on_actionCheck_for_updates_triggered",
        "on_actionReport_problems_or_ideas_triggered",
        "on_actionAlphabetical_triggered",
        "checked",
        "on_actionBy_date_triggered",
        "systemTrayIconClicked",
        "QSystemTrayIcon::ActivationReason",
        "reason",
        "on_action_Settings_triggered",
        "on_actionShow_versions_triggered",
        "on_actionShow_trash_triggered",
        "on_actionSelect_all_notes_triggered",
        "jumpToWelcomeNote",
        "pasteMediaIntoNote",
        "on_actionInsert_text_link_triggered",
        "on_action_DuplicateText_triggered",
        "on_action_Back_in_note_history_triggered",
        "on_action_Forward_in_note_history_triggered",
        "on_action_Shortcuts_triggered",
        "on_action_Knowledge_base_triggered",
        "on_actionInsert_current_time_triggered",
        "on_actionShow_Todo_List_triggered",
        "frequentPeriodicChecker",
        "on_action_Export_note_as_PDF_markdown_triggered",
        "on_action_Export_note_as_PDF_text_triggered",
        "on_action_Print_note_markdown_triggered",
        "on_action_Print_note_text_triggered",
        "on_actionInsert_image_triggered",
        "on_actionShow_changelog_triggered",
        "openLocalUrl",
        "urlString",
        "on_action_Find_text_in_note_triggered",
        "on_action_Encrypt_note_triggered",
        "on_actionDecrypt_note_triggered",
        "on_actionEdit_encrypted_note_triggered",
        "on_encryptedNoteTextEdit_textChanged",
        "on_action_Open_note_in_external_editor_triggered",
        "on_action_Export_note_as_markdown_triggered",
        "showEvent",
        "QShowEvent*",
        "event",
        "on_actionGet_invloved_triggered",
        "gotoNoteBookmark",
        "slot",
        "storeNoteBookmark",
        "on_actionInsert_code_block_triggered",
        "on_actionNext_note_triggered",
        "on_actionPrevious_Note_triggered",
        "on_actionToggle_distraction_free_mode_triggered",
        "toggleDistractionFreeMode",
        "trackAction",
        "QAction*",
        "action",
        "on_actionShow_toolbar_triggered",
        "toolbarVisibilityChanged",
        "visible",
        "dfmEditorWidthActionTriggered",
        "dragEnterEvent",
        "QDragEnterEvent*",
        "e",
        "dropEvent",
        "QDropEvent*",
        "on_actionPaste_image_triggered",
        "on_actionShow_note_in_file_manager_triggered",
        "on_actionFormat_text_bold_triggered",
        "on_actionFormat_text_underline_triggered",
        "on_actionFormat_text_italic_triggered",
        "on_action_Increase_note_text_size_triggered",
        "on_action_Decrease_note_text_size_triggered",
        "on_action_Reset_note_text_size_triggered",
        "on_noteFolderComboBox_currentIndexChanged",
        "index",
        "on_tagLineEdit_returnPressed",
        "on_tagLineEdit_textChanged",
        "on_newNoteTagButton_clicked",
        "on_newNoteTagLineEdit_returnPressed",
        "on_newNoteTagLineEdit_editingFinished",
        "removeNoteTagClicked",
        "on_action_new_tag_triggered",
        "on_action_Reload_note_folder_triggered",
        "noteViewUpdateTimerSlot",
        "autoReadOnlyModeTimerSlot",
        "gitCommitCurrentNoteFolder",
        "noteTextSliderValueChanged",
        "value",
        "force",
        "noteViewSliderValueChanged",
        "on_tagTreeWidget_itemChanged",
        "QTreeWidgetItem*",
        "item",
        "column",
        "on_tagTreeWidget_currentItemChanged",
        "current",
        "previous",
        "on_tagTreeWidget_itemSelectionChanged",
        "on_tagTreeWidget_customContextMenuRequested",
        "pos",
        "moveSelectedTagsToTagId",
        "tagId",
        "tagSelectedNotesToTagId",
        "on_actionReplace_in_current_note_triggered",
        "onBacklinkWidgetNoteClicked",
        "markdown",
        "startNavigationParser",
        "onNoteTextViewResize",
        "size",
        "oldSize",
        "on_actionAutocomplete_triggered",
        "restoreDistractionFreeMode",
        "on_actionSelect_note_folder_triggered",
        "on_actionReload_scripting_engine_triggered",
        "on_actionShow_log_triggered",
        "on_actionExport_preview_HTML_triggered",
        "hideNoteFolderComboBoxIfNeeded",
        "generateSystemTrayContextMenu",
        "reloadTodoLists",
        "showWindow",
        "on_actionOpen_IRC_Channel_triggered",
        "storeSavedSearch",
        "on_actionInsert_headline_from_note_filename_triggered",
        "on_actionUse_softwrap_in_note_editor_toggled",
        "on_actionShow_status_bar_triggered",
        "on_noteTreeWidget_currentItemChanged",
        "on_noteTreeWidget_customContextMenuRequested",
        "on_noteTreeWidget_itemChanged",
        "onCurrentSubFolderChanged",
        "onMultipleSubfoldersSelected",
        "clearTagFilteringColumn",
        "on_noteSubFolderLineEdit_textChanged",
        "on_noteSubFolderLineEdit_returnPressed",
        "on_actionShare_note_triggered",
        "on_actionToggle_text_case_triggered",
        "on_actionMarkdown_cheatsheet_triggered",
        "on_actionStrike_out_text_triggered",
        "on_actionShow_menu_bar_triggered",
        "moveSelectedNotesToNoteSubFolderId",
        "noteSubFolderId",
        "copySelectedNotesToNoteSubFolderId",
        "on_actionSplit_note_at_cursor_position_triggered",
        "onCustomActionInvoked",
        "identifier",
        "on_actionDonate_triggered",
        "on_actionFind_notes_in_all_subfolders_triggered",
        "on_actionImport_notes_from_Evernote_triggered",
        "on_actionManage_stored_images_triggered",
        "on_actionGitter_triggered",
        "on_actionUnlock_panels_toggled",
        "on_actionStore_as_new_workspace_triggered",
        "onWorkspaceComboBoxCurrentIndexChanged",
        "onAiBackendComboBoxCurrentIndexChanged",
        "onAiModelComboBoxCurrentIndexChanged",
        "onAiModelGroupChanged",
        "on_actionRemove_current_workspace_triggered",
        "on_actionRename_current_workspace_triggered",
        "on_actionSwitch_to_previous_workspace_triggered",
        "on_actionShow_all_panels_triggered",
        "restoreCurrentWorkspace",
        "togglePanelVisibility",
        "objectName",
        "updatePanelMenu",
        "toggleToolbarVisibility",
        "updateToolbarMenu",
        "on_actionFind_action_triggered",
        "releaseDockWidgetSizes",
        "on_actionInsert_table_triggered",
        "on_actionInsert_block_quote_triggered",
        "on_actionSearch_text_on_the_web_triggered",
        "noteEditCursorPositionChanged",
        "on_actionDelete_line_triggered",
        "on_actionDelete_word_triggered",
        "on_actionView_note_in_new_window_triggered",
        "on_actionSave_modified_notes_triggered",
        "enableNoteExternallyRemovedCheck",
        "on_actionAscending_triggered",
        "on_actionDescending_triggered",
        "restoreActiveNoteHistoryItem",
        "on_actionShow_note_git_versions_triggered",
        "on_tagTreeWidget_itemCollapsed",
        "on_tagTreeWidget_itemExpanded",
        "on_actionScript_repository_triggered",
        "on_actionScript_settings_triggered",
        "filterNotesByTag",
        "on_actionInsert_attachment_triggered",
        "on_actionAllow_note_editing_triggered",
        "on_actionCheck_for_script_updates_triggered",
        "on_actionShow_local_trash_triggered",
        "on_actionJump_to_note_text_edit_triggered",
        "on_tagTreeWidget_itemDoubleClicked",
        "on_noteTreeWidget_itemDoubleClicked",
        "on_noteTreeWidget_itemSelectionChanged",
        "on_actionManage_stored_attachments_triggered",
        "on_noteOperationsButton_clicked",
        "on_actionImport_notes_from_text_files_triggered",
        "on_actionTelegram_triggered",
        "on_actionCopy_headline_triggered",
        "on_action_FormatTable_triggered",
        "on_navigationLineEdit_textChanged",
        "initWebSocketServerService",
        "initWebAppClientService",
        "on_actionJump_to_note_list_panel_triggered",
        "on_actionJump_to_tags_panel_triggered",
        "on_actionJump_to_note_subfolder_panel_triggered",
        "on_actionActivate_context_menu_triggered",
        "on_actionImport_bookmarks_from_server_triggered",
        "on_actionElementMatrix_triggered",
        "on_actionToggle_fullscreen_triggered",
        "disableFullScreenMode",
        "moveSelectedNotesToFolder",
        "destinationFolder",
        "copySelectedNotesToFolder",
        "noteFolderPath",
        "on_actionTypewriter_mode_toggled",
        "on_actionCheck_spelling_toggled",
        "onLanguageChanged",
        "onSpellBackendChanged",
        "on_actionManage_dictionaries_triggered",
        "on_noteTextEdit_modificationChanged",
        "on_encryptedNoteTextEdit_modificationChanged",
        "on_actionEditorWidthCustom_triggered",
        "on_actionShow_Hide_application_triggered",
        "on_noteEditTabWidget_currentChanged",
        "on_noteEditTabWidget_tabCloseRequested",
        "on_actionPrevious_note_tab_triggered",
        "on_actionNext_note_tab_triggered",
        "on_actionClose_current_note_tab_triggered",
        "on_actionNew_note_in_new_tab_triggered",
        "on_noteEditTabWidget_tabBarDoubleClicked",
        "on_actionToggle_note_stickiness_of_current_tab_triggered",
        "on_noteEditTabWidget_tabBarClicked",
        "showNoteEditTabWidgetContextMenu",
        "point",
        "on_actionJump_to_navigation_panel_triggered",
        "on_actionInsert_note_link_triggered",
        "on_actionImport_notes_from_Joplin_triggered",
        "on_actionToggle_Always_on_top_triggered",
        "on_action_Load_Todo_Items_triggered",
        "on_actionInsert_Nextcloud_Deck_card_triggered",
        "on_actionCopy_path_to_note_to_clipboard_triggered",
        "on_actionMove_up_in_subfolder_list_triggered",
        "on_actionMove_down_in_subfolder_list_triggered",
        "on_actionMove_up_in_tag_list_triggered",
        "on_actionMove_down_in_tag_list_triggered",
        "on_actionEnable_AI_toggled",
        "on_navigationTabWidget_currentChanged",
        "on_actionReattach_panels_triggered",
        "on_actionAIAssistant_triggered",
        "reloadTagTree",
        "reloadNoteSubFolderTree",
        "buildNotesIndexAndLoadNoteDirectoryList",
        "forceBuild",
        "forceLoad",
        "reloadTabs",
        "createNewNoteSubFolder",
        "folderName",
        "insertHtmlAsMarkdownIntoCurrentNote",
        "html",
        "getWorkspaceUuid",
        "workspaceName",
        "reloadCurrentNoteByNoteId",
        "updateNoteText",
        "getWorkspaceUuidList",
        "setCurrentWorkspace",
        "uuid",
        "insertDataUrlAsFileIntoCurrentNote",
        "dataUrl",
        "removeNoteTab",
        "getNoteTabNoteIdList",
        "QList<int>",
        "jumpToTag",
        "currentNote"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentNoteChanged'
        QtMocHelpers::SignalData<void(Note &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'log'
        QtMocHelpers::SignalData<void(LogWidget::LogType, QString)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 6, 7 }, { QMetaType::QString, 8 },
        }}),
        // Signal 'settingsChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setCurrentNoteFromNoteId'
        QtMocHelpers::SlotData<void(const int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 11 },
        }}),
        // Slot 'regenerateNotePreview'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'forceRegenerateNotePreview'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'storeUpdatedNotesToDisk'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'changeNoteFolder'
        QtMocHelpers::SlotData<bool(const int, const bool)>(15, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 16 }, { QMetaType::Bool, 17 },
        }}),
        // Slot 'changeNoteFolder'
        QtMocHelpers::SlotData<bool(const int)>(15, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool, {{
            { QMetaType::Int, 16 },
        }}),
        // Slot 'allowNoteEditing'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'disallowNoteEditing'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openSelectedNotesInTab'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'openNoteInTab'
        QtMocHelpers::SlotData<void(const Note &)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 22, 4 },
        }}),
        // Slot 'openCurrentNoteInTab'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'focusNoteTextEdit'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'onNavigationWidgetPositionClicked'
        QtMocHelpers::SlotData<void(int)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 26 },
        }}),
        // Slot 'on_noteTextEdit_textChanged'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Quit_triggered'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'quitApp'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'notesDirectoryWasModified'
        QtMocHelpers::SlotData<void(const QString &)>(30, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 31 },
        }}),
        // Slot 'notesWereModified'
        QtMocHelpers::SlotData<void(const QString &)>(32, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 31 },
        }}),
        // Slot 'on_actionSet_ownCloud_Folder_triggered'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_searchLineEdit_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(34, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 35 },
        }}),
        // Slot 'on_action_Find_note_triggered'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_searchLineEdit_returnPressed'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Remove_note_triggered'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAbout_QOwnNotes_triggered'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_New_note_triggered'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onNotePreviewAnchorClicked'
        QtMocHelpers::SlotData<void(const QUrl &)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QUrl, 35 },
        }}),
        // Slot 'on_actionCheck_for_updates_triggered'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionReport_problems_or_ideas_triggered'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAlphabetical_triggered'
        QtMocHelpers::SlotData<void(bool)>(44, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 45 },
        }}),
        // Slot 'on_actionBy_date_triggered'
        QtMocHelpers::SlotData<void(bool)>(46, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 45 },
        }}),
        // Slot 'systemTrayIconClicked'
        QtMocHelpers::SlotData<void(QSystemTrayIcon::ActivationReason)>(47, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 48, 49 },
        }}),
        // Slot 'on_action_Settings_triggered'
        QtMocHelpers::SlotData<void()>(50, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShow_versions_triggered'
        QtMocHelpers::SlotData<void()>(51, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShow_trash_triggered'
        QtMocHelpers::SlotData<void()>(52, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSelect_all_notes_triggered'
        QtMocHelpers::SlotData<void()>(53, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'jumpToWelcomeNote'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'pasteMediaIntoNote'
        QtMocHelpers::SlotData<void()>(55, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInsert_text_link_triggered'
        QtMocHelpers::SlotData<void()>(56, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_DuplicateText_triggered'
        QtMocHelpers::SlotData<void()>(57, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Back_in_note_history_triggered'
        QtMocHelpers::SlotData<void()>(58, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Forward_in_note_history_triggered'
        QtMocHelpers::SlotData<void()>(59, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Shortcuts_triggered'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Knowledge_base_triggered'
        QtMocHelpers::SlotData<void()>(61, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInsert_current_time_triggered'
        QtMocHelpers::SlotData<void()>(62, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShow_Todo_List_triggered'
        QtMocHelpers::SlotData<void()>(63, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'frequentPeriodicChecker'
        QtMocHelpers::SlotData<void()>(64, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Export_note_as_PDF_markdown_triggered'
        QtMocHelpers::SlotData<void()>(65, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Export_note_as_PDF_text_triggered'
        QtMocHelpers::SlotData<void()>(66, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Print_note_markdown_triggered'
        QtMocHelpers::SlotData<void()>(67, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Print_note_text_triggered'
        QtMocHelpers::SlotData<void()>(68, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInsert_image_triggered'
        QtMocHelpers::SlotData<void()>(69, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShow_changelog_triggered'
        QtMocHelpers::SlotData<void()>(70, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'openLocalUrl'
        QtMocHelpers::SlotData<void(QString)>(71, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 72 },
        }}),
        // Slot 'on_action_Find_text_in_note_triggered'
        QtMocHelpers::SlotData<void()>(73, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Encrypt_note_triggered'
        QtMocHelpers::SlotData<void()>(74, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDecrypt_note_triggered'
        QtMocHelpers::SlotData<void()>(75, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEdit_encrypted_note_triggered'
        QtMocHelpers::SlotData<void()>(76, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_encryptedNoteTextEdit_textChanged'
        QtMocHelpers::SlotData<void()>(77, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Open_note_in_external_editor_triggered'
        QtMocHelpers::SlotData<void()>(78, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Export_note_as_markdown_triggered'
        QtMocHelpers::SlotData<void()>(79, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showEvent'
        QtMocHelpers::SlotData<void(QShowEvent *)>(80, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 81, 82 },
        }}),
        // Slot 'on_actionGet_invloved_triggered'
        QtMocHelpers::SlotData<void()>(83, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'gotoNoteBookmark'
        QtMocHelpers::SlotData<void(int)>(84, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 85 },
        }}),
        // Slot 'gotoNoteBookmark'
        QtMocHelpers::SlotData<void()>(84, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'storeNoteBookmark'
        QtMocHelpers::SlotData<void(int)>(86, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 85 },
        }}),
        // Slot 'storeNoteBookmark'
        QtMocHelpers::SlotData<void()>(86, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void),
        // Slot 'on_actionInsert_code_block_triggered'
        QtMocHelpers::SlotData<void()>(87, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNext_note_triggered'
        QtMocHelpers::SlotData<void()>(88, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionPrevious_Note_triggered'
        QtMocHelpers::SlotData<void()>(89, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionToggle_distraction_free_mode_triggered'
        QtMocHelpers::SlotData<void()>(90, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleDistractionFreeMode'
        QtMocHelpers::SlotData<void()>(91, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'trackAction'
        QtMocHelpers::SlotData<void(QAction *)>(92, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 93, 94 },
        }}),
        // Slot 'on_actionShow_toolbar_triggered'
        QtMocHelpers::SlotData<void(bool)>(95, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 45 },
        }}),
        // Slot 'toolbarVisibilityChanged'
        QtMocHelpers::SlotData<void(bool)>(96, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 97 },
        }}),
        // Slot 'dfmEditorWidthActionTriggered'
        QtMocHelpers::SlotData<void(QAction *)>(98, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 93, 94 },
        }}),
        // Slot 'dragEnterEvent'
        QtMocHelpers::SlotData<void(QDragEnterEvent *)>(99, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 100, 101 },
        }}),
        // Slot 'dropEvent'
        QtMocHelpers::SlotData<void(QDropEvent *)>(102, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 103, 101 },
        }}),
        // Slot 'on_actionPaste_image_triggered'
        QtMocHelpers::SlotData<void()>(104, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShow_note_in_file_manager_triggered'
        QtMocHelpers::SlotData<void()>(105, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFormat_text_bold_triggered'
        QtMocHelpers::SlotData<void()>(106, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFormat_text_underline_triggered'
        QtMocHelpers::SlotData<void()>(107, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFormat_text_italic_triggered'
        QtMocHelpers::SlotData<void()>(108, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Increase_note_text_size_triggered'
        QtMocHelpers::SlotData<void()>(109, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Decrease_note_text_size_triggered'
        QtMocHelpers::SlotData<void()>(110, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Reset_note_text_size_triggered'
        QtMocHelpers::SlotData<void()>(111, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_noteFolderComboBox_currentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(112, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 113 },
        }}),
        // Slot 'on_tagLineEdit_returnPressed'
        QtMocHelpers::SlotData<void()>(114, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tagLineEdit_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(115, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 35 },
        }}),
        // Slot 'on_newNoteTagButton_clicked'
        QtMocHelpers::SlotData<void()>(116, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_newNoteTagLineEdit_returnPressed'
        QtMocHelpers::SlotData<void()>(117, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_newNoteTagLineEdit_editingFinished'
        QtMocHelpers::SlotData<void()>(118, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'removeNoteTagClicked'
        QtMocHelpers::SlotData<void()>(119, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_new_tag_triggered'
        QtMocHelpers::SlotData<void()>(120, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Reload_note_folder_triggered'
        QtMocHelpers::SlotData<void()>(121, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'noteViewUpdateTimerSlot'
        QtMocHelpers::SlotData<void()>(122, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'autoReadOnlyModeTimerSlot'
        QtMocHelpers::SlotData<void()>(123, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'gitCommitCurrentNoteFolder'
        QtMocHelpers::SlotData<void()>(124, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'noteTextSliderValueChanged'
        QtMocHelpers::SlotData<void(int, bool)>(125, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Bool, 127 },
        }}),
        // Slot 'noteTextSliderValueChanged'
        QtMocHelpers::SlotData<void(int)>(125, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Int, 126 },
        }}),
        // Slot 'noteViewSliderValueChanged'
        QtMocHelpers::SlotData<void(int, bool)>(128, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 126 }, { QMetaType::Bool, 127 },
        }}),
        // Slot 'noteViewSliderValueChanged'
        QtMocHelpers::SlotData<void(int)>(128, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Int, 126 },
        }}),
        // Slot 'on_tagTreeWidget_itemChanged'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(129, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 130, 131 }, { QMetaType::Int, 132 },
        }}),
        // Slot 'on_tagTreeWidget_currentItemChanged'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, QTreeWidgetItem *)>(133, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 130, 134 }, { 0x80000000 | 130, 135 },
        }}),
        // Slot 'on_tagTreeWidget_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(136, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tagTreeWidget_customContextMenuRequested'
        QtMocHelpers::SlotData<void(const QPoint)>(137, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QPoint, 138 },
        }}),
        // Slot 'moveSelectedTagsToTagId'
        QtMocHelpers::SlotData<void(int)>(139, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 140 },
        }}),
        // Slot 'tagSelectedNotesToTagId'
        QtMocHelpers::SlotData<void(int)>(141, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 140 },
        }}),
        // Slot 'on_actionReplace_in_current_note_triggered'
        QtMocHelpers::SlotData<void()>(142, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onBacklinkWidgetNoteClicked'
        QtMocHelpers::SlotData<void(int, QString)>(143, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 11 }, { QMetaType::QString, 144 },
        }}),
        // Slot 'startNavigationParser'
        QtMocHelpers::SlotData<void()>(145, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onNoteTextViewResize'
        QtMocHelpers::SlotData<void(QSize, QSize)>(146, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QSize, 147 }, { QMetaType::QSize, 148 },
        }}),
        // Slot 'on_actionAutocomplete_triggered'
        QtMocHelpers::SlotData<void()>(149, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'restoreDistractionFreeMode'
        QtMocHelpers::SlotData<void()>(150, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSelect_note_folder_triggered'
        QtMocHelpers::SlotData<void()>(151, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionReload_scripting_engine_triggered'
        QtMocHelpers::SlotData<void()>(152, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShow_log_triggered'
        QtMocHelpers::SlotData<void()>(153, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionExport_preview_HTML_triggered'
        QtMocHelpers::SlotData<void()>(154, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'hideNoteFolderComboBoxIfNeeded'
        QtMocHelpers::SlotData<void()>(155, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'generateSystemTrayContextMenu'
        QtMocHelpers::SlotData<void()>(156, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'reloadTodoLists'
        QtMocHelpers::SlotData<void()>(157, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'showWindow'
        QtMocHelpers::SlotData<void()>(158, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionOpen_IRC_Channel_triggered'
        QtMocHelpers::SlotData<void()>(159, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'storeSavedSearch'
        QtMocHelpers::SlotData<void()>(160, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInsert_headline_from_note_filename_triggered'
        QtMocHelpers::SlotData<void()>(161, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionUse_softwrap_in_note_editor_toggled'
        QtMocHelpers::SlotData<void(bool)>(162, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 35 },
        }}),
        // Slot 'on_actionShow_status_bar_triggered'
        QtMocHelpers::SlotData<void(bool)>(163, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 45 },
        }}),
        // Slot 'on_noteTreeWidget_currentItemChanged'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, QTreeWidgetItem *)>(164, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 130, 134 }, { 0x80000000 | 130, 135 },
        }}),
        // Slot 'on_noteTreeWidget_customContextMenuRequested'
        QtMocHelpers::SlotData<void(const QPoint)>(165, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QPoint, 138 },
        }}),
        // Slot 'on_noteTreeWidget_itemChanged'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(166, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 130, 131 }, { QMetaType::Int, 132 },
        }}),
        // Slot 'onCurrentSubFolderChanged'
        QtMocHelpers::SlotData<void()>(167, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onMultipleSubfoldersSelected'
        QtMocHelpers::SlotData<void()>(168, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'clearTagFilteringColumn'
        QtMocHelpers::SlotData<void()>(169, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_noteSubFolderLineEdit_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(170, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 35 },
        }}),
        // Slot 'on_noteSubFolderLineEdit_returnPressed'
        QtMocHelpers::SlotData<void()>(171, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShare_note_triggered'
        QtMocHelpers::SlotData<void()>(172, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionToggle_text_case_triggered'
        QtMocHelpers::SlotData<void()>(173, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMarkdown_cheatsheet_triggered'
        QtMocHelpers::SlotData<void()>(174, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionStrike_out_text_triggered'
        QtMocHelpers::SlotData<void()>(175, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShow_menu_bar_triggered'
        QtMocHelpers::SlotData<void(bool)>(176, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 45 },
        }}),
        // Slot 'moveSelectedNotesToNoteSubFolderId'
        QtMocHelpers::SlotData<void(int)>(177, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 178 },
        }}),
        // Slot 'copySelectedNotesToNoteSubFolderId'
        QtMocHelpers::SlotData<void(int)>(179, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 178 },
        }}),
        // Slot 'on_actionSplit_note_at_cursor_position_triggered'
        QtMocHelpers::SlotData<void()>(180, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onCustomActionInvoked'
        QtMocHelpers::SlotData<void(const QString &)>(181, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 182 },
        }}),
        // Slot 'on_actionDonate_triggered'
        QtMocHelpers::SlotData<void()>(183, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFind_notes_in_all_subfolders_triggered'
        QtMocHelpers::SlotData<void()>(184, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionImport_notes_from_Evernote_triggered'
        QtMocHelpers::SlotData<void()>(185, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionManage_stored_images_triggered'
        QtMocHelpers::SlotData<void()>(186, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionGitter_triggered'
        QtMocHelpers::SlotData<void()>(187, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionUnlock_panels_toggled'
        QtMocHelpers::SlotData<void(bool)>(188, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 35 },
        }}),
        // Slot 'on_actionStore_as_new_workspace_triggered'
        QtMocHelpers::SlotData<void()>(189, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onWorkspaceComboBoxCurrentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(190, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 113 },
        }}),
        // Slot 'onAiBackendComboBoxCurrentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(191, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 113 },
        }}),
        // Slot 'onAiModelComboBoxCurrentIndexChanged'
        QtMocHelpers::SlotData<void(int)>(192, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 113 },
        }}),
        // Slot 'onAiModelGroupChanged'
        QtMocHelpers::SlotData<void(QAction *)>(193, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 93, 94 },
        }}),
        // Slot 'on_actionRemove_current_workspace_triggered'
        QtMocHelpers::SlotData<void()>(194, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionRename_current_workspace_triggered'
        QtMocHelpers::SlotData<void()>(195, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSwitch_to_previous_workspace_triggered'
        QtMocHelpers::SlotData<void()>(196, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShow_all_panels_triggered'
        QtMocHelpers::SlotData<void()>(197, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'restoreCurrentWorkspace'
        QtMocHelpers::SlotData<void()>(198, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'togglePanelVisibility'
        QtMocHelpers::SlotData<void(const QString &)>(199, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 200 },
        }}),
        // Slot 'updatePanelMenu'
        QtMocHelpers::SlotData<void()>(201, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'toggleToolbarVisibility'
        QtMocHelpers::SlotData<void(const QString &)>(202, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 200 },
        }}),
        // Slot 'updateToolbarMenu'
        QtMocHelpers::SlotData<void()>(203, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionFind_action_triggered'
        QtMocHelpers::SlotData<void()>(204, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'releaseDockWidgetSizes'
        QtMocHelpers::SlotData<void()>(205, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInsert_table_triggered'
        QtMocHelpers::SlotData<void()>(206, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInsert_block_quote_triggered'
        QtMocHelpers::SlotData<void()>(207, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSearch_text_on_the_web_triggered'
        QtMocHelpers::SlotData<void()>(208, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'noteEditCursorPositionChanged'
        QtMocHelpers::SlotData<void()>(209, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDelete_line_triggered'
        QtMocHelpers::SlotData<void()>(210, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDelete_word_triggered'
        QtMocHelpers::SlotData<void()>(211, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionView_note_in_new_window_triggered'
        QtMocHelpers::SlotData<void()>(212, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSave_modified_notes_triggered'
        QtMocHelpers::SlotData<void()>(213, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'enableNoteExternallyRemovedCheck'
        QtMocHelpers::SlotData<void()>(214, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAscending_triggered'
        QtMocHelpers::SlotData<void()>(215, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDescending_triggered'
        QtMocHelpers::SlotData<void()>(216, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'restoreActiveNoteHistoryItem'
        QtMocHelpers::SlotData<bool()>(217, 2, QMC::AccessPrivate, QMetaType::Bool),
        // Slot 'on_actionShow_note_git_versions_triggered'
        QtMocHelpers::SlotData<void()>(218, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tagTreeWidget_itemCollapsed'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *)>(219, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 130, 131 },
        }}),
        // Slot 'on_tagTreeWidget_itemExpanded'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *)>(220, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 130, 131 },
        }}),
        // Slot 'on_actionScript_repository_triggered'
        QtMocHelpers::SlotData<void()>(221, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionScript_settings_triggered'
        QtMocHelpers::SlotData<void()>(222, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'filterNotesByTag'
        QtMocHelpers::SlotData<void()>(223, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInsert_attachment_triggered'
        QtMocHelpers::SlotData<void()>(224, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAllow_note_editing_triggered'
        QtMocHelpers::SlotData<void(bool)>(225, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 45 },
        }}),
        // Slot 'on_actionCheck_for_script_updates_triggered'
        QtMocHelpers::SlotData<void()>(226, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShow_local_trash_triggered'
        QtMocHelpers::SlotData<void()>(227, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionJump_to_note_text_edit_triggered'
        QtMocHelpers::SlotData<void()>(228, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_tagTreeWidget_itemDoubleClicked'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(229, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 130, 131 }, { QMetaType::Int, 132 },
        }}),
        // Slot 'on_noteTreeWidget_itemDoubleClicked'
        QtMocHelpers::SlotData<void(QTreeWidgetItem *, int)>(230, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 130, 131 }, { QMetaType::Int, 132 },
        }}),
        // Slot 'on_noteTreeWidget_itemSelectionChanged'
        QtMocHelpers::SlotData<void()>(231, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionManage_stored_attachments_triggered'
        QtMocHelpers::SlotData<void()>(232, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_noteOperationsButton_clicked'
        QtMocHelpers::SlotData<void()>(233, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionImport_notes_from_text_files_triggered'
        QtMocHelpers::SlotData<void()>(234, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionTelegram_triggered'
        QtMocHelpers::SlotData<void()>(235, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopy_headline_triggered'
        QtMocHelpers::SlotData<void()>(236, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_FormatTable_triggered'
        QtMocHelpers::SlotData<void()>(237, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_navigationLineEdit_textChanged'
        QtMocHelpers::SlotData<void(const QString &)>(238, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 35 },
        }}),
        // Slot 'initWebSocketServerService'
        QtMocHelpers::SlotData<void()>(239, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'initWebAppClientService'
        QtMocHelpers::SlotData<void()>(240, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionJump_to_note_list_panel_triggered'
        QtMocHelpers::SlotData<void()>(241, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionJump_to_tags_panel_triggered'
        QtMocHelpers::SlotData<void()>(242, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionJump_to_note_subfolder_panel_triggered'
        QtMocHelpers::SlotData<void()>(243, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionActivate_context_menu_triggered'
        QtMocHelpers::SlotData<void()>(244, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionImport_bookmarks_from_server_triggered'
        QtMocHelpers::SlotData<void()>(245, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionElementMatrix_triggered'
        QtMocHelpers::SlotData<void()>(246, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionToggle_fullscreen_triggered'
        QtMocHelpers::SlotData<void()>(247, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'disableFullScreenMode'
        QtMocHelpers::SlotData<void()>(248, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'moveSelectedNotesToFolder'
        QtMocHelpers::SlotData<void(const QString &)>(249, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 250 },
        }}),
        // Slot 'copySelectedNotesToFolder'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(251, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 250 }, { QMetaType::QString, 252 },
        }}),
        // Slot 'copySelectedNotesToFolder'
        QtMocHelpers::SlotData<void(const QString &)>(251, 2, QMC::AccessPrivate | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::QString, 250 },
        }}),
        // Slot 'on_actionTypewriter_mode_toggled'
        QtMocHelpers::SlotData<void(bool)>(253, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 35 },
        }}),
        // Slot 'on_actionCheck_spelling_toggled'
        QtMocHelpers::SlotData<void(bool)>(254, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 45 },
        }}),
        // Slot 'onLanguageChanged'
        QtMocHelpers::SlotData<void(QAction *)>(255, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 93, 94 },
        }}),
        // Slot 'onSpellBackendChanged'
        QtMocHelpers::SlotData<void(QAction *)>(256, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 93, 94 },
        }}),
        // Slot 'on_actionManage_dictionaries_triggered'
        QtMocHelpers::SlotData<void()>(257, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_noteTextEdit_modificationChanged'
        QtMocHelpers::SlotData<void(bool)>(258, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 35 },
        }}),
        // Slot 'on_encryptedNoteTextEdit_modificationChanged'
        QtMocHelpers::SlotData<void(bool)>(259, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 35 },
        }}),
        // Slot 'on_actionEditorWidthCustom_triggered'
        QtMocHelpers::SlotData<void()>(260, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionShow_Hide_application_triggered'
        QtMocHelpers::SlotData<void()>(261, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_noteEditTabWidget_currentChanged'
        QtMocHelpers::SlotData<void(int)>(262, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 113 },
        }}),
        // Slot 'on_noteEditTabWidget_tabCloseRequested'
        QtMocHelpers::SlotData<void(int)>(263, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 113 },
        }}),
        // Slot 'on_actionPrevious_note_tab_triggered'
        QtMocHelpers::SlotData<void()>(264, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNext_note_tab_triggered'
        QtMocHelpers::SlotData<void()>(265, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionClose_current_note_tab_triggered'
        QtMocHelpers::SlotData<void()>(266, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionNew_note_in_new_tab_triggered'
        QtMocHelpers::SlotData<void()>(267, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_noteEditTabWidget_tabBarDoubleClicked'
        QtMocHelpers::SlotData<void(int)>(268, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 113 },
        }}),
        // Slot 'on_actionToggle_note_stickiness_of_current_tab_triggered'
        QtMocHelpers::SlotData<void()>(269, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_noteEditTabWidget_tabBarClicked'
        QtMocHelpers::SlotData<void(int)>(270, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 113 },
        }}),
        // Slot 'showNoteEditTabWidgetContextMenu'
        QtMocHelpers::SlotData<void(const QPoint &)>(271, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QPoint, 272 },
        }}),
        // Slot 'on_actionJump_to_navigation_panel_triggered'
        QtMocHelpers::SlotData<void()>(273, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInsert_note_link_triggered'
        QtMocHelpers::SlotData<void()>(274, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionImport_notes_from_Joplin_triggered'
        QtMocHelpers::SlotData<void()>(275, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionToggle_Always_on_top_triggered'
        QtMocHelpers::SlotData<void()>(276, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_action_Load_Todo_Items_triggered'
        QtMocHelpers::SlotData<void()>(277, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionInsert_Nextcloud_Deck_card_triggered'
        QtMocHelpers::SlotData<void()>(278, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionCopy_path_to_note_to_clipboard_triggered'
        QtMocHelpers::SlotData<void()>(279, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMove_up_in_subfolder_list_triggered'
        QtMocHelpers::SlotData<void()>(280, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMove_down_in_subfolder_list_triggered'
        QtMocHelpers::SlotData<void()>(281, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMove_up_in_tag_list_triggered'
        QtMocHelpers::SlotData<void()>(282, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionMove_down_in_tag_list_triggered'
        QtMocHelpers::SlotData<void()>(283, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionEnable_AI_toggled'
        QtMocHelpers::SlotData<void(bool)>(284, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 35 },
        }}),
        // Slot 'on_navigationTabWidget_currentChanged'
        QtMocHelpers::SlotData<void(int)>(285, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 113 },
        }}),
        // Slot 'on_actionReattach_panels_triggered'
        QtMocHelpers::SlotData<void()>(286, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAIAssistant_triggered'
        QtMocHelpers::SlotData<void()>(287, 2, QMC::AccessPrivate, QMetaType::Void),
        // Method 'reloadTagTree'
        QtMocHelpers::MethodData<void()>(288, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'reloadNoteSubFolderTree'
        QtMocHelpers::MethodData<void()>(289, 2, QMC::AccessPublic, QMetaType::Void),
        // Method 'buildNotesIndexAndLoadNoteDirectoryList'
        QtMocHelpers::MethodData<void(bool, bool, bool)>(290, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 291 }, { QMetaType::Bool, 292 }, { QMetaType::Bool, 293 },
        }}),
        // Method 'buildNotesIndexAndLoadNoteDirectoryList'
        QtMocHelpers::MethodData<void(bool, bool)>(290, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Bool, 291 }, { QMetaType::Bool, 292 },
        }}),
        // Method 'buildNotesIndexAndLoadNoteDirectoryList'
        QtMocHelpers::MethodData<void(bool)>(290, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { QMetaType::Bool, 291 },
        }}),
        // Method 'buildNotesIndexAndLoadNoteDirectoryList'
        QtMocHelpers::MethodData<void()>(290, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Method 'createNewNoteSubFolder'
        QtMocHelpers::MethodData<bool(QString)>(294, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 295 },
        }}),
        // Method 'createNewNoteSubFolder'
        QtMocHelpers::MethodData<bool()>(294, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Bool),
        // Method 'insertHtmlAsMarkdownIntoCurrentNote'
        QtMocHelpers::MethodData<void(QString)>(296, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 297 },
        }}),
        // Method 'getWorkspaceUuid'
        QtMocHelpers::MethodData<QString(const QString &)>(298, 2, QMC::AccessPublic, QMetaType::QString, {{
            { QMetaType::QString, 299 },
        }}),
        // Method 'reloadCurrentNoteByNoteId'
        QtMocHelpers::MethodData<void(bool)>(300, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 301 },
        }}),
        // Method 'reloadCurrentNoteByNoteId'
        QtMocHelpers::MethodData<void()>(300, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void),
        // Method 'getWorkspaceUuidList'
        QtMocHelpers::MethodData<QStringList()>(302, 2, QMC::AccessPublic, QMetaType::QStringList),
        // Method 'setCurrentWorkspace'
        QtMocHelpers::MethodData<void(const QString &)>(303, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 304 },
        }}),
        // Method 'insertDataUrlAsFileIntoCurrentNote'
        QtMocHelpers::MethodData<bool(const QString &)>(305, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::QString, 306 },
        }}),
        // Method 'removeNoteTab'
        QtMocHelpers::MethodData<bool(int) const>(307, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 113 },
        }}),
        // Method 'getNoteTabNoteIdList'
        QtMocHelpers::MethodData<QList<int>() const>(308, 2, QMC::AccessPublic, 0x80000000 | 309),
        // Method 'jumpToTag'
        QtMocHelpers::MethodData<bool(int)>(310, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 140 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'currentNote'
        QtMocHelpers::PropertyData<Note>(311, 0x80000000 | 22, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 0),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentNoteChanged((*reinterpret_cast< std::add_pointer_t<Note&>>(_a[1]))); break;
        case 1: _t->log((*reinterpret_cast< std::add_pointer_t<LogWidget::LogType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->settingsChanged(); break;
        case 3: _t->setCurrentNoteFromNoteId((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->regenerateNotePreview(); break;
        case 5: _t->forceRegenerateNotePreview(); break;
        case 6: _t->storeUpdatedNotesToDisk(); break;
        case 7: { bool _r = _t->changeNoteFolder((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->changeNoteFolder((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->allowNoteEditing(); break;
        case 10: _t->disallowNoteEditing(); break;
        case 11: _t->openSelectedNotesInTab(); break;
        case 12: _t->openNoteInTab((*reinterpret_cast< std::add_pointer_t<Note>>(_a[1]))); break;
        case 13: _t->openCurrentNoteInTab(); break;
        case 14: _t->focusNoteTextEdit(); break;
        case 15: _t->onNavigationWidgetPositionClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->on_noteTextEdit_textChanged(); break;
        case 17: _t->on_action_Quit_triggered(); break;
        case 18: _t->quitApp(); break;
        case 19: _t->notesDirectoryWasModified((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->notesWereModified((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->on_actionSet_ownCloud_Folder_triggered(); break;
        case 22: _t->on_searchLineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->on_action_Find_note_triggered(); break;
        case 24: _t->on_searchLineEdit_returnPressed(); break;
        case 25: _t->on_action_Remove_note_triggered(); break;
        case 26: _t->on_actionAbout_QOwnNotes_triggered(); break;
        case 27: _t->on_action_New_note_triggered(); break;
        case 28: _t->onNotePreviewAnchorClicked((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 29: _t->on_actionCheck_for_updates_triggered(); break;
        case 30: _t->on_actionReport_problems_or_ideas_triggered(); break;
        case 31: _t->on_actionAlphabetical_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 32: _t->on_actionBy_date_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 33: _t->systemTrayIconClicked((*reinterpret_cast< std::add_pointer_t<QSystemTrayIcon::ActivationReason>>(_a[1]))); break;
        case 34: _t->on_action_Settings_triggered(); break;
        case 35: _t->on_actionShow_versions_triggered(); break;
        case 36: _t->on_actionShow_trash_triggered(); break;
        case 37: _t->on_actionSelect_all_notes_triggered(); break;
        case 38: _t->jumpToWelcomeNote(); break;
        case 39: _t->pasteMediaIntoNote(); break;
        case 40: _t->on_actionInsert_text_link_triggered(); break;
        case 41: _t->on_action_DuplicateText_triggered(); break;
        case 42: _t->on_action_Back_in_note_history_triggered(); break;
        case 43: _t->on_action_Forward_in_note_history_triggered(); break;
        case 44: _t->on_action_Shortcuts_triggered(); break;
        case 45: _t->on_action_Knowledge_base_triggered(); break;
        case 46: _t->on_actionInsert_current_time_triggered(); break;
        case 47: _t->on_actionShow_Todo_List_triggered(); break;
        case 48: _t->frequentPeriodicChecker(); break;
        case 49: _t->on_action_Export_note_as_PDF_markdown_triggered(); break;
        case 50: _t->on_action_Export_note_as_PDF_text_triggered(); break;
        case 51: _t->on_action_Print_note_markdown_triggered(); break;
        case 52: _t->on_action_Print_note_text_triggered(); break;
        case 53: _t->on_actionInsert_image_triggered(); break;
        case 54: _t->on_actionShow_changelog_triggered(); break;
        case 55: _t->openLocalUrl((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 56: _t->on_action_Find_text_in_note_triggered(); break;
        case 57: _t->on_action_Encrypt_note_triggered(); break;
        case 58: _t->on_actionDecrypt_note_triggered(); break;
        case 59: _t->on_actionEdit_encrypted_note_triggered(); break;
        case 60: _t->on_encryptedNoteTextEdit_textChanged(); break;
        case 61: _t->on_action_Open_note_in_external_editor_triggered(); break;
        case 62: _t->on_action_Export_note_as_markdown_triggered(); break;
        case 63: _t->showEvent((*reinterpret_cast< std::add_pointer_t<QShowEvent*>>(_a[1]))); break;
        case 64: _t->on_actionGet_invloved_triggered(); break;
        case 65: _t->gotoNoteBookmark((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 66: _t->gotoNoteBookmark(); break;
        case 67: _t->storeNoteBookmark((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 68: _t->storeNoteBookmark(); break;
        case 69: _t->on_actionInsert_code_block_triggered(); break;
        case 70: _t->on_actionNext_note_triggered(); break;
        case 71: _t->on_actionPrevious_Note_triggered(); break;
        case 72: _t->on_actionToggle_distraction_free_mode_triggered(); break;
        case 73: _t->toggleDistractionFreeMode(); break;
        case 74: _t->trackAction((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 75: _t->on_actionShow_toolbar_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 76: _t->toolbarVisibilityChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 77: _t->dfmEditorWidthActionTriggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 78: _t->dragEnterEvent((*reinterpret_cast< std::add_pointer_t<QDragEnterEvent*>>(_a[1]))); break;
        case 79: _t->dropEvent((*reinterpret_cast< std::add_pointer_t<QDropEvent*>>(_a[1]))); break;
        case 80: _t->on_actionPaste_image_triggered(); break;
        case 81: _t->on_actionShow_note_in_file_manager_triggered(); break;
        case 82: _t->on_actionFormat_text_bold_triggered(); break;
        case 83: _t->on_actionFormat_text_underline_triggered(); break;
        case 84: _t->on_actionFormat_text_italic_triggered(); break;
        case 85: _t->on_action_Increase_note_text_size_triggered(); break;
        case 86: _t->on_action_Decrease_note_text_size_triggered(); break;
        case 87: _t->on_action_Reset_note_text_size_triggered(); break;
        case 88: _t->on_noteFolderComboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 89: _t->on_tagLineEdit_returnPressed(); break;
        case 90: _t->on_tagLineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 91: _t->on_newNoteTagButton_clicked(); break;
        case 92: _t->on_newNoteTagLineEdit_returnPressed(); break;
        case 93: _t->on_newNoteTagLineEdit_editingFinished(); break;
        case 94: _t->removeNoteTagClicked(); break;
        case 95: _t->on_action_new_tag_triggered(); break;
        case 96: _t->on_action_Reload_note_folder_triggered(); break;
        case 97: _t->noteViewUpdateTimerSlot(); break;
        case 98: _t->autoReadOnlyModeTimerSlot(); break;
        case 99: _t->gitCommitCurrentNoteFolder(); break;
        case 100: _t->noteTextSliderValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 101: _t->noteTextSliderValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 102: _t->noteViewSliderValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 103: _t->noteViewSliderValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 104: _t->on_tagTreeWidget_itemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 105: _t->on_tagTreeWidget_currentItemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 106: _t->on_tagTreeWidget_itemSelectionChanged(); break;
        case 107: _t->on_tagTreeWidget_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 108: _t->moveSelectedTagsToTagId((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 109: _t->tagSelectedNotesToTagId((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 110: _t->on_actionReplace_in_current_note_triggered(); break;
        case 111: _t->onBacklinkWidgetNoteClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 112: _t->startNavigationParser(); break;
        case 113: _t->onNoteTextViewResize((*reinterpret_cast< std::add_pointer_t<QSize>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QSize>>(_a[2]))); break;
        case 114: _t->on_actionAutocomplete_triggered(); break;
        case 115: _t->restoreDistractionFreeMode(); break;
        case 116: _t->on_actionSelect_note_folder_triggered(); break;
        case 117: _t->on_actionReload_scripting_engine_triggered(); break;
        case 118: _t->on_actionShow_log_triggered(); break;
        case 119: _t->on_actionExport_preview_HTML_triggered(); break;
        case 120: _t->hideNoteFolderComboBoxIfNeeded(); break;
        case 121: _t->generateSystemTrayContextMenu(); break;
        case 122: _t->reloadTodoLists(); break;
        case 123: _t->showWindow(); break;
        case 124: _t->on_actionOpen_IRC_Channel_triggered(); break;
        case 125: _t->storeSavedSearch(); break;
        case 126: _t->on_actionInsert_headline_from_note_filename_triggered(); break;
        case 127: _t->on_actionUse_softwrap_in_note_editor_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 128: _t->on_actionShow_status_bar_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 129: _t->on_noteTreeWidget_currentItemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 130: _t->on_noteTreeWidget_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 131: _t->on_noteTreeWidget_itemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 132: _t->onCurrentSubFolderChanged(); break;
        case 133: _t->onMultipleSubfoldersSelected(); break;
        case 134: _t->clearTagFilteringColumn(); break;
        case 135: _t->on_noteSubFolderLineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 136: _t->on_noteSubFolderLineEdit_returnPressed(); break;
        case 137: _t->on_actionShare_note_triggered(); break;
        case 138: _t->on_actionToggle_text_case_triggered(); break;
        case 139: _t->on_actionMarkdown_cheatsheet_triggered(); break;
        case 140: _t->on_actionStrike_out_text_triggered(); break;
        case 141: _t->on_actionShow_menu_bar_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 142: _t->moveSelectedNotesToNoteSubFolderId((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 143: _t->copySelectedNotesToNoteSubFolderId((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 144: _t->on_actionSplit_note_at_cursor_position_triggered(); break;
        case 145: _t->onCustomActionInvoked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 146: _t->on_actionDonate_triggered(); break;
        case 147: _t->on_actionFind_notes_in_all_subfolders_triggered(); break;
        case 148: _t->on_actionImport_notes_from_Evernote_triggered(); break;
        case 149: _t->on_actionManage_stored_images_triggered(); break;
        case 150: _t->on_actionGitter_triggered(); break;
        case 151: _t->on_actionUnlock_panels_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 152: _t->on_actionStore_as_new_workspace_triggered(); break;
        case 153: _t->onWorkspaceComboBoxCurrentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 154: _t->onAiBackendComboBoxCurrentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 155: _t->onAiModelComboBoxCurrentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 156: _t->onAiModelGroupChanged((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 157: _t->on_actionRemove_current_workspace_triggered(); break;
        case 158: _t->on_actionRename_current_workspace_triggered(); break;
        case 159: _t->on_actionSwitch_to_previous_workspace_triggered(); break;
        case 160: _t->on_actionShow_all_panels_triggered(); break;
        case 161: _t->restoreCurrentWorkspace(); break;
        case 162: _t->togglePanelVisibility((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 163: _t->updatePanelMenu(); break;
        case 164: _t->toggleToolbarVisibility((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 165: _t->updateToolbarMenu(); break;
        case 166: _t->on_actionFind_action_triggered(); break;
        case 167: _t->releaseDockWidgetSizes(); break;
        case 168: _t->on_actionInsert_table_triggered(); break;
        case 169: _t->on_actionInsert_block_quote_triggered(); break;
        case 170: _t->on_actionSearch_text_on_the_web_triggered(); break;
        case 171: _t->noteEditCursorPositionChanged(); break;
        case 172: _t->on_actionDelete_line_triggered(); break;
        case 173: _t->on_actionDelete_word_triggered(); break;
        case 174: _t->on_actionView_note_in_new_window_triggered(); break;
        case 175: _t->on_actionSave_modified_notes_triggered(); break;
        case 176: _t->enableNoteExternallyRemovedCheck(); break;
        case 177: _t->on_actionAscending_triggered(); break;
        case 178: _t->on_actionDescending_triggered(); break;
        case 179: { bool _r = _t->restoreActiveNoteHistoryItem();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 180: _t->on_actionShow_note_git_versions_triggered(); break;
        case 181: _t->on_tagTreeWidget_itemCollapsed((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 182: _t->on_tagTreeWidget_itemExpanded((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 183: _t->on_actionScript_repository_triggered(); break;
        case 184: _t->on_actionScript_settings_triggered(); break;
        case 185: _t->filterNotesByTag(); break;
        case 186: _t->on_actionInsert_attachment_triggered(); break;
        case 187: _t->on_actionAllow_note_editing_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 188: _t->on_actionCheck_for_script_updates_triggered(); break;
        case 189: _t->on_actionShow_local_trash_triggered(); break;
        case 190: _t->on_actionJump_to_note_text_edit_triggered(); break;
        case 191: _t->on_tagTreeWidget_itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 192: _t->on_noteTreeWidget_itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 193: _t->on_noteTreeWidget_itemSelectionChanged(); break;
        case 194: _t->on_actionManage_stored_attachments_triggered(); break;
        case 195: _t->on_noteOperationsButton_clicked(); break;
        case 196: _t->on_actionImport_notes_from_text_files_triggered(); break;
        case 197: _t->on_actionTelegram_triggered(); break;
        case 198: _t->on_actionCopy_headline_triggered(); break;
        case 199: _t->on_action_FormatTable_triggered(); break;
        case 200: _t->on_navigationLineEdit_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 201: _t->initWebSocketServerService(); break;
        case 202: _t->initWebAppClientService(); break;
        case 203: _t->on_actionJump_to_note_list_panel_triggered(); break;
        case 204: _t->on_actionJump_to_tags_panel_triggered(); break;
        case 205: _t->on_actionJump_to_note_subfolder_panel_triggered(); break;
        case 206: _t->on_actionActivate_context_menu_triggered(); break;
        case 207: _t->on_actionImport_bookmarks_from_server_triggered(); break;
        case 208: _t->on_actionElementMatrix_triggered(); break;
        case 209: _t->on_actionToggle_fullscreen_triggered(); break;
        case 210: _t->disableFullScreenMode(); break;
        case 211: _t->moveSelectedNotesToFolder((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 212: _t->copySelectedNotesToFolder((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 213: _t->copySelectedNotesToFolder((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 214: _t->on_actionTypewriter_mode_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 215: _t->on_actionCheck_spelling_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 216: _t->onLanguageChanged((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 217: _t->onSpellBackendChanged((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 218: _t->on_actionManage_dictionaries_triggered(); break;
        case 219: _t->on_noteTextEdit_modificationChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 220: _t->on_encryptedNoteTextEdit_modificationChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 221: _t->on_actionEditorWidthCustom_triggered(); break;
        case 222: _t->on_actionShow_Hide_application_triggered(); break;
        case 223: _t->on_noteEditTabWidget_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 224: _t->on_noteEditTabWidget_tabCloseRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 225: _t->on_actionPrevious_note_tab_triggered(); break;
        case 226: _t->on_actionNext_note_tab_triggered(); break;
        case 227: _t->on_actionClose_current_note_tab_triggered(); break;
        case 228: _t->on_actionNew_note_in_new_tab_triggered(); break;
        case 229: _t->on_noteEditTabWidget_tabBarDoubleClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 230: _t->on_actionToggle_note_stickiness_of_current_tab_triggered(); break;
        case 231: _t->on_noteEditTabWidget_tabBarClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 232: _t->showNoteEditTabWidgetContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 233: _t->on_actionJump_to_navigation_panel_triggered(); break;
        case 234: _t->on_actionInsert_note_link_triggered(); break;
        case 235: _t->on_actionImport_notes_from_Joplin_triggered(); break;
        case 236: _t->on_actionToggle_Always_on_top_triggered(); break;
        case 237: _t->on_action_Load_Todo_Items_triggered(); break;
        case 238: _t->on_actionInsert_Nextcloud_Deck_card_triggered(); break;
        case 239: _t->on_actionCopy_path_to_note_to_clipboard_triggered(); break;
        case 240: _t->on_actionMove_up_in_subfolder_list_triggered(); break;
        case 241: _t->on_actionMove_down_in_subfolder_list_triggered(); break;
        case 242: _t->on_actionMove_up_in_tag_list_triggered(); break;
        case 243: _t->on_actionMove_down_in_tag_list_triggered(); break;
        case 244: _t->on_actionEnable_AI_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 245: _t->on_navigationTabWidget_currentChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 246: _t->on_actionReattach_panels_triggered(); break;
        case 247: _t->on_actionAIAssistant_triggered(); break;
        case 248: _t->reloadTagTree(); break;
        case 249: _t->reloadNoteSubFolderTree(); break;
        case 250: _t->buildNotesIndexAndLoadNoteDirectoryList((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 251: _t->buildNotesIndexAndLoadNoteDirectoryList((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 252: _t->buildNotesIndexAndLoadNoteDirectoryList((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 253: _t->buildNotesIndexAndLoadNoteDirectoryList(); break;
        case 254: { bool _r = _t->createNewNoteSubFolder((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 255: { bool _r = _t->createNewNoteSubFolder();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 256: _t->insertHtmlAsMarkdownIntoCurrentNote((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 257: { QString _r = _t->getWorkspaceUuid((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 258: _t->reloadCurrentNoteByNoteId((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 259: _t->reloadCurrentNoteByNoteId(); break;
        case 260: { QStringList _r = _t->getWorkspaceUuidList();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 261: _t->setCurrentWorkspace((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 262: { bool _r = _t->insertDataUrlAsFileIntoCurrentNote((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 263: { bool _r = _t->removeNoteTab((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 264: { QList<int> _r = _t->getNoteTabNoteIdList();
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 265: { bool _r = _t->jumpToTag((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 74:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 77:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 156:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 216:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 217:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(Note & )>(_a, &MainWindow::currentNoteChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)(LogWidget::LogType , QString )>(_a, &MainWindow::log, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (MainWindow::*)()>(_a, &MainWindow::settingsChanged, 2))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<Note*>(_v) = _t->currentNote; break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentNote(*reinterpret_cast<Note*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 266)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 266;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 266)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 266;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::currentNoteChanged(Note & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void MainWindow::log(LogWidget::LogType _t1, QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1, _t2);
}

// SIGNAL 2
void MainWindow::settingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
