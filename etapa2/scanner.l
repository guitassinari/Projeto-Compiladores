%{
  #include "y.tab.h"
  #include "hash.c"
  #define TABLE_SIZE 997

  extern int yylval;

  hashtable_t *table;
  void initMe(void){
    table = ht_create( TABLE_SIZE );
  }

  static int is_running = 1;
  int isRunning(){
    return is_running;
  }

  static int line_number = 1;
  int getLineNumber(){
    return line_number;
  }
%}

%%

[0-9]+ {return INT_LIT;}
FALSE { printf("BOOL"); return BOOL_LIT;}
TRUE { printf("BOOL"); return BOOL_LIT;}
'[a-zA-z]' {return CHAR_LIT;}

[;:=+-[\].{}(),-_//\\*|&!=<>] {printf("%c", yytext[0]);return yytext[0];}

int {printf(TYPE); return TYPE;}
real {printf("TYPE"); return TYPE;}
bool {printf("TYPE"); return TYPE;}
char {printf("TYPE"); return TYPE;}

read {return READ;}
print {return PRINT;}
return {return RETURN;}
for {return FOR;}
to {return TO;}
if {return IF;}
then {return THEN;}
else {return ELSE;}
L?\"(\\.|[^\\"])*\"	{return STRING;}


[a-zA-Z][a-zA-Z_0-9]+ {printf("ID"); return IDENTIFIER;}

\n {}

%%

int yywrap(){
  exit(0);
  is_running = 0;
  return 1;
}
