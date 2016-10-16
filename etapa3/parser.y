%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "hash.c"
  #include "astree.h"
%}

%union {
	ASTREE *astree;
	HASH_ELEMENT *symbol;
}

%token TYPE
%token READ
%token PRINT
%token RETURN
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

%token<symbol> CHAR_LIT
%token<symbol> INT_LIT
%token<symbol> BOOL_LIT
%token<symbol> IDENTIFIER
%token<symbol> STRING

%left '-' '+'
%left '/' '*'

%%
program             : declarationList
                    ;



  declarationList     : variableDeclaration declarationList { $$ = astCreate(AST_DECL_LIST, 0, $1, $2, 0, 0); }
                      | functDeclaration declarationList { $$ = astCreate(AST_DECL_LIST, 0, $1, $2, 0, 0); }
                      ;


  variableDeclaration : TYPE IDENTIFIER ':' BOOL_LIT ';' { $$ = astCreate(AST_VAR_DECL, 0, $1, $2, $4, 0); }
                      | TYPE IDENTIFIER ':' INT_LIT ';' { $$ = astCreate(AST_VAR_DECL, 0, $1, $2, $4, 0); }
                      | TYPE IDENTIFIER ':' CHAR_LIT ';' { $$ = astCreate(AST_VAR_DECL, 0, $1, $2, $4, 0); }
                      | TYPE IDENTIFIER ':' STRING ';' { $$ = astCreate(AST_VAR_DECL, 0, $1, $2, $4, 0); }
                      | TYPE IDENTIFIER '[' INT_LIT ']' ':' arrayInitLiterals ';' { $$ = astCreate(AST_VEC_DECL, 0, $1, $2, $4, $7); }
                      | TYPE IDENTIFIER '[' INT_LIT ']' ';' { $$ = astCreate(AST_VEC_DECL, 0, $1, $2, $4, 0); }
                      ;
      arrayInitLiterals   : BOOL_LIT arrayInitLiterals { $$ = astCreate(AST_ARRAY_INIT, 0, $1, $2, $4, 0); }
                          | INT_LIT arrayInitLiterals { $$ = astCreate(AST_ARRAY_INIT, 0, $1, $2, $4, 0); }
                          | CHAR_LIT arrayInitLiterals { $$ = astCreate(AST_ARRAY_INIT, 0, $1, $2, $4, 0); }
                          | STRING arrayInitLiterals { $$ = astCreate(AST_ARRAY_INIT, 0, $1, $2, $4, 0); }
                          | IDENTIFIER arrayInitLiterals { $$ = astCreate(AST_ARRAY_INIT, 0, $1, $2, $4, 0); }
                          | { $$ = astCreate(AST_ARRAY_INIT, 0, 0, 0, 0, 0); }
                          ;



  functDeclaration    : TYPE IDENTIFIER '(' functParamsDef ')' commandBlock ';' { $$ = astCreate(AST_FUNCT_DECL, 0, $1, $2, $4, $6); }
                      ;
    functParamsDef      : TYPE IDENTIFIER functParamsDefCont { $$ = astCreate(AST_FUNCT_PARAMS_DEF, 0, $1, $2, $4, 0); }
                        |
                        ;
      functParamsDefCont  : ',' TYPE IDENTIFIER functParamsDefCont { $$ = astCreate(AST_PARAMS_DEF_CONT, 0, $2, $3, $4, 0); }
                          |
                          ;

    commandBlock        : '{' commandBlockList '}' { $$ = astCreate(AST_CMD_BLOCK, 0, $2, 0, 0, 0); }
                        ;
      commandBlockList    : command ';' commandBlockListCont { $$ = astCreate(AST_CMD_BLOCK_LIST, 0, $1, $3, 0, 0); }
                          ;
        commandBlockListCont: command ';' commandBlockListCont { $$ = astCreate(AST_CMD_BLOCK_LIST_CONT, 0, $1, $3, 0, 0); }
                            | { $$ = astCreate(AST_CMD_BLOCK_LIST_CONT, 0, 0, 0, 0, 0); }
                            ;
          command             : PRINT printList { $$ = astCreate(AST_PRINT, 0, $2, 0, 0, 0); }
                              | RETURN expression { $$ = astCreate(AST_RETURN, 0, $2, 0, 0, 0); }
                              | READ IDENTIFIER { $$ = astCreate(AST_READ, 0, $2, 0, 0, 0); }
                              | IDENTIFIER '=' expression { $$ = astCreate(AST_ATTRIBUTION, 0, $1, $3, 0, 0); }
                              | IDENTIFIER '[' expression ']' '=' expression { $$ = astCreate(AST_VECTOR_ATTRIBUTION, 0, $1, $2, 0, 0); }
                              | IF '(' expression ')' THEN command ELSE command { $$ = astCreate(AST_IF_ELSE, 0, $3, $6, $8, 0); }
                              | IF '(' expression ')' THEN command { $$ = astCreate(AST_IF, 0, $3, $6, 0, 0); }
                              | FOR '(' expression ')' command { $$ = astCreate(AST_CMD, 0, $1, $2, 0, 0); }
                              | FOR '(' IDENTIFIER '=' expression TO expression ')' command { $$ = astCreate(AST_CMD, 0, $1, $2, 0, 0); }
                              | commandBlock { $$ = astCreate(AST_CMD_CMD_BLOCK, 0, $1, 0, 0); }
                              | { $$ = astCreate(AST_CMD_EMPTY, 0, 0, 0, 0, 0); }
                              ;
            printList           : STRING printList { $$ = astCreate(AST_PRINT_LIST, 0, $1, $2, 0, 0); }
                                | expression printList { $$ = astCreate(AST_PRINT_LIST, 0, $1, $2, 0, 0); }
                                | { $$ = astCreate(AST_PRINT_LIST, 0, 0, 0, 0, 0); }
                                ;



functCall           : IDENTIFIER '(' functParams ')' { $$ = astCreate(AST_FUNCT_CALL, 0, $1, $3, 0, 0); }
                    ;
  functParams         : IDENTIFIER functParamsCont { $$ = astCreate(AST_FUNCT_CALL_PARAMS, 0, $1, $2, 0, 0); }
                      | INT_LIT functParamsCont { $$ = astCreate(AST_FUNCT_CALL_PARAMS, 0, $1, $2, 0, 0); }
                      | CHAR_LIT functParamsCont { $$ = astCreate(AST_FUNCT_CALL_PARAMS, 0, $1, $2, 0, 0); }
                      | STRING functParamsCont { $$ = astCreate(AST_FUNCT_CALL_PARAMS, 0, $1, $2, 0, 0); }
                      | INT_LIT functParamsCont { $$ = astCreate(AST_FUNCT_CALL_PARAMS, 0, $1, $2, 0, 0); }
                      ;
    functParamsCont     : ',' functParams { $$ = astCreate(AST_FUNCT_CALL_PARAMS_CONT, 0, $2, $3, 0, 0); }
                        | { $$ = astCreate(AST_FUNCT_CALL_PARAMS_CONT, 0, 0, 0, 0, 0); }
                        ;



expression          : '(' expression ')' { $$ = astCreate(AST_PARENTHESIS_EXPRESSION, 0, $2, 0, 0, 0); }
                    | functCall { $$ = astCreate(AST_FUNCT_CALL_EXPRESSION, 0, $1, 0, 0, 0); }
                    | INT_LIT { $$ = astCreate(AST_LITERAL_EXPRESSION, 0, $1, 0, 0, 0); }
                    | CHAR_LIT { $$ = astCreate(AST_LITERAL_EXPRESSION, 0, $1, 0, 0, 0); }
                    | BOOL_LIT { $$ = astCreate(AST_LITERAL_EXPRESSION, 0, $1, 0, 0, 0); }
                    | IDENTIFIER { $$ = astCreate(AST_LITERAL_EXPRESSION, 0, $1, 0, 0, 0); }
                    | IDENTIFIER '[' expression ']' { $$ = astCreate(AST_VECTOR_EXPRESSION, 0, $1, $3, 0, 0); }
                    | expression EQUAL expression { $$ = astCreate(AST_OPERATION_EXPRESSION, 0, $1, $2, $3, 0); }
                    | expression DIFFERENT expression { $$ = astCreate(AST_OPERATION_EXPRESSION, 0, $1, $2, $3, 0); }
                    | expression LESS_THEN expression { $$ = astCreate(AST_OPERATION_EXPRESSION, 0, $1, $2, $3, 0); }
                    | expression GREATHER_THEN expression { $$ = astCreate(AST_OPERATION_EXPRESSION, 0, $1, $2, $3, 0); }
                    | expression OR expression { $$ = astCreate(AST_OPERATION_EXPRESSION, 0, $1, $2, $3, 0); }
                    | expression AND expression { $$ = astCreate(AST_OPERATION_EXPRESSION, 0, $1, $2, $3, 0); }
                    | expression '+' expression { $$ = astCreate(AST_OPERATION_EXPRESSION, 0, $1, $2, $3, 0); }
                    | expression '-' expression { $$ = astCreate(AST_OPERATION_EXPRESSION, 0, $1, $2, $3, 0); }
                    | expression '/' expression { $$ = astCreate(AST_OPERATION_EXPRESSION, 0, $1, $2, $3, 0); }
                    | expression '*' expression { $$ = astCreate(AST_OPERATION_EXPRESSION, 0, $1, $2, $3, 0); }
                    ;

%%
