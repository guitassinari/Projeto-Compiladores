#ifndef AST_H
#define AST_H

#include "hash.h"
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
#define AST_CMD_EMPTY 21
#define AST_PRINT_LIST 22
#define AST_FUNCT_CALL 23
#define AST_FUNCT_CALL_PARAMS 24
#define AST_FUNCT_CALL_PARAMS_CONT 25
#define AST_PARENTHESIS_EXPRESSION 26
#define AST_FUNCT_CALL_EXPRESSION 27
#define AST_LITERAL_EXPRESSION 28
#define AST_VECTOR_EXPRESSION 29
#define AST_EQUAL_OP 30
#define AST_DIFF_OP 31
#define AST_LT_OP 32
#define AST_GT_OP 33
#define AST_OR_OP 34
#define AST_AND_OP 35
#define AST_SUM_OP 36
#define AST_SUB_OP 37
#define AST_DIV_OP 38
#define AST_MULT_OP 39
#define AST_INT 40
#define AST_CHAR 41
#define AST_BOOL 42
#define AST_REAL 43
#define AST_VEC_SIZE 44
#define AST_VAR_INIT 45
#define AST_VAR_EXPRESSION 46

typedef struct astreenode
{
	int lineNumber;
	int type;
	entry_t *symbol;
	struct astreenode *children[MAX_CHILDREN];
} ASTREE;

ASTREE *astCreate(int type, entry_t *symbol, ASTREE *s0, ASTREE *s1, ASTREE *s2, ASTREE *s3);
void astPrintTree(ASTREE *root);
void astPrintTree_aux(ASTREE *root, int level);
void astPrintNode(ASTREE *node);
void astPrintTreeSrc(ASTREE *node);

#endif
