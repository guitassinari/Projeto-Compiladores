%{
  #include <stdio.h>
  #include <string.h>
%}
%token INT REAL BOOL CHAR INTEGER FALSE TRUE CHAR IDENTIFIER PERIOD_AND_COMMA DOUBLE_PERIOD
%%

var_declaration :
    type IDENTIFIER DOUBLE_PERIOD literal PERIOD_AND_COMMA
  ;

array_or_normal :
    DOUBLE_PERIOD literal
  | '[' INTEGER ']' array_init
  ;

array_init :
    DOUBLE_PERIOD array_init_literals
  |
  ;

array_init_literals :
    literal array_init_literals
  |
  ;

literal :
    INTEGER
  | FALSE
  | TRUE
  | CHAR
  ;

type :
    INT
  | REAL
  | BOOL
  | CHAR
  ;

%%

void yyerror (char const *s) {
  printf(" Fodeu %s", s);
  exit(3);
}

void main(){
  extern FILE *yyin;
  yyin = fopen("teste.txt","r");
  yyparse();
}
