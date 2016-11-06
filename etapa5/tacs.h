//Guilherme Schievelbein e Leonardo Ramos
#ifndef TACS_HEADER
#define TACS_HEADER

#include "hash.h"
#include <stdio.h>


#define TAC_DECL_LIST		1
#define TAC_SYMBOL_VEC	2
#define TAC_SYMBOL	3
//
#define TAC_OP_SUM		4
#define TAC_OP_SUB		5
#define TAC_OP_MUL		6
#define TAC_OP_DIV		7
#define TAC_OP_LES		8
#define TAC_OP_GRE		9
#define TAC_OP_LE		10
#define TAC_OP_GE		11
#define TAC_OP_EQ		12
#define TAC_OP_NE		13
#define TAC_OP_AND		14
#define TAC_OP_OR		15
#define TAC_CMD_EMPTY 16
#define TAC_CALL		17
#define TAC_READ 18
#define TAC_PARAM 19
#define TAC_CALL_PARAM 20
#define TAC_RET			21
#define TAC_PRINT 22
#define TAC_MOVE		24
#define TAC_MOVE_IND	25
#define TAC_INT		28
#define TAC_REAL		29
#define TAC_BOOL		30
#define TAC_CHAR		31
#define TAC_VEC_INIT 32
#define TAC_VEC_DECL		34
#define TAC_VEC_SIZE		35
#define TAC_VAR_DECL		36

#define TAC_JFALSE		42
#define TAC_JTRUE		43
#define TAC_JUMP		44
#define TAC_JUMPIND		45
#define TAC_LABEL		46
#define TAC_BEGINF		47
#define TAC_ENDF		48


typedef struct tac_structure {
  int type;
  entry_t *res;
  entry_t *op1;
  entry_t *op2;
  struct tac_structure *prev;
  struct tac_structure *next;
} TAC;


TAC * tacCreate(int type, entry_t *res, entry_t *op1, entry_t *op2);
TAC * tacJoin(TAC *l1, TAC *l2);
void tacPrintOne(TAC *tac);
void tacPrintList(TAC *tac);


#endif
