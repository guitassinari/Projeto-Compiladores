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

int {return TYPE;}
real {return TYPE;}
bool {return TYPE;}
char {return TYPE;}

%%

int yywrap(){
  is_running = 0;
  display(table);
  return 1;
}
