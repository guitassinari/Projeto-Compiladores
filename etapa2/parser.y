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
functionCall        :
                    ;

functionDeclaration : type IDENTIFIER '(' functionParams ')' functionBody
                    ;

functionParams      : type IDENTIFIER functionParamsCont
                    |
                    ;

functionParamsCont  : ',' type IDENTIFIER functionParamsCont
                    |
                    ;

functionBody        : '{' commandBlock '}'
                    ;


commandBlock        : command ';' commandBlock
                    | ';'
                    ;

commandList         : command commandList
                    |
                    ;

command             : print
                    | return
                    | read
                    | attribuition
                    | print
                    | flowControl
                    |
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

variableDeclaration : type IDENTIFIER arrayOrNormal ';'
                    ;

arrayOrNormal       : ':' literal
                    | '[' INTEGER ']' arrayInit
                    ;

arrayInit           : ':' arrayInitLiterals
                    |
                    ;

arrayInitLiterals   : literal arrayInitLiterals
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
