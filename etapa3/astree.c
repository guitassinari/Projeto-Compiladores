#include "astree.h"
FILE *yyout;

ASTREE *astCreate(int type, entry_t *symbol, ASTREE *s0, ASTREE *s1, ASTREE *s2, ASTREE *s3) {
	ASTREE *newNode;
	newNode = (ASTREE*) calloc(1, sizeof(ASTREE));
	newNode->type = type;
	newNode->symbol = symbol;
	newNode->children[0] = s0;
	newNode->children[1] = s1;
	newNode->children[2] = s2;
	newNode->children[3] = s3;
	return newNode;
}

void astPrintTree(ASTREE *root) {
	astPrintTree_aux(root, 1);
}

void astPrintTree_aux(ASTREE *root, int level) {
	if (root == 0)
		return;

	int i;
	for (i = 0; i < level; ++i)	{
		printf("  ");
	}

	astPrintNode(root);

	for(i = 0; i < MAX_CHILDREN; i++){
		astPrintTree_aux(root->children[i], level+1);
	}
}

void astPrintTreeSrc (ASTREE *node) {
	if (node == 0)
		return;

	int i;

	switch(node->type) {
		case AST_DECL_LIST:
			astPrintTreeSrc(node->children[0]);
			astPrintTreeSrc(node->children[1]);
			break;
		case AST_VAR_DECL:
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, " %s :", node->symbol->value);
			astPrintTreeSrc(node->children[1]);
			fprintf(yyout, ";");
			break;
		case AST_VEC_DECL:
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, " %s  [", node->symbol->value);
			astPrintTreeSrc(node->children[1]);
			fprintf(yyout, "]");
			if(node->children[2] != 0){
				fprintf(yyout, ":");
				astPrintTreeSrc(node->children[2]);
			}
			fprintf(yyout, ";");
			break;
		case AST_ARRAY_INIT:
			if(node->symbol->value != 0){
				fprintf(yyout, " %s ", node->symbol->value);
				astPrintTreeSrc(node->children[0]);
			}
			break;
		case AST_FUNCT_DECL:
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, " %s (", node->symbol->value);
			astPrintTreeSrc(node->children[1]);
			fprintf(yyout, ")");
			astPrintTreeSrc(node->children[2]);
			fprintf(yyout, ";");
			break;
		case AST_FUNCT_PARAMS_DEF:
			if(node->children[0] != 0){
				astPrintTreeSrc(node->children[0]);
				fprintf(yyout, " %s ", node->symbol->value);
				astPrintTreeSrc(node->children[1]);
			}
			break;
		case AST_PARAMS_DEF_CONT:
			if(node->children[0] != 0){
				fprintf(yyout, ",");
				astPrintTreeSrc(node->children[0]);
				fprintf(yyout, " %s ", node->symbol->value);
				astPrintTreeSrc(node->children[1]);
			}
			break;
		case AST_CMD_BLOCK:
			fprintf(yyout, "{");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, "}");
			break;
		case AST_CMD_BLOCK_LIST:
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, ";");
			astPrintTreeSrc(node->children[1]);
			break;
		case AST_CMD_BLOCK_LIST_CONT:
			if(node->children[0] != 0){
				astPrintTreeSrc(node->children[0]);
				fprintf(yyout, ";");
				astPrintTreeSrc(node->children[1]);
			}
			break;
		case AST_PRINT:
			fprintf(yyout, "print ");
			astPrintTreeSrc(node->children[0]);
			break;
		case AST_RETURN:
			fprintf(yyout, "return ");
			astPrintTreeSrc(node->children[0]);
			break;
		case AST_READ:
			fprintf(yyout, "read ");
			astPrintTreeSrc(node->children[0]);
			break;
		case AST_ATTRIBUTION:
			fprintf(yyout, " %s = ", node->symbol->value);
			astPrintTreeSrc(node->children[0]);
			break;
		case AST_VECTOR_ATTRIBUTION:
			fprintf(yyout, " %s[", node->symbol->value);
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, "] =");
			astPrintTreeSrc(node->children[1]);
			break;
		case AST_IF_ELSE:
			fprintf(yyout, "if (");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, ") then ");
			astPrintTreeSrc(node->children[1]);
			fprintf(yyout, " else ");
			astPrintTreeSrc(node->children[2]);
			break;
		case AST_IF:
			fprintf(yyout, "if (");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, ") then ");
			astPrintTreeSrc(node->children[1]);
			break;
		case AST_FOR:
			fprintf(yyout, "for (");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, ") ");
			astPrintTreeSrc(node->children[1]);
			break;
		case AST_FOR_TO:
			fprintf(yyout, "for (");
			fprintf(yyout, " %s = ", node->symbol->value);
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, " to ");
			astPrintTreeSrc(node->children[1]);
			fprintf(yyout, ") ");
			astPrintTreeSrc(node->children[2]);
			break;
		case AST_CMD_CMD_BLOCK:
		astPrintTreeSrc(node->children[0]);
			break;
		case AST_CMD_EMPTY:
			break;
		case AST_PRINT_LIST:
			if(node->symbol != 0){
				fprintf(yyout, " %s ", node->symbol->text);
			}
			if(node->children[0] != 0){
				astPrintTreeSrc(node->children[0]);
			}
			if(node->children[1] != 0){
				astPrintTreeSrc(node->children[1]);
			}
			break;
		case AST_FUNCT_CALL:
			fprintf(yyout, "%s (", node->symbol->text);
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, ")");
			break;
		case AST_FUNCT_CALL_PARAMS:
		 	fprintf(yyout, "%s", node->symbol->text);
			astPrintTreeSrc(node->children[0]);
			break;
		case AST_FUNCT_CALL_PARAMS_CONT:
			if(node->children[0] != 0){
				fprintf(yyout, ",");
				fprintf(yyout, "%s (", node->symbol->text);
				astPrintTreeSrc(node->children[0]);
				fprintf(yyout, ")");
			}
			break;
		case AST_PARENTHESIS_EXPRESSION:
			fprintf(yyout, "(");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, ")");
			break;
		case AST_FUNCT_CALL_EXPRESSION:
			astPrintTreeSrc(node->children[0]);
			break;
		case AST_LITERAL_EXPRESSION:
			fprintf(yyout, " %s ", node->symbol->text);
			break;
		case AST_VECTOR_EXPRESSION:
			fprintf(yyout, " %s[", node->symbol->text);
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, "]");
			break;
		case AST_EQUAL_OP:
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, "==");
			astPrintTreeSrc(node->children[1]);
			break;
		case AST_DIFF_OP:
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, "!=");
			astPrintTreeSrc(node->children[1]);
			break;
		case AST_LT_OP:
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, "<=");
			astPrintTreeSrc(node->children[1]);
			break;
		case AST_GT_OP:
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, ">=");
			astPrintTreeSrc(node->children[1]);
			break;
		case AST_OR_OP:
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, "||");
			astPrintTreeSrc(node->children[1]);
			break;
		case AST_AND_OP:
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, "&&");
			astPrintTreeSrc(node->children[1]);
			break;
		case AST_SUM_OP:
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, "+");
			astPrintTreeSrc(node->children[1]);
			break;
		case AST_SUB_OP:
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, "-");
			astPrintTreeSrc(node->children[1]);
			break;
		case AST_DIV_OP:
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, "/");
			astPrintTreeSrc(node->children[1]);
			break;
		case AST_MULT_OP:
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, "*");
			astPrintTreeSrc(node->children[1]);
			break;
		case AST_INT:
			fprintf(yyout, " int ");
			break;
		case AST_CHAR:
			fprintf(yyout, " char ");
			break;
		case AST_BOOL:
			fprintf(yyout, " bool ");
			break;
		case AST_REAL:
			fprintf(yyout, " real ");
			break;
		default: break;
	}
}


void astPrintNode(ASTREE *node) {
	if (node == 0)
		return;

	printf("ASTREE(");

	switch(node->type) {
		case AST_SYMBOL: printf("Hash symbol");
			break;
		case AST_SYMBOL_VEC: printf("Vector symbol");
			break;
		case AST_SYMBOL_LIT: printf("Literal symbol");
			break;
		case AST_OP_SUM: printf("+ operation");
			break;
		case AST_OP_SUB: printf("- operation");
			break;
		case AST_OP_MUL: printf("* operation");
			break;
		case AST_OP_DIV: printf("/ operation");
			break;
		case AST_OP_LES: printf("< operation");
			break;
		case AST_OP_GRE: printf("> operation");
			break;
		case AST_OP_LE: printf("<= operation");
			break;
		case AST_OP_GE: printf(">= operation");
			break;
		case AST_OP_EQ: printf("== operation");
			break;
		case AST_OP_NE: printf("!= operation");
			break;
		case AST_OP_AND: printf("AND operation");
			break;
		case AST_OP_OR: printf("OR operation");
			break;
		case AST_LIST_E: printf("Expression list");
			break;
		case AST_IF: printf("If");
			break;
		case AST_WHILE: printf("While");
			break;
		case AST_RET: printf("Return");
			break;
		case AST_INP: printf("Input");
			break;
		case AST_OUT: printf("Output");
			break;
		case AST_ATR_VAR: printf("Variable atribution");
			break;
		case AST_ATR_VEC: printf("Vector atribution");
			break;
		case AST_CHAM_F: printf("Function call");
			break;
		case AST_SEQ: printf("Command sequence");
			break;
		case AST_PARAM: printf("Parameter");
			break;
		case AST_T_INT: printf("Int type");
			break;
		case AST_T_FLO: printf("Float type");
			break;
		case AST_T_BOO: printf("Bool type");
			break;
		case AST_T_CHA: printf("Char type");
			break;
		case AST_LIST_P: printf("Parameter list");
			break;
		case AST_DEF_F: printf("Function definition");
			break;
		case AST_DECL_LOC: printf("Local declaration");
			break;
		case AST_DECL_VEC: printf("Vector declaration");
			break;
		case AST_VEC_SIZE: printf("Vector size");
			break;
		case AST_DECL_VAR: printf("Variable declaration");
			break;
		case AST_DECL_GL: printf("Global declaration");
			break;
		case AST_PROG: printf("Program");
			break;
		case AST_BLO_COM: printf("Command block");
			break;
		case AST_COM: printf("Command");
			break;
		case AST_EMPTY: printf("Empty");
			break;
		default: printf("UNKNOWN");
			break;
	}

	if (node->symbol != 0)
		printf(", %s", node->symbol->text);

	printf(");\n");
}
