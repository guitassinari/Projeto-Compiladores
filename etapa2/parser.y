%{
  #include <stdio.h>
  #include <stdlib.h>
%}

%token TYPE
%token CHAR_LIT
%token INT_LIT
%token BOOL_LIT
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
%token END

%%
program             : declarationList
                    ;

declarationList     : variableDeclaration declarationList
                    | functDeclaration declarationList
                    ;

variableDeclaration : TYPE IDENTIFIER arrayOrNormal ';'
                    ;

arrayOrNormal       : ':' INT_LIT
                    | ':' BOOL_LIT
                    | ':' CHAR_LIT
                    | ':' STRING
                    | '[' INT_LIT ']' arrayInit
                    ;

arrayInit           : ':' arrayInitLiterals
                    |
                    ;

arrayInitLiterals   : BOOL_LIT arrayInitLiterals
                    | INT_LIT arrayInitLiterals
                    | CHAR_LIT arrayInitLiterals
                    |
                    ;

functDeclaration    : TYPE IDENTIFIER '(' functParamsDef ')' commandBlock ';'
                    ;

functParamsDef      : TYPE IDENTIFIER functParamsDefCont
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

functParamsDefCont  : ',' TYPE IDENTIFIER functParamsDefCont
                    |
                    ;

commandBlock        : '{' commandBlockList '}'
                    ;

commandBlockList    : command ';' commandBlockListCont
                    ;

commandBlockListCont: command ';' commandBlockListCont
                    |
                    ;

flowControl         : IF '(' expression ')' THEN command ifThenCont
                    | FOR '(' forCont
                    ;

ifThenCont          : ELSE command
                    |
                    ;

forCont             : expression forEnd
                    | IDENTIFIER '=' expression TO expression forEnd
                    ;

forEnd              : ')' command
                    ;

command             : print
                    | return
                    | read
                    | attribuition
                    | flowControl
                    | commandBlock
                    |
                    ;

attribuition        : IDENTIFIER attribuitionCont
                    ;

attribuitionCont    : '=' expression
                    | '[' expression ']' '=' expression
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
                    | BOOL_LIT
                    ;

arithmeticExpression: arithmeticExpression arithmeticOperators arithmeticExpression
                    | integerExpression
                    | IDENTIFIER expressionVarCont
                    ;

integerExpression   : integerExpression arithmeticOperators integerExpression
                    | INT_LIT
                    ;

charExpression      : charExpression operator charExpression
                    | CHAR_LIT
                    ;

expression          : '(' expression ')'
                    | functCall
                    | logicalExpression
                    | arithmeticExpression
                    | charExpression
                    ;

expressionVarCont   : '[' arrayPosition ']'
                    |
                    ;

arrayPosition       : integerExpression
                    ;

operator            : logicalOperators
                    | relationalOperators
                    | arithmeticOperators
                    ;

logicalOperators    : '|''|'
                    | '&''&'
                    ;

relationalOperators : '=''='
                    | '!''='
                    | '<''='
                    | '>''='
                    ;

arithmeticOperators : '+'
                    | '-'
                    | '*'
                    | '/'
                    ;

%%
