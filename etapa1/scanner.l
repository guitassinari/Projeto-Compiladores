%{
  #include "main.c"
  #include "token.h"
  #include "hash.c"
  #define TABLE_SIZE 997

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
%x STRING

%%

"//".* {printf("achei um comentário!");}

[ ] {}
int {return KW_INT;}
float {return KW_FLOAT;}
bool {return KW_BOOL;}
char {return KW_CHAR;}
if {return KW_IF;}
then {return KW_THEN;}
else {return KW_ELSE;}
for {return KW_FOR;}
read {return KW_READ;}
return {return KW_RETURN;}gedit 	
print {return KW_PRINT;}

[<][=] {return OPERATOR_LE;}
[>][=] {return OPERATOR_GE;}
[=][=] {return OPERATOR_EQ;}
[!][=] {return OPERATOR_NE;}
[|][|] {return OPERATOR_OR;}
[&][&] {return OPERATOR_AND;}

[,;:()[\]{}+-/<>=!&$] {return yytext[0];}

^(.?$|[^_]].*|[^0-9]].*) {ht_set(table, yytext, yytext); return TK_IDENTIFIER;}
^[0-9]+$ {return LIT_INTEGER;}
FALSE {ht_set(table, yytext, yytext); return LIT_FALSE;}
TRUE {ht_set(table, yytext, yytext); return LIT_TRUE;}
'[a-zA-z]' { ht_set(table, yytext, yytext); return LIT_CHAR;}
["] {BEGIN(STRING);}
\n {line_number++;}

"/"\* {BEGIN(COMMENT);}

<COMMENT>. {}
<COMMENT>\n {line_number++;}
<COMMENT>\*"/" {BEGIN(INITIAL);}

<STRING>[\\][\"] {}
<STRING>["] {BEGIN(INITIAL); return LIT_STRING;}
<STRING>\n {line_number++;}
<STRING>. {}

. {return TOKEN_ERROR;}

%%

int yywrap(){
  is_running = 0;
  return 1;
}
