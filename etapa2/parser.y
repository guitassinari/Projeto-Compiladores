%{
  #include <stdio.h>
  #include <stdlib.h>
%}

%token INT
%token REAL
%token BOOL
%token CHAR
%token INTEGER
%token FALSE
%token TRUE
%token CHAR
%token IDENTIFIER

%%


funct_declaration :
    type IDENTIFIER '(' funct_params ')' funct_body
  ;

funct_params :
    type IDENTIFIER funct_params_cont
  |
  ;

funct_params_cont :
    ',' type IDENTIFIER funct_params_cont
  |
  ;

funct_body :
    '{' '}'
  ;

var_declaration :
    type IDENTIFIER array_or_normal ';'
  ;

array_or_normal :
    ':' literal
  | '[' INTEGER ']' array_init
  ;

array_init :
    ':' array_init_literals
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
