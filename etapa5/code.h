
#include "tacs.h"
#include "astree.h"

TAC *codeGenerate(ASTREE *root);
TAC* makeOps(int type, TAC* op1, TAC* op2);
TAC* makeIf(TAC* cond, TAC* then, TAC* els);
TAC* makeFor(TAC* expr, TAC* cmd);
TAC* makeForTo(entry_t* id, TAC* expr1, TAC* expr2, TAC* cmd);
TAC* funcDecl(entry_t* symbol, TAC* type, TAC* params,TAC* loc, TAC* cmds);
TAC* makeAtrVec(entry_t* symbol, TAC* exprIndex, TAC* cmd);
