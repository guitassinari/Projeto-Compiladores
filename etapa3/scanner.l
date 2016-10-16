%{
  #include "y.tab.h"
  #include "hash.c"
  #define TABLE_SIZE 997
  #define SYMBOL_CHAR_LIT 1
  #define SYMBOL_INT_LIT 2
  #define SYMBOL_IDENTIFIER 3
  #define SYMBOL_STRING 4

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

%x COMMENT

%%

"//".* {}
"/"\* {BEGIN(COMMENT);}

<COMMENT>. {}
<COMMENT>\n {line_number++;}
<COMMENT>\*"/" {BEGIN(INITIAL);}

[0-9]+ {ht_set(table, yytext, yytext, SYMBOL_INT_LIT); return INT_LIT;}
FALSE { printf("BOOL"); return BOOL_LIT;}
TRUE { printf("BOOL"); return BOOL_LIT;}
'[a-zA-z]' {ht_set(table, yytext, yytext, SYMBOL_CHAR_LIT); return CHAR_LIT;}

[;:=+-[\].{}(),-_//\\*|&!=<>] {return yytext[0];}

int {return TYPE;}
real {return TYPE;}
bool {return TYPE;}
char {return TYPE;}

[=][=] {return EQUAL;}
[!][=] {return DIFFERENT;}
[<][=] {return LESS_THEN;}
[>][=] {return GREATHER_THEN;}
[|][|] {return OR;}
[&][&] {return AND;}

read {return READ;}
print {return PRINT;}
return {return RETURN;}
for {return FOR;}
to {return TO;}
if {return IF;}
then {return THEN;}
else {return ELSE;}
L?\"(\\.|[^\\"])*\"	{ht_set(table, yytext, yytext, SYMBOL_STRING); return STRING;}


[a-zA-Z][a-zA-Z_0-9]+ {ht_set(table, yytext, yytext, SYMBOL_IDENTIFIER); return IDENTIFIER;}

\n {line_number++;}

%%

int yywrap(){
  is_running = 0;
  display(table);
  return 1;
}

void yyerror (char const *s) {
  if(is_running){
  printf("%s", s);
  exit(3);
  }
  exit(0);
}