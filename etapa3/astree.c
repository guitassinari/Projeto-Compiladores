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
		case AST_SYMBOL: fprintf(yyout, "%s", node->symbol->text);
			break;
		case AST_SYMBOL_VEC: fprintf(yyout, "%s[", node->symbol->text);
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, "]");
			break;
		case AST_SYMBOL_LIT: fprintf(yyout, "%s", node->symbol->text);
			break;
		case AST_OP_SUM: fprintf(yyout, "(");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, " + ");
			astPrintTreeSrc(node->children[1]);
			fprintf(yyout, ")");
			break;
		case AST_OP_SUB: fprintf(yyout, "(");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, " - ");
			astPrintTreeSrc(node->children[1]);
			fprintf(yyout, ")");
			break;
		case AST_OP_MUL: fprintf(yyout, "(");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, " * ");
			astPrintTreeSrc(node->children[1]);
			fprintf(yyout, ")");
			break;
		case AST_OP_DIV: fprintf(yyout, "(");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, " / ");
			astPrintTreeSrc(node->children[1]);
			fprintf(yyout, ")");
			break;
		case AST_OP_LES: fprintf(yyout, "(");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, " < ");
			astPrintTreeSrc(node->children[1]);
			fprintf(yyout, ")");
			break;
		case AST_OP_GRE: fprintf(yyout, "(");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, " > ");
			astPrintTreeSrc(node->children[1]);
			fprintf(yyout, ")");
			break;
		case AST_OP_LE: fprintf(yyout, "(");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, " <= ");
			astPrintTreeSrc(node->children[1]);
			fprintf(yyout, ")");
			break;
		case AST_OP_GE: fprintf(yyout, "(");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, " >= ");
			astPrintTreeSrc(node->children[1]);
			fprintf(yyout, ")");
			break;
		case AST_OP_EQ: fprintf(yyout, "(");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, " == ");
			astPrintTreeSrc(node->children[1]);
			fprintf(yyout, ")");
			break;
		case AST_OP_NE: fprintf(yyout, "(");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, " != ");
			astPrintTreeSrc(node->children[1]);
			fprintf(yyout, ")");
			break;
		case AST_OP_AND: fprintf(yyout, "(");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, " && ");
			astPrintTreeSrc(node->children[1]);
			fprintf(yyout, ")");
			break;
		case AST_OP_OR: fprintf(yyout, "(");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, " || ");
			astPrintTreeSrc(node->children[1]);
			fprintf(yyout, ")");
			break;
		case AST_LIST_E: fprintf(yyout, " ");
			astPrintTreeSrc(node->children[0]);
			if(node->children[1] != 0) {
				fprintf(yyout, ",");
				astPrintTreeSrc(node->children[1]);
			}
			break;
		case AST_IF: fprintf(yyout, "if (");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, ")\nthen ");
			astPrintTreeSrc(node->children[1]);
			if(node->children[2] != 0) {
				fprintf(yyout, "\nelse ");
				astPrintTreeSrc(node->children[2]);
			}
			break;
		case AST_WHILE:fprintf(yyout, "while (");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, ")\n");
			astPrintTreeSrc(node->children[1]);
			break;
		case AST_RET: fprintf(yyout, "return ");
			astPrintTreeSrc(node->children[0]);
			break;
		case AST_INP: fprintf(yyout, "input %s", node->symbol->text);
			break;
		case AST_OUT: fprintf(yyout, "output");
			astPrintTreeSrc(node->children[0]);
			break;
		case AST_ATR_VAR: fprintf(yyout, "%s = ", node->symbol->text);
			astPrintTreeSrc(node->children[0]);
			break;
		case AST_ATR_VEC: fprintf(yyout, "%s[", node->symbol->text);
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, "] = ");
			astPrintTreeSrc(node->children[1]);
			break;
		case AST_CHAM_F: fprintf(yyout, "%s (", node->symbol->text);
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, ")");
			break;
		case AST_SEQ: fprintf(yyout, "\n");
			astPrintTreeSrc(node->children[0]);
			if(node->children[1] != 0) {
				fprintf(yyout, ";");
				astPrintTreeSrc(node->children[1]);
			}
			break;
		case AST_PARAM: fprintf(yyout, "%s: ", node->symbol->text);
			astPrintTreeSrc(node->children[0]);
			break;
		case AST_T_INT: fprintf(yyout, "int");
			break;
		case AST_T_FLO: fprintf(yyout, "float");
			break;
		case AST_T_BOO: fprintf(yyout, "bool");
			break;
		case AST_T_CHA: fprintf(yyout, "char");
			break;
		case AST_LIST_P: astPrintTreeSrc(node->children[0]);
			if(node->children[1] != 0) {
				fprintf(yyout, ", ");
				astPrintTreeSrc(node->children[1]);
			}
			break;
		case AST_DEF_F: fprintf(yyout, "\n%s: ", node->symbol->text);
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, "(");
			astPrintTreeSrc(node->children[1]);
			fprintf(yyout, ")\n");
			astPrintTreeSrc(node->children[2]);
			astPrintTreeSrc(node->children[3]);
			fprintf(yyout, ";");
			break;
		case AST_DECL_LOC: astPrintTreeSrc(node->children[0]);
			fprintf(yyout, ";");
			astPrintTreeSrc(node->children[1]);
			fprintf(yyout, "\n");
			break;
		case AST_DECL_VEC: fprintf(yyout, "%s: ", node->symbol->text);
			astPrintTreeSrc(node->children[0]);
			astPrintTreeSrc(node->children[1]);
			break;
		case AST_VEC_SIZE: fprintf(yyout, " [%s]", node->symbol->text);
			break;
		case AST_DECL_VAR: fprintf(yyout, "%s: ", node->symbol->text);
			astPrintTreeSrc(node->children[0]);
			break;
		case AST_DECL_GL: astPrintTreeSrc(node->children[0]);
			fprintf(yyout, ";");
			break;
		case AST_PROG: fprintf(yyout, "\n");
			for(i = 0; i < MAX_CHILDREN; i++)
				astPrintTreeSrc(node->children[i]);
			break;
		case AST_BLO_COM: fprintf(yyout, "{");
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, "\n}");
			break;
		case AST_COM: astPrintTreeSrc(node->children[0]);
			break;
		case AST_EMPTY: fprintf(yyout, "");
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
