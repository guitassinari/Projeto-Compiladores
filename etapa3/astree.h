//Guilherme Schievelbein e Leonardo Ramos
//Compiladores - Etapa 3
//ASTree

#include "hash.c"
#include <stdio.h>
#include <stdlib.h>

#define MAX_CHILDREN 4

#define AST_DECL_LIST 1
#define AST_VAR_DECL 2
#define AST_VEC_DECL 3
#define AST_ARRAY_INIT 4
#define AST_FUNCT_DECL 5
#define AST_FUNCT_PARAMS_DEF 6
#define AST_PARAMS_DEF_CONT 7
#define AST_CMD_BLOCK 8
#define AST_CMD_BLOCK_LIST 9
#define AST_CMD_BLOCK_LIST_CONT 10
#define AST_PRINT 11
#define AST_RETURN 12
#define AST_READ 13
#define AST_ATTRIBUTION 14
#define AST_VECTOR_ATTRIBUTION 15
#define AST_IF_ELSE 16
#define AST_IF 17
#define AST_FOR 18
#define AST_FOR_TO 19
#define AST_CMD_CMD_BLOCK 20
#define AST_CMD_EMPTY 20
#define AST_PRINT_LIST 21
#define AST_FUNCT_CALL 22
#define AST_FUNCT_CALL_PARAMS 23
#define AST_FUNCT_CALL_PARAMS_CONT 21
#define AST_PARENTHESIS_EXPRESSION 22
#define AST_FUNCT_CALL_EXPRESSION 23
#define AST_LITERAL_EXPRESSION 24
#define AST_VECTOR_EXPRESSION 25
#define AST_EQUAL_OP 26
#define AST_DIFF_OP 27
#define AST_LT_OP 28
#define AST_GT_OP 29
#define AST_OR_OP 30
#define AST_AND_OP 31
#define AST_SUM_OP 32
#define AST_SUB_UP 33
#define AST_DIV_OP 34
#define AST_MULT_OP 35






typedef struct astreenode
{
	int type;
	HASH_ELEMENT *symbol;
	struct astreenode *children[MAX_CHILDREN];
} ASTREE;

ASTREE *astCreate(int type, HASH_ELEMENT *symbol, ASTREE *s0, ASTREE *s1, ASTREE *s2, ASTREE *s3);
void astPrintTree(ASTREE *root);
void astPrintTree_aux(ASTREE *root, int level);
void astPrintNode(ASTREE *node);
void astPrintTreeSrc(ASTREE *node);
