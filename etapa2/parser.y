%{
  #include <stdio.h>
  #include <string.h>
%}
%token INT REAL BOOL CHAR  LIT_INTEGER LIT_FALSE LIT_TRUE LIT_CHAR IDENTIFIER
%%

type :
    INT
  | REAL
  | BOOL
  | CHAR
  ;

literal :
    LIT_INTEGER
  | LIT_FALSE
  | LIT_TRUE
  | LIT_CHAR
  ;

var_declaration :
    type IDENTIFIER ':' literal
  | type IDENTIFIER '[' LIT_INTEGER ']' ':' literal ' ' ';'
  ;

array_or_normal :
    ':' literal ';'
  | '[' LIT_INTEGER ']' array_init
  ;

array_init :
    ';'
  | LITERAL array_init
  ;

%%

void yyerror (char const *s) {
  printf("Fodeu");
}

void main(){
  yyparse();
}
