#include "tacs.h"
#include <stdlib.h>


TAC * tacCreate(int type, entry_t *res, entry_t *op1, entry_t *op2) {
	TAC *newTac = 0;
	newTac = (TAC*) calloc(1, sizeof(TAC));
	newTac->type = type;
	newTac->res = res;
	newTac->op1 = op1;
	newTac->op2 = op2;
	newTac->prev = 0;
	newTac->next = 0;
	return newTac;
}

TAC * tacJoin(TAC *l1, TAC *l2) {
	if(!l1) return l2;
	if(!l2) return l1;

	TAC *t = l2;

	while(t->prev) {
		t = t->prev;
	}

	t->prev = l1;
	l1->next = l2;
	return l2;
}

void tacPrintOne(TAC *tac) {
	if(!tac) return;
	printf("TAC(");

	switch(tac->type) {
    case TAC_DECL_LIST : printf("TAC_DECL_LIST");
      break;
    case TAC_SYMBOL_VEC : printf("TAC_SYMBOL_VEC");
      break;
    case TAC_SYMBOL : printf("TAC_SYMBOL");
      break;
    case TAC_OP_SUM : printf("TAC_OP_SUM");
      break;
    case TAC_OP_SUB : printf("TAC_OP_SUB");
      break;
    case TAC_OP_MUL : printf("TAC_OP_MUL");
      break;
    case TAC_OP_DIV : printf("TAC_OP_DIV");
      break;
    case TAC_OP_LES : printf("TAC_OP_LES");
      break;
    case TAC_OP_GRE : printf("TAC_OP_GRE");
      break;
    case TAC_OP_LE : printf("TAC_OP_LE");
      break;
    case TAC_OP_GE : printf("TAC_OP_GE");
      break;
    case TAC_OP_EQ : printf("TAC_OP_EQ");
      break;
    case TAC_OP_NE : printf("TAC_OP_NE");
      break;
    case TAC_OP_AND : printf("TAC_OP_AND");
      break;
    case TAC_OP_OR : printf("TAC_OP_OR");
      break;
    case TAC_CMD_EMPTY : printf("TAC_CMD_EMPTY");
      break;
    case TAC_CALL : printf("TAC_CALL");
      break;
    case TAC_READ : printf("TAC_READ");
      break;
    case TAC_PARAM : printf("TAC_PARAM");
      break;
    case TAC_CALL_PARAM : printf("TAC_CALL_PARAM");
      break;
    case TAC_RET : printf("TAC_RET");
      break;
    case TAC_PRINT : printf("TAC_PRINT");
      break;
    case TAC_MOVE : printf("TAC_MOVE");
      break;
    case TAC_MOVE_IND : printf("TAC_MOVE_IND");
      break;
    case TAC_INT : printf("TAC_INT");
      break;
    case TAC_REAL : printf("TAC_REAL");
      break;
    case TAC_BOOL : printf("TAC_BOOL");
      break;
    case TAC_CHAR : printf("TAC_CHAR");
      break;
    case TAC_VEC_INIT : printf("TAC_VEC_INIT");
      break;
    case TAC_VEC_DECL : printf("TAC_VEC_DECL");
      break;
    case TAC_VEC_SIZE : printf("TAC_VEC_SIZE");
      break;
    case TAC_VAR_DECL : printf("TAC_VAR_DECL");
      break;
    case TAC_JFALSE : printf("TAC_JFALSE");
      break;
    case TAC_JTRUE : printf("TAC_JTRUE");
      break;
    case TAC_JUMP : printf("TAC_JUMP");
      break;
    case TAC_JUMPIND : printf("TAC_JUMPIND");
      break;
    case TAC_LABEL : printf("TAC_LABEL");
      break;
    case TAC_BEGINF : printf("TAC_BEGINF");
      break;
    case TAC_ENDF : printf("TAC_ENDF");
      break;
    default : break;
	}

	if (tac->res) printf(", %s", tac->res->value); else printf(", ");
	if (tac->op1) printf(", %s", tac->op1->value); else printf(", ");
	if (tac->op2) printf(", %s", tac->op2->value); else printf(", ");

	printf(")\n");
}

void tacPrintList(TAC *tac) {
	if(tac){
		tacPrintList(tac->prev);
		tacPrintOne(tac);
	}
}
