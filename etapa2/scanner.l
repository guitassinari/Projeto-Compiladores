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

[0-9]+ { return INTEGER;}

int {return INT;}
real {return REAL;}
bool {return BOOL;}
char {return CHAR;}

FALSE {return FALSE;}
TRUE {return TRUE;}
'[a-zA-z]' {return CHAR;}
[a-zA-Z][a-zA-Z_0-9]+ {return IDENTIFIER;}

":" {return DOUBLE_PERIOD;}
";" {return PERIOD_AND_COMMA;}

%%

int yywrap(){
  exit(0);
  return 1;
}
