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
%token READ
%token PRINT
%token RETURN
%token STRING
%token TO
%token FOR
%token IF
%token THEN
%token ELSE

%%

command             : print
                    | return
                    | read
                    | attribuition
                    | print
                    | flowControl
                    ;

flowControl         : IF '(' expression ')' THEN command
                    | IF '(' expression ')' THEN command ELSE command
                    | FOR '(' expression ')' command
                    | FOR '(' IDENTIFIER '=' expression TO expression ')' command
                    ;

attribuition        : IDENTIFIER '=' expression
                    | IDENTIFIER '[' expression ']' '=' expression
                    ;

read                : READ IDENTIFIER
                    ;

return              : RETURN expression
                    ;

print               : PRINT printList
                    ;

printList           : STRING printList
                    | expression printList
                    |
                    ;

expression          : IDENTIFIER
                    | IDENTIFIER '[' arrayPosition ']'
                    | INTEGER
                    | CHAR
                    | logicalValues
                    | functionCall
                    | parenthesisExpr operator parenthesisExpr
                    ;

parenthesisExpr     : '(' expression ')'
                    | expression
                    ;

arrayPosition       : INTEGER
                    | expression
                    | CHAR
                    ;

logicalValues       : TRUE
                    | FALSE
                    ;

operators           : logicalOperators
                    | arithmeticOperators
                    ;

logicalOperators    : '||'
                    | '&&'
                    | '=='
                    | '!='
                    ;

arithmeticOperators : '+'
                    | '-'
                    | '*'
                    | '/'
                    ;

functionCall        :
                    ;

funct_declaration   : type IDENTIFIER '(' funct_params ')' funct_body
                    ;

funct_params        : type IDENTIFIER funct_params_cont
                    |
                    ;

funct_params_cont   : ',' type IDENTIFIER funct_params_cont
                    |
                    ;

funct_body          : '{' '}'
                    ;

var_declaration     : type IDENTIFIER array_or_normal ';'
                    ;

array_or_normal     : ':' literal
                    | '[' INTEGER ']' array_init
                    ;

array_init          : ':' array_init_literals
                    |
                    ;

array_init_literals : literal array_init_literals
                    |
                    ;

literal             : INTEGER
                    | FALSE
                    | TRUE
                    | CHAR
                    ;

type                : INT
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
