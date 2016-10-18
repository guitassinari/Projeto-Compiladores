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
				fprintf(yyout, " %d ", node->symbol->value);
				astPrintTreeSrc(node->children[0]);
				astPrintTreeSrc(node->children[1]);
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
				fprintf(yyout, " %s ", node->symbol->value);
			}
			if(node->children[0] != 0){
				astPrintTreeSrc(node->children[0]);
			}
			if(node->children[1] != 0){
				astPrintTreeSrc(node->children[1]);
			}
			break;
		case AST_FUNCT_CALL:
			fprintf(yyout, "%s (", node->symbol->value);
			astPrintTreeSrc(node->children[0]);
			fprintf(yyout, ")");
			break;
		case AST_FUNCT_CALL_PARAMS:
		 	fprintf(yyout, "%s", node->symbol->value);
			astPrintTreeSrc(node->children[0]);
			break;
		case AST_FUNCT_CALL_PARAMS_CONT:
			if(node->children[0] != 0){
				fprintf(yyout, ",");
				fprintf(yyout, "%s (", node->symbol->value);
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
			fprintf(yyout, " %s ", node->symbol->value);
			break;
		case AST_VECTOR_EXPRESSION:
			fprintf(yyout, " %s[", node->symbol->value);
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

		printf("%d-", node->type);
	printf("ASTREE(");

	switch(node->type) {
		case AST_DECL_LIST: printf("DECLARATION LIST");
			break;
		case AST_VAR_DECL: printf("VAR DECLARATION");
			break;
		case AST_VEC_DECL: printf("VECTOR DECLARATION");
			break;
		case AST_ARRAY_INIT: printf("ARRAY INIT");
			break;
		case AST_FUNCT_DECL: printf("FUNCTION DECLARATION");
			break;
		case AST_FUNCT_PARAMS_DEF: printf("FUNCT PARAMS DEFINITION");
			break;
		case AST_PARAMS_DEF_CONT: printf("FUNCT PARAMS DEFINITION CONT");
			break;
		case AST_CMD_BLOCK: printf("COMMAND BLOCK");
			break;
		case AST_CMD_BLOCK_LIST: printf("COMMAND BLOCK LIST");
			break;
		case AST_CMD_BLOCK_LIST_CONT:	printf("COMMAND BLOCK LIST CONT");
			break;
		case AST_PRINT: printf("PRINT");
			break;
		case AST_RETURN: printf("RETURN");
			break;
		case AST_READ: printf("READ");
			break;
		case AST_ATTRIBUTION: printf("ATTRIBUTION");
			break;
		case AST_VECTOR_ATTRIBUTION: printf("VECTOR ATTRIBUTION");
			break;
		case AST_IF_ELSE: printf("IF ELSE");
			break;
		case AST_IF: printf("IF");
			break;
		case AST_FOR: printf("FOR");
			break;
		case AST_FOR_TO: printf("FOR TO");
			break;
		case AST_CMD_CMD_BLOCK: printf("COMMAND COMMAND BLOCK");
			break;
		case AST_CMD_EMPTY: printf("EMPTY");
			break;
		case AST_PRINT_LIST: printf("PRINT LIST");
			break;
		case AST_FUNCT_CALL: printf("FUNCTION CALL");
			break;
		case AST_FUNCT_CALL_PARAMS: printf("FUNCTION CALL PARAMS");
			break;
		case AST_FUNCT_CALL_PARAMS_CONT: printf("FUNCTION CALL PARAMS CONT");
			break;
		case AST_PARENTHESIS_EXPRESSION: printf("PARENTHESIS EXPRESSION");
			break;
		case AST_FUNCT_CALL_EXPRESSION: printf("FUNCT CALL EXPRESSION");
			break;
		case AST_LITERAL_EXPRESSION: printf("LITERAL EXPRESSION");
			break;
		case AST_VECTOR_EXPRESSION: printf("VECTOR EXPRESSION");
			break;
		case AST_EQUAL_OP: printf("EQUA EXPRESSION");
			break;
		case AST_DIFF_OP: printf("DIFF EXPRESSION");
			break;
		case AST_LT_OP: printf("LESS THEN EXPRESSION");
			break;
		case AST_GT_OP: printf("GREATHER THEN EXPRESSION");
			break;
		case AST_OR_OP: printf("OR EXPRESSION");
			break;
		case AST_AND_OP: printf("AND EXPRESSION");
			break;
		case AST_SUM_OP: printf("SUM EXPRESSION");
			break;
		case AST_SUB_OP: printf("SUB EXPRESSION");
			break;
		case AST_DIV_OP: printf("DIV EXPRESSION");
			break;
		case AST_MULT_OP: printf("MULT EXPRESSION");
			break;
		case AST_INT: printf("INT");
			break;
		case AST_CHAR: printf("CHAR");
			break;
		case AST_BOOL: printf("BOOL");
			break;
		case AST_REAL: printf("REAL");
			break;
		default: printf("UNKNOWN");
			break;
	}

	if (node->symbol != 0)
		printf(", %s", node->symbol->value);

	printf(");\n");
}
