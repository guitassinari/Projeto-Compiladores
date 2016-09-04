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

variableDeclaration : TYPE IDENTIFIER arrayOrNormal ';' {printf(" VAR SUCCESS \n ");}
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

functDeclaration    : TYPE IDENTIFIER '(' functParamsDef ')' commandBlock ';' {printf("DECL");}
                    ;

functParamsDef      : TYPE IDENTIFIER functParamsDefCont
                    | {printf("EMPTY");}
                    ;

functCall           : IDENTIFIER '(' functParams ')' {printf("CALL");}
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

commandBlock        : '{' commandBlockList '}' {printf("CMD BLOCK");}
                    ;

commandBlockList    : command ';' commandBlockListCont {printf("BLCKLIST");}
                    ;

commandBlockListCont: command ';' commandBlockListCont {printf("BLCKLISTCONT");}
                    |
                    ;

flowControl         : IF '(' expression ')' THEN command ifThenCont {printf("IF");}
                    | FOR '(' forCont {printf("FOR");}
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

attribuition        : IDENTIFIER attribuitionCont {printf("ATTR");}
                    ;

attribuitionCont    : '=' expression
                    | '[' expression ']' '=' expression
                    ;

read                : READ IDENTIFIER {printf("READ");}
                    ;

return              : RETURN expression {printf("RETURN");}
                    ;

print               : PRINT printList {printf("PRINT");}
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
                    | IDENTIFIER expressionVarCont {printf("HA");}
                    ;

integerExpression   : integerExpression arithmeticOperators integerExpression
                    | INT_LIT
                    ;

charExpression      : charExpression operator charExpression
                    | CHAR_LIT
                    ;

expression          : logicalExpression
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

void yyerror (char const *s) {
  printf(" Fodeu %s", s);
  exit(3);
}
