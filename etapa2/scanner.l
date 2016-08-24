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

"//".* {}

int {return INT;}
real {return REAL;}
bool {return BOOL;}
char {return CHAR;}

[a-zA-Z][a-zA-Z_0-9]+ {ht_set(table, yytext, yytext); return IDENTIFIER;}


^[0-9]+$ {return LIT_INTEGER;}
FALSE {ht_set(table, yytext, yytext); return LIT_FALSE;}
TRUE {ht_set(table, yytext, yytext); return LIT_TRUE;}
'[a-zA-z]' { ht_set(table, yytext, yytext); return LIT_CHAR;}
%%

int yywrap(){
  is_running = 0;
  display(table);
  return 1;
}
