/****************************************************************************
** Meta object code from reading C++ file 'markdownhighlighter.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libraries/qmarkdowntextedit/markdownhighlighter.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'markdownhighlighter.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN19MarkdownHighlighterE_t {};
} // unnamed namespace

template <> constexpr inline auto MarkdownHighlighter::qt_create_metaobjectdata<qt_meta_tag_ZN19MarkdownHighlighterE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MarkdownHighlighter",
        "highlightingFinished",
        "",
        "timerTick",
        "HighlighterState",
        "NoState",
        "Link",
        "Image",
        "CodeBlock",
        "CodeBlockComment",
        "Italic",
        "Bold",
        "List",
        "Comment",
        "H1",
        "H2",
        "H3",
        "H4",
        "H5",
        "H6",
        "BlockQuote",
        "HorizontalRuler",
        "Table",
        "InlineCodeBlock",
        "MaskedSyntax",
        "CurrentLineBackgroundColor",
        "BrokenLink",
        "FrontmatterBlock",
        "TrailingSpace",
        "CheckBoxUnChecked",
        "CheckBoxChecked",
        "StUnderline",
        "CodeKeyWord",
        "CodeString",
        "CodeComment",
        "CodeType",
        "CodeOther",
        "CodeNumLiteral",
        "CodeBuiltIn",
        "CodeBlockIndented",
        "CodeBlockTildeEnd",
        "CodeBlockTilde",
        "CodeBlockTildeComment",
        "CodeBlockEnd",
        "HeadlineEnd",
        "FrontmatterBlockEnd",
        "CodeCpp",
        "CodeCppComment",
        "CodeJs",
        "CodeJsComment",
        "CodeC",
        "CodeCComment",
        "CodeBash",
        "CodePHP",
        "CodePHPComment",
        "CodeQML",
        "CodeQMLComment",
        "CodePython",
        "CodeRust",
        "CodeRustComment",
        "CodeJava",
        "CodeJavaComment",
        "CodeCSharp",
        "CodeCSharpComment",
        "CodeGo",
        "CodeGoComment",
        "CodeV",
        "CodeVComment",
        "CodeSQL",
        "CodeSQLComment",
        "CodeJSON",
        "CodeXML",
        "CodeCSS",
        "CodeCSSComment",
        "CodeTypeScript",
        "CodeTypeScriptComment",
        "CodeYAML",
        "CodeINI",
        "CodeTaggerScript",
        "CodeVex",
        "CodeVexComment",
        "CodeCMake",
        "CodeMake",
        "CodeNix",
        "CodeForth",
        "CodeForthComment",
        "CodeSystemVerilog",
        "CodeSystemVerilogComment",
        "CodeGDScript",
        "CodeTOML",
        "CodeTOMLString"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'highlightingFinished'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'timerTick'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessProtected, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'HighlighterState'
        QtMocHelpers::EnumData<HighlighterState>(4, 4, QMC::EnumFlags{}).add({
            {    5, HighlighterState::NoState },
            {    6, HighlighterState::Link },
            {    7, HighlighterState::Image },
            {    8, HighlighterState::CodeBlock },
            {    9, HighlighterState::CodeBlockComment },
            {   10, HighlighterState::Italic },
            {   11, HighlighterState::Bold },
            {   12, HighlighterState::List },
            {   13, HighlighterState::Comment },
            {   14, HighlighterState::H1 },
            {   15, HighlighterState::H2 },
            {   16, HighlighterState::H3 },
            {   17, HighlighterState::H4 },
            {   18, HighlighterState::H5 },
            {   19, HighlighterState::H6 },
            {   20, HighlighterState::BlockQuote },
            {   21, HighlighterState::HorizontalRuler },
            {   22, HighlighterState::Table },
            {   23, HighlighterState::InlineCodeBlock },
            {   24, HighlighterState::MaskedSyntax },
            {   25, HighlighterState::CurrentLineBackgroundColor },
            {   26, HighlighterState::BrokenLink },
            {   27, HighlighterState::FrontmatterBlock },
            {   28, HighlighterState::TrailingSpace },
            {   29, HighlighterState::CheckBoxUnChecked },
            {   30, HighlighterState::CheckBoxChecked },
            {   31, HighlighterState::StUnderline },
            {   32, HighlighterState::CodeKeyWord },
            {   33, HighlighterState::CodeString },
            {   34, HighlighterState::CodeComment },
            {   35, HighlighterState::CodeType },
            {   36, HighlighterState::CodeOther },
            {   37, HighlighterState::CodeNumLiteral },
            {   38, HighlighterState::CodeBuiltIn },
            {   39, HighlighterState::CodeBlockIndented },
            {   40, HighlighterState::CodeBlockTildeEnd },
            {   41, HighlighterState::CodeBlockTilde },
            {   42, HighlighterState::CodeBlockTildeComment },
            {   43, HighlighterState::CodeBlockEnd },
            {   44, HighlighterState::HeadlineEnd },
            {   45, HighlighterState::FrontmatterBlockEnd },
            {   46, HighlighterState::CodeCpp },
            {   47, HighlighterState::CodeCppComment },
            {   48, HighlighterState::CodeJs },
            {   49, HighlighterState::CodeJsComment },
            {   50, HighlighterState::CodeC },
            {   51, HighlighterState::CodeCComment },
            {   52, HighlighterState::CodeBash },
            {   53, HighlighterState::CodePHP },
            {   54, HighlighterState::CodePHPComment },
            {   55, HighlighterState::CodeQML },
            {   56, HighlighterState::CodeQMLComment },
            {   57, HighlighterState::CodePython },
            {   58, HighlighterState::CodeRust },
            {   59, HighlighterState::CodeRustComment },
            {   60, HighlighterState::CodeJava },
            {   61, HighlighterState::CodeJavaComment },
            {   62, HighlighterState::CodeCSharp },
            {   63, HighlighterState::CodeCSharpComment },
            {   64, HighlighterState::CodeGo },
            {   65, HighlighterState::CodeGoComment },
            {   66, HighlighterState::CodeV },
            {   67, HighlighterState::CodeVComment },
            {   68, HighlighterState::CodeSQL },
            {   69, HighlighterState::CodeSQLComment },
            {   70, HighlighterState::CodeJSON },
            {   71, HighlighterState::CodeXML },
            {   72, HighlighterState::CodeCSS },
            {   73, HighlighterState::CodeCSSComment },
            {   74, HighlighterState::CodeTypeScript },
            {   75, HighlighterState::CodeTypeScriptComment },
            {   76, HighlighterState::CodeYAML },
            {   77, HighlighterState::CodeINI },
            {   78, HighlighterState::CodeTaggerScript },
            {   79, HighlighterState::CodeVex },
            {   80, HighlighterState::CodeVexComment },
            {   81, HighlighterState::CodeCMake },
            {   82, HighlighterState::CodeMake },
            {   83, HighlighterState::CodeNix },
            {   84, HighlighterState::CodeForth },
            {   85, HighlighterState::CodeForthComment },
            {   86, HighlighterState::CodeSystemVerilog },
            {   87, HighlighterState::CodeSystemVerilogComment },
            {   88, HighlighterState::CodeGDScript },
            {   89, HighlighterState::CodeTOML },
            {   90, HighlighterState::CodeTOMLString },
        }),
    };
    return QtMocHelpers::metaObjectData<MarkdownHighlighter, qt_meta_tag_ZN19MarkdownHighlighterE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MarkdownHighlighter::staticMetaObject = { {
    QMetaObject::SuperData::link<QSyntaxHighlighter::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19MarkdownHighlighterE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19MarkdownHighlighterE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19MarkdownHighlighterE_t>.metaTypes,
    nullptr
} };

void MarkdownHighlighter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MarkdownHighlighter *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->highlightingFinished(); break;
        case 1: _t->timerTick(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (MarkdownHighlighter::*)()>(_a, &MarkdownHighlighter::highlightingFinished, 0))
            return;
    }
}

const QMetaObject *MarkdownHighlighter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MarkdownHighlighter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19MarkdownHighlighterE_t>.strings))
        return static_cast<void*>(this);
    return QSyntaxHighlighter::qt_metacast(_clname);
}

int MarkdownHighlighter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSyntaxHighlighter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MarkdownHighlighter::highlightingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
