%{

	#define YYDEBUG 1

	#include "js.h"

	void LOG(const char *str)
	{
		printf("%s\n", str);
	}
    //int yydebug = 1;
%}

%start START

%token l_await        l_break        l_case         l_catch        
%token l_class        l_const        l_continue     l_debugger     
%token l_default      l_delete       l_do           l_else         
%token l_enum         l_export       l_extends      l_false        
%token l_finally      l_for          l_function     l_if           
%token l_import       l_in           l_instanceof   l_let          
%token l_name         l_new          l_null         l_num          
%token l_return       l_str          l_super        l_switch       
%token l_symb         l_this         l_throw        l_true         
%token l_try          l_typeof       l_var          l_void         
%token l_while        l_with         l_yield        l_constructor  
%token l_get          l_set          l_static       l_any_char    
%token l_from         l_async

%token o_addeq        o_and          o_andeq        o_arrow        
%token o_dblcolon     o_dec          o_diveq        o_eqeq         
%token o_inc          o_lesseq       o_lsh          o_lsheq        
%token o_mlteq        o_modeq        o_moreeq       o_noteq        
%token o_or           o_oreq         o_rsh          o_rsheq        
%token o_subeq        o_xoreq        o_noteqeq      o_eqeqeq 
%token o_rshsh        o_rshsheq      

%token '!' '%' '&' '(' ')' '*' '+' ',' '-' '.' '/' ':' ';' 
%token '<' '=' '>' '?' '[' '\\' ']' '^' '{' '|' '}' '~'

%left l_else
%right '=' o_addeq o_subeq o_mlteq o_diveq o_modeq o_lsheq o_rsheq o_andeq o_xoreq o_oreq o_rshsheq
%right o_arrow
%right '?' ':'
%left o_or
%left o_and
%left '|'
%left '^'
%left '&'
%left o_eqeq o_noteq o_eqeqeq o_noteqeq
%left '<' '>' o_lesseq o_moreeq l_instanceof l_in
%left o_lsh o_rsh o_rshsh
%left '+' '-'
%left '*' '/' '%'
%left '.'
%left o_dblcolon
%left o_inc o_dec

%%

START 			: CODE
				;

CODE    		: ANYTHING
				| CODE ANYTHING
				;

INTERNAL_CODE 	: %empty
				| CODE
				;

CODE_MARK_LIST  : CODE
				| CODE_MARK_LIST l_name ':' CODE
				;

ANYTHING        : VAR_DEF ';'
				| VAR_DEF
				| '{' CODE_MARK_LIST '}'
				| EXPR_LIST ';'
				| EXPR_LIST
				| FUNC_DEF
				| CLASS_DEF
				| SWITCH_DEF
				| WHILE_DEF
				| FOR_DEF
				| IF_DEF
				| TRY_CATCH_DEF
				| l_continue ';'
				| l_continue
				| l_break ';'
				| l_break
				| l_yield ';'
				| l_yield
				| l_throw ';'
				| l_throw
				| l_return ';'
				| l_return
				| l_break EXPR_LIST ';'
				| l_break EXPR_LIST
				| l_yield EXPR_LIST ';'
				| l_yield EXPR_LIST
				| l_throw EXPR_LIST ';'
				| l_throw EXPR_LIST
				| l_return EXPR_LIST ';'
				| l_return EXPR_LIST
				| DO_WHILE_DEF ';'
				| DO_WHILE_DEF 
				| IMPORT_DEF
				| EXPORT_DEF
				| ';'
				;

EXPORT_DEF		: l_export l_name
				| l_export l_name l_from l_str
				| l_export '{' NAME_LIST '}'
				| l_export '{' NAME_LIST '}' l_from l_str
				;

IMPORT_DEF 		: l_import l_name
				| l_import l_name l_from l_str
				| l_import '{' NAME_LIST '}'
				| l_import '{' NAME_LIST '}' l_from l_str
				;

NAME_LIST 		: l_name
				| NAME_LIST ',' l_name
				;

TRY_CATCH_DEF   : l_try '{' INTERNAL_CODE '}' l_catch '(' EXPR ')' '{' INTERNAL_CODE '}'
				;

IF_DEF 			: l_if '(' EXPR_LIST ')' ANYTHING
				| l_if '(' EXPR_LIST ')' ANYTHING l_else ANYTHING
				;

EMPTY_OR_EXPR 	: %empty
				| EXPR_LIST
				;

FOR_DEF 		: l_for '('           ';' EMPTY_OR_EXPR ';' EMPTY_OR_EXPR ')' ANYTHING
				| l_for '(' VAR_DEF   ';' EMPTY_OR_EXPR ';' EMPTY_OR_EXPR ')' ANYTHING
				| l_for '(' EXPR_LIST ';' EMPTY_OR_EXPR ';' EMPTY_OR_EXPR ')' ANYTHING
				| l_for '(' FUNC_DEF  ';' EMPTY_OR_EXPR ';' EMPTY_OR_EXPR ')' ANYTHING
				| l_for '(' CLASS_DEF ';' EMPTY_OR_EXPR ';' EMPTY_OR_EXPR ')' ANYTHING
				| l_for '(' INEXPR ')' ANYTHING
				| l_for '(' l_var l_name l_in EXPR ')' ANYTHING
				| l_for '(' l_let l_name l_in EXPR ')' ANYTHING
				;

DO_WHILE_DEF 	: l_do '{' CODE '}' l_while '(' EXPR_LIST ')'
				;
WHILE_DEF 		: l_while '(' EXPR_LIST ')' ANYTHING
				;

SWITCH_DEF 		: l_switch '(' EXPR_LIST ')' '{' SWITCH_INTERNAL '}'
				;

SWITCH_INTERNAL : SWITCH_UNIT 
				| SWITCH_INTERNAL SWITCH_UNIT
				;

SWITCH_UNIT     : l_case EXPR ':' INTERNAL_CODE
				| l_default ':' INTERNAL_CODE
				;

CLASS_DEF 		: l_class l_name '{'                '}'
				| l_class l_name '{' CLASS_INTERNAL '}'
				| l_class l_name l_extends VAR_TERM '{'                '}'
				| l_class l_name l_extends VAR_TERM '{' CLASS_INTERNAL '}'
				;

CLASS_INTERNAL  : CLASS_UNIT
				| CLASS_INTERNAL ',' CLASS_UNIT
				| CLASS_INTERNAL CLASS_UNIT
				;

CLASS_UNIT 		: CLASS_FUNC
				| CLASS_CONSTRUCT
				| l_static CLASS_FUNC
				| l_static CLASS_CONSTRUCT
				| CLASS_GSET_UNIT
				| ';'
				;

CLASS_GSET_UNIT : l_get CLASS_FUNC
				| l_set CLASS_FUNC
				| l_static l_get CLASS_FUNC
				| l_static l_set CLASS_FUNC
				;

CLASS_FUNC 		: KEY_NAME '('          ')' '{' INTERNAL_CODE '}'
				| KEY_NAME '(' EXPR_LIST ')' '{' INTERNAL_CODE '}'
				;
CLASS_CONSTRUCT : l_constructor '('          ')' '{' INTERNAL_CODE '}'
				| l_constructor '(' EXPR_LIST ')' '{' INTERNAL_CODE '}'
				;

FUNC_DEF 		: l_function l_name '('          ')' '{' INTERNAL_CODE '}'
				| l_function l_name '(' EXPR_LIST ')' '{' INTERNAL_CODE '}'
				| l_async l_function l_name '('          ')' '{' INTERNAL_CODE '}'
				| l_async l_function l_name '(' EXPR_LIST ')' '{' INTERNAL_CODE '}'
				| '(' FUNC_OBJ ')' '(' EXPR_LIST ')'
				| '(' FUNC_OBJ ')' '('           ')'
				| FUNC_OBJ '(' EXPR_LIST ')'
				| FUNC_OBJ '('           ')'
				;

VAR_DEF 		: l_var VAR_DEF_LIST
				| l_let VAR_DEF_LIST
				| l_const VAR_DEF_LIST
				;

VAR_DEF_LIST	: l_name 
				| l_name '=' EXPR
				| '[' NAME_LIST ']' 
				| '[' NAME_LIST ']' '=' EXPR
				| '{' NAME_LIST '}' 
				| '{' NAME_LIST '}' '=' EXPR
				| VAR_DEF_LIST ',' l_name
				| VAR_DEF_LIST ',' l_name '=' EXPR
				;

OBJECT 			: '{' '}'
				| '{' OBJECT_FLD_LIST '}'
				| '{' CLASS_INTERNAL '}'
				;

OBJECT_FLD_LIST : OBJECT_FLD
				| OBJECT_FLD ','
				| OBJECT_FLD ',' OBJECT_FLD_LIST
				;

OBJECT_FLD 	    : KEY_NAME
				| KEY_NAME ':' EXPR
				| KEY_NAME '('          ')' '{' INTERNAL_CODE '}'
				| KEY_NAME '(' EXPR_LIST ')' '{' INTERNAL_CODE '}'
				| CLASS_GSET_UNIT
				;

KEY_NAME 		: l_name
				| l_num
				| l_str
				| '[' EXPR ']'
				;

ARRAY       	: '[' ']'
				| '[' ARRAY_EXPR_LIST ']'
				;

ARRAY_EXPR_LIST	: EXPR 
				| ARRAY_EXPR_LIST ',' EXPR
				| ARRAY_EXPR_LIST ','
				;

EXPR_LIST   	: EXPR
				| EXPR_LIST ',' EXPR
				;

EXPR 			: NUM_EXPR
				| FUNC_EXPR
				;

FUNC_EXPR	 	: FUNC_OBJ
				| l_async FUNC_OBJ
				| VAR_TERM '=' FUNC_EXPR
				;

FUNC_OBJ 		: l_function '('          ')' '{' INTERNAL_CODE '}'
				| l_function '(' EXPR_LIST ')' '{' INTERNAL_CODE '}'
				| '('          ')' o_arrow EXPR
				| '(' EXPR_LIST ')' o_arrow EXPR
				| '('          ')' o_arrow '{' INTERNAL_CODE '}'
				| '(' EXPR_LIST ')' o_arrow '{' INTERNAL_CODE '}'
				| '(' FUNC_EXPR ')'
				| VAR_TERM o_arrow EXPR
				| VAR_TERM o_arrow '{' INTERNAL_CODE '}'
				| FUNC_DEF
				;

INEXPR 			: NUM_EXPR l_in      NUM_EXPR
				;

NUM_EXPR        : TERM
				| NUM_EXPR '?' NUM_EXPR ':' NUM_EXPR
				| NUM_EXPR o_or      NUM_EXPR
				| NUM_EXPR o_rsh     NUM_EXPR
				| NUM_EXPR '|'       NUM_EXPR
				| NUM_EXPR '^'       NUM_EXPR
				| NUM_EXPR '/'       NUM_EXPR
				| NUM_EXPR '%'       NUM_EXPR
				| NUM_EXPR o_and     NUM_EXPR
				| NUM_EXPR o_lsh     NUM_EXPR
				| NUM_EXPR '+'       NUM_EXPR
				| NUM_EXPR '*'       NUM_EXPR
				| NUM_EXPR '&'       NUM_EXPR
				| NUM_EXPR '-'       NUM_EXPR
				| NUM_EXPR o_rshsh   NUM_EXPR
				| NUM_EXPR '<'       NUM_EXPR
				| NUM_EXPR '>'       NUM_EXPR
				| NUM_EXPR o_moreeq  NUM_EXPR
				| NUM_EXPR o_lesseq  NUM_EXPR
				| NUM_EXPR o_eqeq    NUM_EXPR
				| NUM_EXPR o_noteq   NUM_EXPR
				| NUM_EXPR o_eqeqeq  NUM_EXPR
				| NUM_EXPR o_noteqeq NUM_EXPR
				| NUM_EXPR l_instanceof NUM_EXPR
				| INEXPR

				| VAR_TERM '='       NUM_EXPR
				| VAR_TERM o_lsheq   NUM_EXPR
				| VAR_TERM o_oreq    NUM_EXPR
				| VAR_TERM o_xoreq   NUM_EXPR
				| VAR_TERM o_rsheq   NUM_EXPR
				| VAR_TERM o_diveq   NUM_EXPR
				| VAR_TERM o_subeq   NUM_EXPR
				| VAR_TERM o_addeq   NUM_EXPR
				| VAR_TERM o_mlteq   NUM_EXPR
				| VAR_TERM o_andeq   NUM_EXPR
				| VAR_TERM o_modeq   NUM_EXPR
				| VAR_TERM o_rshsheq NUM_EXPR
				;

TERM 			: l_num
				| l_str
				| REGSTR
				| l_null
				| l_true
				| l_false
				| VAR_TERM
				| o_inc VAR_TERM
				| o_dec VAR_TERM
				| VAR_TERM o_inc
				| VAR_TERM o_dec
				| UNOOP TERM
				| l_void TERM
				| l_typeof TERM
				| l_new VAR_TERM
				| l_delete VAR_TERM
				| l_await VAR_TERM
				| FUNC_OBJ
				;

VAR_TERM 		: l_name
				| l_this
				| l_super
				| l_str '.' l_name
				| ARRAY
				| OBJECT
				| VAR_TERM '.' l_name
				| VAR_TERM '.' l_get
				| VAR_TERM '.' l_set
				| VAR_TERM '.' l_constructor
				| VAR_TERM '.' l_from
				| VAR_TERM '.' l_new
				| VAR_TERM '.' l_delete
				| VAR_TERM '.' l_async
				| VAR_TERM '('           ')'
				| VAR_TERM '(' EXPR_LIST ')'
				| VAR_TERM '[' NUM_EXPR  ']'
				| '(' NUM_EXPR  ')'
			    | '(' EXPR_LIST ')'     {/*danger*/}
			    | l_from
				;

REGSTR 		    : '/' REGSTRSYMB_INS '/'
				| '/' REGSTRSYMB_INS '/' l_name  { /*l_name = 'yuisgm'*/ }
				;
REGSTRSYMB_INS  : REGSTRSYMB
				| REGSTRSYMB_INS REGSTRSYMB
				;
REGSTRSYMB 		: SOME_LEXEMS      
				| '\\' SOME_LEXEMS
				| '\\' '['
				| '\\' '/'
				| '\\' '\\'
				| '[' REG_SET ']'
				;
REG_SET         : REG_SET_SYMB
				| REG_SET REG_SET_SYMB
				;
REG_SET_SYMB 	: SOME_LEXEMS
				| '\\' SOME_LEXEMS
				| '\\' '['
				| '\\' '/'
				| '\\' '\\'
				| '['
				| '/'
				;
SOME_LEXEMS 	: l_num        
				| l_await      
				| l_break      
				| l_case       
				| l_catch      
				| l_class      
				| l_const      
				| l_constructor
				| l_continue   
				| l_debugger   
				| l_default    
				| l_delete     
				| l_do         
				| l_else       
				| l_enum       
				| l_export     
				| l_extends    
				| l_false      
				| l_finally    
				| l_for        
				| l_function   
				| l_get        
				| l_if         
				| l_import     
				| l_in         
				| l_instanceof 
				| l_let        
				| l_new        
				| l_null       
				| l_return     
				| l_set        
				| l_static     
				| l_super      
				| l_switch     
				| l_this       
				| l_throw      
				| l_true       
				| l_try        
				| l_typeof     
				| l_var        
				| l_void       
				| l_while      
				| l_with       
				| l_yield      
				| l_name
				| '~'		
				| o_or       
				| o_oreq     
				| '|'    	
				| o_xoreq    
				| '^'              
				| '?'        
				| o_rshsheq  
				| o_rshsh    
				| o_rsheq    
				| o_rsh      
				| o_moreeq   
				| '>'        
				| o_eqeqeq   
				| o_eqeq     
				| o_arrow    
				| '='        
				| o_lesseq   
				| o_lsheq    
				| o_lsh      
				| '<'     	
				| o_dblcolon 
				| ':'        
				| ';'        
				| '.'        
				| o_subeq    
				| o_dec      
				| '-'        
				| ','        
				| o_addeq    
				| o_inc      
				| '+'        
				| o_mlteq    
				| '*'        
				| ')'        
				| '('        
				| o_andeq    
				| '&'        
				| o_and      
				| o_modeq    
				| '%'        
				| o_noteqeq  
				| o_noteq    
				| '!'        
				| '}'        
				| '{'        
				| ']'
				| l_str
				| l_any_char
				;

UNOOP 			: '-' 
				| '+' 
				| '!' 
				| '~' 
				;

%%