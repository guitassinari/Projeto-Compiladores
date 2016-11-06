
#include <stdio.h>
#include "code.h"

TAC *codeGenerate(ASTREE *root) {
  // search tree - bottom up search
  if(root == 0) return NULL;

  int i;
  TAC *result[MAX_CHILDREN];

  for(i = 0; i < MAX_CHILDREN; i++)
  result[i] = 0;

  TAC *codeList = NULL;

  for(i = 0; i < MAX_CHILDREN; i++)
  result[i] = codeGenerate(root->children[i]);

  //process node
  switch(root->type) {
    case AST_DECL_LIST : codeList = tacJoin(result[0], codeList);
      codeList = tacJoin(codeList, result[1]);
      break;
    case AST_VAR_DECL: codeList = tacCreate(TAC_VAR_DECL, root->symbol, 0, 0);
      codeList = tacJoin(codeList, result[0]);
      break;
    case AST_VAR_INIT: codeList = tacCreate(TAC_MOVE, root->symbol, result[1], 0);
      break;
    case AST_VEC_DECL: codeList = tacCreate(TAC_VEC_DECL, root->symbol, result[1]->res, 0);
      tacJoin(codeList, tacCreate(TAC_VEC_INIT, root->symbol, result[2]->res, 0));
      break;
    case AST_VEC_SIZE: codeList = tacCreate(TAC_SYMBOL, root->symbol, 0, 0);
      break;
    case AST_ARRAY_INIT : codeList = tacCreate(TAC_SYMBOL, root->symbol, 0, 0);
      codeList = tacJoin(result[0], codeList);
      break;
    case AST_SUM_OP: codeList = makeOps(TAC_OP_SUM, result[0], result[1]);
      break;
    case AST_SUB_OP: codeList = makeOps(TAC_OP_SUB, result[0], result[1]);
      break;
    case AST_MULT_OP: codeList = makeOps(TAC_OP_MUL, result[0], result[1]);
      break;
    case AST_DIV_OP: codeList = makeOps(TAC_OP_DIV, result[0], result[1]);
      break;
    case AST_LT_OP: codeList = makeOps(TAC_OP_LES, result[0], result[1]);
      break;
    case AST_GT_OP: codeList = makeOps(TAC_OP_GRE, result[0], result[1]);
      break;
    case AST_EQUAL_OP: codeList = makeOps(TAC_OP_EQ, result[0], result[1]);
      break;
    case AST_DIFF_OP: codeList = makeOps(TAC_OP_NE, result[0], result[1]);
      break;
    case AST_AND_OP: codeList = makeOps(TAC_OP_AND, result[0], result[1]);
      break;
    case AST_OR_OP: codeList = makeOps(TAC_OP_OR, result[0], result[1]);
      break;

    case AST_IF_ELSE: codeList = makeIf(result[0], result[1], result[2]);
      break;
    case AST_IF: codeList = makeIf(result[0], result[1], 0);
      break;

    case AST_FOR: codeList = makeFor(result[0], result[1]);
      break;

    case AST_FOR_TO: codeList = makeForTo(root->symbol, result[0], result[1], result[2]);
      break;

    case AST_RETURN: codeList = tacCreate(TAC_RET, result[0]->res, 0, 0);
      codeList = tacJoin(result[0], codeList);
      break;
    case AST_READ: codeList = tacCreate(TAC_READ, root->symbol, 0, 0);
      break;

    case AST_ATTRIBUTION: codeList = tacJoin(result[0], tacCreate(TAC_MOVE, root->symbol, result[0]? result[0]->res : 0, 0));
      break;

    case AST_VECTOR_ATTRIBUTION: codeList = makeAtrVec(root->symbol, result[0], result[1]);
      break;

    case AST_INT: codeList = tacCreate(TAC_INT, 0, 0, 0);
      break;
    case AST_CHAR: codeList = tacCreate(TAC_CHAR, 0, 0, 0);
      break;
    case AST_BOOL: codeList = tacCreate(TAC_BOOL, 0, 0, 0);
      break;
    case AST_REAL: codeList = tacCreate(TAC_REAL, 0, 0, 0);
      break;

    case AST_FUNCT_PARAMS_DEF: codeList = tacCreate(TAC_PARAM, root->symbol, result[0]? result[0]->res : 0, 0);
      break;
    case AST_PARAMS_DEF_CONT: codeList = tacCreate(TAC_PARAM, root->symbol, result[0]? result[0]->res : 0, 0);
      break;

    case AST_FUNCT_DECL: codeList = funcDecl(root->symbol, result[0], result[1], result[2], result[3]);
      break;

    case AST_LITERAL_EXPRESSION: codeList = tacCreate(TAC_SYMBOL, root->symbol, 0, 0);
      break;

    case AST_PARENTHESIS_EXPRESSION: codeList = result[0];
      break;

    case AST_FUNCT_CALL_EXPRESSION: codeList = result[0];
      break;

    case AST_FUNCT_CALL: codeList = tacJoin(result[0], tacCreate(TAC_CALL, makeTemp(), root->symbol, 0));
      break;
    case AST_FUNCT_CALL_PARAMS: codeList = tacJoin(result[0], tacCreate(TAC_CALL_PARAM, root->symbol, 0, 0));
      break;
    case AST_FUNCT_CALL_PARAMS_CONT: codeList = result[0];
      break;

    case AST_PRINT: codeList = tacCreate(TAC_PRINT, result[0]->res, 0, 0);
      codeList = tacJoin(codeList, result[0]);
      break;
    case AST_PRINT_LIST:
      if(root->symbol != 0){
        codeList = tacCreate(TAC_SYMBOL, root->symbol, 0, 0);
        codeList = tacJoin(codeList, result[0]);
      } else if(result[0] != 0) {
        codeList = tacCreate(TAC_SYMBOL, result[0]->res, 0, 0);
        codeList = tacJoin(codeList, result[1]);
      }
      break;
    case AST_VAR_EXPRESSION : codeList = tacCreate(TAC_SYMBOL, root->symbol, 0, 0);
      break;

    case AST_CMD_BLOCK_LIST: codeList = tacJoin(result[0], result[1]);
      break;
    case AST_CMD_BLOCK_LIST_CONT: codeList = tacJoin(result[0], result[1]);
      break;
    case AST_CMD_BLOCK: codeList = result[0];
      break;
    case AST_CMD_CMD_BLOCK: codeList = result[0];
      break;
    case AST_CMD_EMPTY: codeList = tacCreate(TAC_CMD_EMPTY, 0, 0, 0);
      break;
    default: break;
  }

  return codeList;
}

TAC* makeAtrVec(entry_t* symbol, TAC* exprIndex, TAC* cmd){
  TAC *codeList = 0;

  TAC *moveInd = tacCreate(TAC_MOVE_IND, symbol, exprIndex ? exprIndex->res : 0, cmd ? cmd->res : 0);
  codeList = tacJoin(tacJoin(exprIndex, cmd), moveInd);

  return codeList;
}

TAC* makeOps(int type, TAC* op1, TAC* op2) {
  TAC* codeList;
  codeList = tacCreate(type, makeTemp(), op1? op1->res : 0, op2? op2->res : 0);
  codeList = tacJoin(op2, codeList);
  codeList = tacJoin(op1, codeList);
  return codeList;
}

TAC* makeIf(TAC* expr, TAC* then, TAC* els) {
  entry_t* targetElse = makeLabel();
  entry_t* targetEnd = makeLabel();

  TAC* jumpElse = tacCreate(TAC_JFALSE, targetElse, expr->res, 0);
  TAC* jumpEnd = tacCreate(TAC_JUMP, targetEnd, 0, 0);

  TAC* labelElse = tacCreate(TAC_LABEL, targetElse, 0, 0);
  TAC* labelEnd = tacCreate(TAC_LABEL, targetEnd, 0, 0);

  return tacJoin(tacJoin(tacJoin(tacJoin(tacJoin(tacJoin(expr ,jumpElse), then), jumpEnd), labelElse), els), labelEnd);
}

TAC* makeFor(TAC* expr, TAC* cmd) {
  entry_t* targetBegin = makeLabel();
  entry_t* targetEnd = makeLabel();

  TAC* jumpBegin = tacCreate(TAC_JUMP, targetBegin, 0, 0);
  TAC* jumpEnd = tacCreate(TAC_JFALSE, targetEnd, expr->res, 0);

  TAC* labelBegin = tacCreate(TAC_LABEL, targetBegin, 0, 0);
  TAC* labelEnd = tacCreate(TAC_LABEL, targetEnd, 0, 0);

  return tacJoin(tacJoin(tacJoin(tacJoin(tacJoin(labelBegin, expr), jumpEnd), cmd), jumpBegin), labelEnd);
}

TAC* makeForTo(entry_t* id, TAC* expr1, TAC* expr2, TAC* cmd) {
  entry_t* targetBegin = makeLabel();
  entry_t* targetEnd = makeLabel();

  TAC* varInit = tacCreate(TAC_MOVE, id, expr1, 0);

  TAC* jumpBegin = tacCreate(TAC_JUMP, targetBegin, 0, 0);
  TAC* jumpEnd = tacCreate(TAC_JFALSE, targetEnd, expr2->res, 0);

  TAC* labelBegin = tacCreate(TAC_LABEL, targetBegin, 0, 0);
  TAC* labelEnd = tacCreate(TAC_LABEL, targetEnd, 0, 0);

  return tacJoin(tacJoin(tacJoin(tacJoin(tacJoin(tacJoin(varInit, labelBegin), expr1), jumpEnd), cmd), jumpBegin), labelEnd);
}

TAC* funcDecl(entry_t* symbol, TAC* type, TAC* params, TAC* loc, TAC* cmds) {
  TAC* beginf = tacCreate(TAC_BEGINF, symbol, 0, 0);
  TAC* endf = tacCreate(TAC_ENDF, symbol, 0, 0);

  return tacJoin(tacJoin(tacJoin(tacJoin(params, beginf),loc), cmds), endf);

}
