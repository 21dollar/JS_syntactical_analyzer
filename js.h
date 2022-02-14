#include "y.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <regex.h>
#include <malloc.h>
#include <string.h>

int  yyparse(void);
int  yylex(void);  
int  yywrap();
int  yyget_lineno();
void yyset_in (FILE *  _in_str );
void yyerror(char *s);
