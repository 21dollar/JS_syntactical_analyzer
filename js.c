#include "js.h"

extern int yydebug;

typedef struct string
{
  char *data;
  int len;
  int max_len;
}string;

int correct_code(string *str);
int read_file(const char *fname, string *str);


int
main(int argc, const char *argv[])
{
  //yydebug = 1;
  string str;
  char fname[260] = "";
  if (argc > 1)
  {
    if (read_file(argv[1], &str)) return 0;
    correct_code(&str);

    strcpy(fname, argv[1]);
    strcat(fname, ".correct");

    FILE *f = fopen(fname, "w");
    fwrite(str.data, sizeof(char), str.len, f);
    fclose(f);

    f = fopen(fname, "r");
    yyset_in (f);
  }

  int Res = yyparse();

  if (Res == 0) printf("OK \n");
  else printf("HE OK\n");

  remove(fname);

  return(Res);
}


int 
read_file(const char *fname, string *str)
{
  FILE *f = fopen(fname, "r");

  int readed = 0;
  str->len = 0;

  if (f == NULL)
  {
    printf("No such file\n");
    return -1;
  }

  str->max_len = 1024;
  str->data = (char*)malloc(sizeof(char) * str->max_len);

  while(1)
  {
    readed = fread(str->data + str->len, sizeof(char), 1024, f);
    str->len += readed;
    
    if (readed == 1024) 
    {
      str->max_len += 1024;
      str->data = (char*)realloc(str->data, sizeof(char) * str->max_len);
    }
    else
    {
      break;
    }
  }

  fclose(f);
  return 0;
}

int 
correct_code(string *str)
{

  int i;
  regex_t regex;
  int result;
  regmatch_t pmatch;


  //regcomp(&regex, "\\{[ \t\r\n]*([/][/](\\\\\r?\n)|(.)*?([^\\\\])(\r?\n))*[ \t\r\n]*([A-Za-z_$]+[A-Za-z_$0-1]*)\\(", REG_EXTENDED);
  regcomp(&regex, "\\{[ \t\r\n]*([A-Za-z_$]+[A-Za-z_$0-1]*)\\(", REG_EXTENDED);
  
  int start_offset = 0;
  do
  {
    result = regexec (&regex, str->data + start_offset, 1, &pmatch, 0);
      
    if (!result)
    {
      //printf("  - Match\n");
      //printf("(%d..%d)\n", start_offset + pmatch.rm_so, start_offset + pmatch.rm_eo);

      *(str->data + start_offset + pmatch.rm_so + 1) = ';';
      start_offset += pmatch.rm_eo;
    }
    else
    {
      break;
    }
  }
  while (1);

  regfree (&regex);

  return 0;
}

void
yyerror(char *s)
{
  fprintf(stderr, "%s:%d\n" , s, yyget_lineno());
}

int
yywrap()
{
  return(1);
}

