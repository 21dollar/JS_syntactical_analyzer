%{
    #include "js.h"
    int num_lex = 0;
%}

bdigit       [0-1]
odigit       [0-7]
digit        [0-9]
hdigit       [0-9a-fA-F]

bnum         0[bB]{bdigit}+
onum         0[oO]?{odigit}+
num          {digit}+
hnum         0[xX]{hdigit}+

intnum       {bnum}|{onum}|{num}|{hnum}

fnum         {digit}+
pointnum     {fnum}?\.{fnum}|{fnum}\.
floatnum     {pointnum}|({fnum}|{pointnum})[eE][+-]?{fnum}

intsffx      [uU][lL]{0,2}|[lL]([lL]?[uU]?|[uU][lL])
floatsffx    [lLfF]

all_num      {intnum}|{floatnum}

letter       [a-zA-Z_$]
word         {letter}({letter}|{digit})*

op_line_com  [/][/]
cl_line_com  ([^\\])(\r?\n)
line_com_ins (\\\r?\n)|(.)

op_mlt_com   [/][*]
cl_mlt_com   [*][/]
mlt_com_ins  ([\r\n]|([^*][/])|[^/])

%%

{op_line_com}{line_com_ins}*?{cl_line_com}						{  yylineno++;  }
{op_mlt_com}{mlt_com_ins}*?{cl_mlt_com}							{ /*исправлен мультикоммент*/ }
{all_num}                                                       { return l_num        ; }

"await"                                                         { return l_await      ; }
"async"                                                         { return l_async      ; }
"break"                                                         { return l_break      ; }
"case"                                                          { return l_case       ; }
"catch"                                                         { return l_catch      ; }
"class"                                                         { return l_class      ; }
"const"                                                         { return l_const      ; }
"constructor"                                                   { return l_constructor; }
"continue"                                                      { return l_continue   ; }
"debugger"                                                      { return l_debugger   ; }
"default"                                                       { return l_default    ; }
"delete"                                                        { return l_delete     ; }
"do"                                                            { return l_do         ; }
"else"                                                          { return l_else       ; }
"enum"                                                          { return l_enum       ; }
"export"                                                        { return l_export     ; }
"extends"                                                       { return l_extends    ; }
"false"                                                         { return l_false      ; }
"finally"                                                       { return l_finally    ; }
"for"                                                           { return l_for        ; }
"from"                                                          { return l_from       ; }
"function"                                                      { return l_function   ; }
"get"                                                           { return l_get        ; }
"if"                                                            { return l_if         ; }
"import"                                                        { return l_import     ; }
"in"                                                            { return l_in         ; }
"instanceof"                                                    { return l_instanceof ; }
"let"                                                           { return l_let        ; }
"new"                                                           { return l_new        ; }
"null"                                                          { return l_null       ; }
"return"                                                        { return l_return     ; }
"set"                                                           { return l_set        ; }
"static"                                                        { return l_static     ; }
"super"                                                         { return l_super      ; }
"switch"                                                        { return l_switch     ; }
"this"                                                          { return l_this       ; }
"throw"                                                         { return l_throw      ; }
"true"                                                          { return l_true       ; }
"try"                                                           { return l_try        ; }
"typeof"                                                        { return l_typeof     ; }
"var"                                                           { return l_var        ; }
"void"                                                          { return l_void       ; }
"while"                                                         { return l_while      ; }
"with"                                                          { return l_with       ; }
"yield"                                                         { return l_yield      ; }

{word}                                                          { return l_name       ; }

"~"                                                             { return '~'	      ; }
"||"                                                            { return o_or         ; }
"|="                                                            { return o_oreq       ; }
"|"                                                             { return '|'          ; }
"^="                                                            { return o_xoreq      ; }
"^"                                                             { return '^'          ; }
"]"                                                             { return ']'          ; }
"["                                                             { return '['          ; }
"?"                                                             { return '?'          ; }
">>>="                                                          { return o_rshsheq    ; }
">>>"                                                           { return o_rshsh      ; }
">>="                                                           { return o_rsheq      ; }
">>"                                                            { return o_rsh        ; }
">="                                                            { return o_moreeq     ; }
">"                                                             { return '>'          ; }
"==="                                                           { return o_eqeqeq     ; }
"=="                                                            { return o_eqeq       ; }
"=>"                                                            { return o_arrow      ; }
"="                                                             { return '='          ; }
"<="                                                            { return o_lesseq     ; }
"<<="                                                           { return o_lsheq      ; }
"<<"                                                            { return o_lsh        ; }
"<"                                                             { return '<'     	  ; }
"::"                                                            { return o_dblcolon   ; }
":"                                                             { return ':'          ; }
";"                                                             { return ';'          ; }
"/="                                                            { return o_diveq      ; }
"/"                                                             { return '/'          ; }
"."                                                             { return '.'          ; }
"-="                                                            { return o_subeq      ; }
"--"                                                            { return o_dec        ; }
"-"                                                             { return '-'          ; }
","                                                             { return ','          ; }
"+="                                                            { return o_addeq      ; }
"++"                                                            { return o_inc        ; }
"+"                                                             { return '+'          ; }
"*="                                                            { return o_mlteq      ; }
"*"                                                             { return '*'          ; }
")"                                                             { return ')'          ; }
"("                                                             { return '('          ; }
"&="                                                            { return o_andeq      ; }
"&"                                                             { return '&'          ; }
"&&"                                                            { return o_and        ; }
"%="                                                            { return o_modeq      ; }
"%"                                                             { return '%'          ; }
"!=="                                                           { return o_noteqeq    ; }
"!="                                                            { return o_noteq      ; }
"!"                                                             { return '!'          ; }
"}"                                                             { return '}'          ; }
"{"                                                             { return '{'          ; }
"\\" 															{ return '\\'         ; }
["]((\\(.|\n|\r\n))|[^\r\n\\\"])*?["]                           { return l_str        ; }
[']((\\(.|\n|\r\n))|[^\r\n\\\'])*?[']                           { return l_str        ; }
[`]([^`]|\n)*?[`]                                                  { return l_str        ; }
[ \r\t]                                                         {                       }
[\n]                                                            { yylineno++;           }
.                                                               { yyerror("unexpected char"); return l_any_char; }

%%