%{
  #include "astree.h"
  #include "y.tab.h"
  #include "hash.h"

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

[0-9]+ {yylval.symbol = ht_set(table, yytext, yytext, SYMBOL_INT_LIT); return INT_LIT;}
FALSE {yylval.symbol = ht_set(table, yytext, yytext, SYMBOL_BOOL_LIT); return BOOL_LIT;}
TRUE {yylval.symbol = ht_set(table, yytext, yytext, SYMBOL_BOOL_LIT); return BOOL_LIT;}
'[a-zA-z]' {yylval.symbol = ht_set(table, yytext, yytext, SYMBOL_CHAR_LIT); return CHAR_LIT;}

[;:=+-[\].{}(),-_//\\*|&!=<>] {return yytext[0];}

int {return KW_INT;}
real {return KW_REAL;}
bool {return KW_BOOL;}
char {return KW_CHAR;}

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
L?\"(\\.|[^\\"])*\"	{yylval.symbol = ht_set(table, yytext, yytext, SYMBOL_STRING); return STRING;}


[a-zA-Z][a-zA-Z_0-9]+ {yylval.symbol = ht_set(table, yytext, yytext, SYMBOL_IDENTIFIER); return IDENTIFIER;}

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
