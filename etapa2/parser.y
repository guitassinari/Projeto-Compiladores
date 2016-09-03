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
program             : commandList
                    | variableDeclaration
                    | functDeclaration
                    ;

commandList         : command commandList
                    ;

functDeclaration    : type IDENTIFIER '(' functParamsDef commandBlock
                    ;

command             : print
                    | return
                    | read
                    | attribuition
                    | flowControl
                    | commandBlock
                    |
                    ;

functCall           : IDENTIFIER '(' functParams ')'
                    ;

functParams         : IDENTIFIER functParamsCont
                    |
                    ;

functParamsCont     : ',' IDENTIFIER functParamsCont
                    |
                    ;



functParamsDef      : type IDENTIFIER functParamsDefCont
                    |
                    ;

functParamsDefCont  : ',' type IDENTIFIER functParamsDefCont
                    |
                    ;

commandBlock        : '{' commandBlockList '}'
                    ;

commandBlockList    : command ';' commandBlockList
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

logicalExpression   : arithmeticExpression relationalOperators arithmeticExpression
                    | logicalExpression logicalOperators logicalExpression
                    | TRUE
                    | FALSE
                    | functCall
                    ;

arithmeticExpression: arithmeticExpression arithmeticOperators arithmeticExpression
                    | IDENTIFIER expressionVarCont
                    | REAL
                    | INTEGER
                    | functCall
                    ;

integerExpression   : integerExpression arithmeticOperators integerExpression
                    | INTEGER
                    | functCall
                    ;
charExpression      : charExpression operator charExpression
                    | CHAR
                    | functCall
                    ;

expression          : parenthesisExpr operator parenthesisExpr
                    | logicalExpression
                    | arithmeticExpression
                    | integerExpression
                    | charExpression
                    ;

expressionVarCont   : '[' arrayPosition ']'
                    |
                    ;

parenthesisExpr     : '(' expression ')'
                    | expression
                    ;

arrayPosition       : integerExpression
                    ;

operator            : logicalOperators
                    | relationalOperators
                    | arithmeticOperators
                    ;

logicalOperators    : '||'
                    | '&&'
                    ;

relationalOperators : '=='
                    | '!='
                    | '<='
                    | '>='
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
