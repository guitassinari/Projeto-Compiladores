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
%token EQUAL
%token DIFFERENT
%token LESS_THEN
%token GREATHER_THEN
%token OR
%token AND

%%
program             : declarationList
                    ;



  declarationList     : variableDeclaration declarationList
                      | functDeclaration declarationList
                      ;


  variableDeclaration : TYPE IDENTIFIER ':' BOOL_LIT ';'
                      | TYPE IDENTIFIER ':' INT_LIT ';'
                      | TYPE IDENTIFIER ':' CHAR_LIT ';'
                      | TYPE IDENTIFIER ':' STRING ';'
                      | TYPE IDENTIFIER '[' INT_LIT ']' ':' arrayInitLiterals ';'
                      | TYPE IDENTIFIER '[' INT_LIT ']' ';'
                      ;
      arrayInitLiterals   : BOOL_LIT arrayInitLiterals
                          | INT_LIT arrayInitLiterals
                          | CHAR_LIT arrayInitLiterals
                          | STRING arrayInitLiterals
                          | IDENTIFIER arrayInitLiterals
                          |
                          ;



  functDeclaration    : TYPE IDENTIFIER '(' functParamsDef ')' commandBlock ';'
                      ;
    functParamsDef      : TYPE IDENTIFIER functParamsDefCont
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
          command             : PRINT printList
                              | RETURN expression
                              | READ IDENTIFIER
                              | IDENTIFIER '=' expression
                              | IDENTIFIER '[' expression ']' '=' expression
                              | IF '(' expression ')' THEN command ELSE command
                              | IF '(' expression ')' THEN command
                              | FOR '(' expression ')' command
                              | FOR '(' IDENTIFIER '=' expression TO expression ')' command
                              | commandBlock
                              |
                              ;
            printList           : STRING printList
                                | expression printList
                                |
                                ;



functCall           : IDENTIFIER '(' functParams ')'
                    ;
  functParams         : IDENTIFIER functParamsCont
                      | INT_LIT functParamsCont
                      | CHAR_LIT functParamsCont
                      | STRING functParamsCont
                      | INT_LIT functParamsCont
                      ;
    functParamsCont     : ',' IDENTIFIER functParamsCont
                        | ',' INT_LIT functParamsCont
                        | ',' CHAR_LIT functParamsCont
                        | ',' STRING functParamsCont
                        | ',' INT_LIT functParamsCont
                        |
                        ;



expression          : '(' expression ')'
                    | functCall
                    | INT_LIT
                    | CHAR_LIT
                    | BOOL_LIT
                    | IDENTIFIER
                    | IDENTIFIER '[' expression ']'
                    | expression EQUAL expression
                    | expression DIFFERENT expression
                    | expression LESS_THEN expression
                    | expression GREATHER_THEN expression
                    | expression OR expression
                    | expression AND expression
                    | expression '+' expression
                    | expression '-' expression
                    | expression '/' expression
                    | expression '*' expression
                    ;

%%
