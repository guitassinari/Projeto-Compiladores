/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "parser.y"
  #include "hash.h"
  #include "astree.h"
  #include "semantic.h"
  #include <stdio.h>
  #include <stdlib.h>
#line 9 "parser.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	ASTREE *astree;
	entry_t *symbol;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 39 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define KW_INT 257
#define KW_CHAR 258
#define KW_BOOL 259
#define KW_REAL 260
#define READ 261
#define PRINT 262
#define RETURN 263
#define TO 264
#define FOR 265
#define IF 266
#define THEN 267
#define ELSE 268
#define END 269
#define EQUAL 270
#define DIFFERENT 271
#define LESS_THEN 272
#define GREATHER_THEN 273
#define OR 274
#define AND 275
#define CHAR_LIT 276
#define INT_LIT 277
#define BOOL_LIT 278
#define IDENTIFIER 279
#define STRING 280
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    1,    1,    2,    2,    2,    2,    2,
    2,    3,    3,    3,    3,    3,    3,    4,    5,    5,
    6,    6,    7,    8,    9,    9,   10,   10,   10,   10,
   10,   10,   10,   10,   10,   10,   10,   11,   11,   11,
   12,   13,   13,   13,   13,   13,   14,   14,   15,   15,
   15,   15,   15,   15,   15,   15,   15,   15,   15,   15,
   15,   15,   15,   15,   15,   16,   16,   16,   16,
};
static const YYINT yylen[] = {                            2,
    1,    2,    2,    1,    1,    5,    5,    5,    5,    8,
    6,    2,    2,    2,    2,    2,    0,    7,    3,    0,
    4,    0,    3,    3,    3,    0,    2,    2,    2,    3,
    6,    8,    6,    5,    9,    1,    0,    2,    2,    0,
    4,    2,    2,    2,    2,    2,    2,    0,    3,    1,
    1,    1,    1,    1,    4,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    1,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
   66,   67,   68,   69,    0,    1,    0,    0,    0,    2,
    3,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    8,    7,    6,    9,    0,    0,    0,    0,
   11,    0,    0,    0,   19,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   36,    0,    0,
   18,    0,   14,   13,   12,   16,   15,   10,   29,   52,
   51,   53,    0,    0,    0,   27,   50,    0,    0,    0,
    0,    0,    0,   23,    0,    0,    0,    0,   38,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   39,    0,    0,    0,    0,    0,   24,    0,   21,    0,
    0,    0,    0,    0,    0,    0,   49,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   55,    0,   44,   43,   46,   42,   45,   41,
    0,   34,    0,    0,   25,   47,    0,    0,    0,    0,
    0,    0,   32,   35,
};
static const YYINT yydgoto[] = {                          5,
    6,    7,   41,    8,   21,   35,   48,   49,   97,   98,
   66,   67,  106,  125,   68,    9,
};
static const YYINT yysindex[] = {                      -173,
    0,    0,    0,    0,    0,    0, -173, -173, -275,    0,
    0,  -29, -245, -256, -173,  -34,  -32,  -18,  -16,  -65,
   17, -227,    0,    0,    0,    0,   10,  -49,   28, -185,
    0,  201,   30, -173,    0, -185, -185, -185, -185, -185,
   38, -203,  -30,  -10,   58,   63,  -38,    0,  -19,   49,
    0, -170,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -25,  -30,  -10,    0,    0,  -40,  177,  114,
  -10,  -10,  -10,    0,  201,   28,  -10, -118,    0,  125,
  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,  -10,
    0,  -27,  135,  142,  165,  177,    0,   53,    0,  171,
   75,   75,   75,   75,   75,   79,    0,  177,  177,  177,
  177,  177,  177,  260,  260, -224, -224,  -10,  201, -143,
   67,  201,    0, -118,    0,    0,    0,    0,    0,    0,
  238,    0,  201,  -10,    0,    0,  -10, -139,  177,  149,
  201,  201,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,  131,  132,    0,    0,
    0,    0,    0,    0,   84,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   92,   77,
    0,   78,    0,    0,    0,   77,   77,   77,   77,   77,
    0,    0,  -53,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  106,  -53,    0,    0,    0,  -53,  -51,    0,
    0,    0,    0,    0,  -50,   92,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  159,    0,    0,    0,  -47,    0,    0,    0,    0,
   93,   93,   93,   93,   93,    0,    0,   37,   42,   59,
   64,   81,   86,   14,   20,  -23,   -3,    0,  -45,    0,
    0,  -50,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -45,    0,    0,    0,    0,   80,  -43,    0,
  -45,  -45,    0,    0,
};
static const YYINT yygindex[] = {                         0,
   73,    0,  420,    0,    0,   62,  113,    0,   21,  -31,
    3,    0,   18,   12,  411,   11,
};
#define YYTABLESIZE 548
static const YYINT yytable[] = {                         65,
   50,   90,   88,   12,   87,   40,   89,   28,   37,   65,
   15,   30,   78,   37,   78,   31,   64,   64,   64,   64,
   20,   64,   73,   64,   23,   22,   24,   27,   13,   65,
   16,   17,   18,  118,   19,   64,   65,   65,   65,   65,
   25,   65,   26,   65,   52,   81,   82,   83,   84,   85,
   86,   29,   72,   63,   63,   65,   63,   28,   63,   62,
   62,   14,   62,   77,   62,   77,   79,   30,   31,   64,
   91,   34,   63,   32,   26,   59,   56,   56,   62,   10,
   11,   57,   57,    1,    2,    3,    4,  132,   51,   65,
   36,   37,   38,   39,   40,   56,   58,   70,   58,   58,
   57,  138,   71,   59,   59,   74,   63,   75,   76,  143,
  144,  122,   62,  126,  127,  128,  129,   58,  124,  130,
   60,   60,   59,  133,   20,   61,   61,  134,  141,   56,
    5,    4,   22,   48,   57,   17,   37,   99,   33,   60,
   33,  136,  135,    0,   61,    0,   54,   54,   54,    0,
   54,   58,   54,   65,    0,    0,   59,  101,  102,  103,
  104,  105,    0,    0,   54,  107,   90,   88,    0,   87,
    0,   89,    0,   60,    0,  119,   90,   88,   61,   87,
    0,   89,  120,   90,   88,    0,   87,    0,   89,  142,
   90,   88,    0,   87,    0,   89,    0,    0,   54,   54,
   54,   54,    0,   54,    0,   54,   90,   88,    0,   87,
    0,   89,   90,   88,   40,   87,   28,   89,   90,   88,
   30,   87,   37,   89,   31,    0,    0,    0,    0,   81,
   82,   83,   84,   85,   86,   60,   61,   62,   63,   64,
   64,    0,    0,    0,   64,   60,   61,   62,   63,   64,
    0,    0,   64,   64,   64,   64,   64,  121,    0,    0,
   65,    0,    0,  123,   65,   60,   61,   62,   63,    0,
    0,    0,   65,   65,   65,   65,   65,   63,    0,   90,
   88,   63,   87,   62,   89,    0,    0,   62,    0,   63,
   63,   63,   63,   63,    0,   62,   62,   62,   62,   62,
   56,   90,    0,    0,   56,   57,   89,    0,    0,   57,
    0,    0,   56,   56,   56,   56,   56,   57,   57,   57,
   57,   57,   58,   32,    0,    0,   58,   59,    0,    0,
    0,   59,    0,    0,   58,   58,   58,   58,   58,   59,
   59,   59,   59,   59,   60,    0,    0,    0,   60,   61,
    0,    0,    0,   61,    0,    0,   60,   60,   60,   60,
   60,   61,   61,   61,   61,   61,    0,    0,    0,   54,
    0,    0,    0,   54,    0,   54,   54,   54,   54,   54,
   54,   54,   54,   54,   54,   54,    0,    0,    0,   60,
   61,   62,   92,    0,   81,   82,   83,   84,   85,   86,
    0,    0,    0,    0,   81,   82,   83,   84,   85,   86,
    0,   81,   82,   83,   84,   85,   86,    0,   81,   82,
   83,   84,   85,   86,    0,    0,    0,    0,   54,   54,
   54,   54,   54,   54,   81,   82,   83,   84,   85,   86,
   81,   82,   83,   84,   85,   86,   81,   82,   83,   84,
   85,   86,    0,    0,   69,   53,   54,   55,   56,   57,
    0,   42,   43,   44,    0,   45,   46,    0,    0,    0,
    0,    0,    0,    0,    0,   80,    0,    0,    0,   47,
   93,   94,   95,   96,    0,    0,    0,  100,    0,    0,
    0,  108,  109,  110,  111,  112,  113,  114,  115,  116,
  117,  137,    0,    0,    0,    0,    0,   81,   82,   83,
   84,   85,   86,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  131,   81,
   82,   83,   84,   85,   86,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  139,    0,    0,  140,
};
static const YYINT yycheck[] = {                         40,
   32,   42,   43,  279,   45,   59,   47,   59,   59,   40,
   40,   59,   40,   59,   40,   59,   40,   41,   42,   43,
  277,   45,   61,   47,   59,   15,   59,   93,   58,   40,
  276,  277,  278,   61,  280,   59,   40,   41,   42,   43,
   59,   45,   59,   47,   34,  270,  271,  272,  273,  274,
  275,  279,   91,   40,   41,   59,   43,   41,   45,   40,
   41,   91,   43,   91,   45,   91,   64,   58,   59,   93,
   68,   44,   59,  123,  125,  279,   40,   41,   59,    7,
    8,   40,   41,  257,  258,  259,  260,  119,   59,   93,
  276,  277,  278,  279,  280,   59,   59,   40,   40,   41,
   59,  133,   40,   40,   41,  125,   93,   59,  279,  141,
  142,   59,   93,  102,  103,  104,  105,   59,   44,   41,
   40,   41,   59,  267,   41,   40,   41,   61,  268,   93,
    0,    0,   41,   41,   93,   59,   59,   76,   59,   59,
   28,  124,  122,   -1,   59,   -1,   41,   42,   43,   -1,
   45,   93,   47,   40,   -1,   -1,   93,  276,  277,  278,
  279,  280,   -1,   -1,   59,   41,   42,   43,   -1,   45,
   -1,   47,   -1,   93,   -1,   41,   42,   43,   93,   45,
   -1,   47,   41,   42,   43,   -1,   45,   -1,   47,   41,
   42,   43,   -1,   45,   -1,   47,   -1,   -1,   93,   41,
   42,   43,   -1,   45,   -1,   47,   42,   43,   -1,   45,
   -1,   47,   42,   43,  268,   45,  268,   47,   42,   43,
  268,   45,  268,   47,  268,   -1,   -1,   -1,   -1,  270,
  271,  272,  273,  274,  275,  276,  277,  278,  279,  280,
  264,   -1,   -1,   -1,  268,  276,  277,  278,  279,  280,
   -1,   -1,  276,  277,  278,  279,  280,   93,   -1,   -1,
  264,   -1,   -1,   93,  268,  276,  277,  278,  279,   -1,
   -1,   -1,  276,  277,  278,  279,  280,  264,   -1,   42,
   43,  268,   45,  264,   47,   -1,   -1,  268,   -1,  276,
  277,  278,  279,  280,   -1,  276,  277,  278,  279,  280,
  264,   42,   -1,   -1,  268,  264,   47,   -1,   -1,  268,
   -1,   -1,  276,  277,  278,  279,  280,  276,  277,  278,
  279,  280,  264,  123,   -1,   -1,  268,  264,   -1,   -1,
   -1,  268,   -1,   -1,  276,  277,  278,  279,  280,  276,
  277,  278,  279,  280,  264,   -1,   -1,   -1,  268,  264,
   -1,   -1,   -1,  268,   -1,   -1,  276,  277,  278,  279,
  280,  276,  277,  278,  279,  280,   -1,   -1,   -1,  264,
   -1,   -1,   -1,  268,   -1,  270,  271,  272,  273,  274,
  275,  276,  277,  278,  279,  280,   -1,   -1,   -1,  276,
  277,  278,  279,   -1,  270,  271,  272,  273,  274,  275,
   -1,   -1,   -1,   -1,  270,  271,  272,  273,  274,  275,
   -1,  270,  271,  272,  273,  274,  275,   -1,  270,  271,
  272,  273,  274,  275,   -1,   -1,   -1,   -1,  270,  271,
  272,  273,  274,  275,  270,  271,  272,  273,  274,  275,
  270,  271,  272,  273,  274,  275,  270,  271,  272,  273,
  274,  275,   -1,   -1,   44,   36,   37,   38,   39,   40,
   -1,  261,  262,  263,   -1,  265,  266,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   65,   -1,   -1,   -1,  279,
   70,   71,   72,   73,   -1,   -1,   -1,   77,   -1,   -1,
   -1,   81,   82,   83,   84,   85,   86,   87,   88,   89,
   90,  264,   -1,   -1,   -1,   -1,   -1,  270,  271,  272,
  273,  274,  275,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  118,  270,
  271,  272,  273,  274,  275,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  134,   -1,   -1,  137,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 280
#define YYUNDFTOKEN 299
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,
"':'","';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,
"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"KW_INT","KW_CHAR","KW_BOOL","KW_REAL","READ",
"PRINT","RETURN","TO","FOR","IF","THEN","ELSE","END","EQUAL","DIFFERENT",
"LESS_THEN","GREATHER_THEN","OR","AND","CHAR_LIT","INT_LIT","BOOL_LIT",
"IDENTIFIER","STRING",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : declarationList",
"declarationList : variableDeclaration declarationList",
"declarationList : functDeclaration declarationList",
"declarationList : functDeclaration",
"declarationList : variableDeclaration",
"variableDeclaration : type IDENTIFIER ':' BOOL_LIT ';'",
"variableDeclaration : type IDENTIFIER ':' INT_LIT ';'",
"variableDeclaration : type IDENTIFIER ':' CHAR_LIT ';'",
"variableDeclaration : type IDENTIFIER ':' STRING ';'",
"variableDeclaration : type IDENTIFIER '[' INT_LIT ']' ':' arrayInitLiterals ';'",
"variableDeclaration : type IDENTIFIER '[' INT_LIT ']' ';'",
"arrayInitLiterals : BOOL_LIT arrayInitLiterals",
"arrayInitLiterals : INT_LIT arrayInitLiterals",
"arrayInitLiterals : CHAR_LIT arrayInitLiterals",
"arrayInitLiterals : STRING arrayInitLiterals",
"arrayInitLiterals : IDENTIFIER arrayInitLiterals",
"arrayInitLiterals :",
"functDeclaration : type IDENTIFIER '(' functParamsDef ')' commandBlock ';'",
"functParamsDef : type IDENTIFIER functParamsDefCont",
"functParamsDef :",
"functParamsDefCont : ',' type IDENTIFIER functParamsDefCont",
"functParamsDefCont :",
"commandBlock : '{' commandBlockList '}'",
"commandBlockList : command ';' commandBlockListCont",
"commandBlockListCont : command ';' commandBlockListCont",
"commandBlockListCont :",
"command : PRINT printList",
"command : RETURN expression",
"command : READ IDENTIFIER",
"command : IDENTIFIER '=' expression",
"command : IDENTIFIER '[' expression ']' '=' expression",
"command : IF '(' expression ')' THEN command ELSE command",
"command : IF '(' expression ')' THEN command",
"command : FOR '(' expression ')' command",
"command : FOR '(' IDENTIFIER '=' expression TO expression ')' command",
"command : commandBlock",
"command :",
"printList : STRING printList",
"printList : expression printList",
"printList :",
"functCall : IDENTIFIER '(' functParams ')'",
"functParams : IDENTIFIER functParamsCont",
"functParams : INT_LIT functParamsCont",
"functParams : CHAR_LIT functParamsCont",
"functParams : STRING functParamsCont",
"functParams : BOOL_LIT functParamsCont",
"functParamsCont : ',' functParams",
"functParamsCont :",
"expression : '(' expression ')'",
"expression : functCall",
"expression : INT_LIT",
"expression : CHAR_LIT",
"expression : BOOL_LIT",
"expression : IDENTIFIER",
"expression : IDENTIFIER '[' expression ']'",
"expression : expression EQUAL expression",
"expression : expression DIFFERENT expression",
"expression : expression LESS_THEN expression",
"expression : expression GREATHER_THEN expression",
"expression : expression OR expression",
"expression : expression AND expression",
"expression : expression '+' expression",
"expression : expression '-' expression",
"expression : expression '/' expression",
"expression : expression '*' expression",
"type : KW_INT",
"type : KW_CHAR",
"type : KW_BOOL",
"type : KW_REAL",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 49 "parser.y"
	{yyval.astree = yystack.l_mark[0].astree; astPrintTree(yyval.astree); astPrintTreeSrc(yyval.astree); checkDeclarations(yyval.astree); }
break;
case 2:
#line 54 "parser.y"
	{  yyval.astree = astCreate(AST_DECL_LIST, 0, yystack.l_mark[-1].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 3:
#line 55 "parser.y"
	{ yyval.astree = astCreate(AST_DECL_LIST, 0, yystack.l_mark[-1].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 4:
#line 56 "parser.y"
	{ yyval.astree = astCreate(AST_DECL_LIST, 0, yystack.l_mark[0].astree, 0, 0, 0); }
break;
case 5:
#line 57 "parser.y"
	{ yyval.astree = astCreate(AST_DECL_LIST, 0, yystack.l_mark[0].astree, 0, 0, 0); }
break;
case 6:
#line 61 "parser.y"
	{ yyval.astree = astCreate(AST_VAR_DECL, yystack.l_mark[-3].symbol, yystack.l_mark[-4].astree, astCreate(AST_VAR_INIT, yystack.l_mark[-1].symbol, 0, 0, 0, 0), 0, 0); }
break;
case 7:
#line 62 "parser.y"
	{ yyval.astree = astCreate(AST_VAR_DECL, yystack.l_mark[-3].symbol, yystack.l_mark[-4].astree, astCreate(AST_VAR_INIT, yystack.l_mark[-1].symbol, 0, 0, 0, 0), 0, 0); }
break;
case 8:
#line 63 "parser.y"
	{ yyval.astree = astCreate(AST_VAR_DECL, yystack.l_mark[-3].symbol, yystack.l_mark[-4].astree, astCreate(AST_VAR_INIT, yystack.l_mark[-1].symbol, 0, 0, 0, 0), 0, 0); }
break;
case 9:
#line 64 "parser.y"
	{ yyval.astree = astCreate(AST_VAR_DECL, yystack.l_mark[-3].symbol, yystack.l_mark[-4].astree, astCreate(AST_VAR_INIT, yystack.l_mark[-1].symbol, 0, 0, 0, 0), 0, 0); }
break;
case 10:
#line 65 "parser.y"
	{ yyval.astree = astCreate(AST_VEC_DECL, yystack.l_mark[-6].symbol, yystack.l_mark[-7].astree, astCreate(AST_VEC_SIZE, yystack.l_mark[-4].symbol, 0, 0, 0, 0), yystack.l_mark[-1].astree, 0); }
break;
case 11:
#line 66 "parser.y"
	{ yyval.astree = astCreate(AST_VEC_DECL, yystack.l_mark[-4].symbol, yystack.l_mark[-5].astree, astCreate(AST_VEC_SIZE, yystack.l_mark[-2].symbol, 0, 0, 0, 0), 0, 0); }
break;
case 12:
#line 69 "parser.y"
	{ yyval.astree = astCreate(AST_ARRAY_INIT, yystack.l_mark[-1].symbol, yystack.l_mark[0].astree, 0, 0, 0); }
break;
case 13:
#line 70 "parser.y"
	{ yyval.astree = astCreate(AST_ARRAY_INIT, yystack.l_mark[-1].symbol, yystack.l_mark[0].astree, 0, 0, 0); }
break;
case 14:
#line 71 "parser.y"
	{ yyval.astree = astCreate(AST_ARRAY_INIT, yystack.l_mark[-1].symbol, yystack.l_mark[0].astree, 0, 0, 0); }
break;
case 15:
#line 72 "parser.y"
	{ yyval.astree = astCreate(AST_ARRAY_INIT, yystack.l_mark[-1].symbol, yystack.l_mark[0].astree, 0, 0, 0); }
break;
case 16:
#line 73 "parser.y"
	{ yyval.astree = astCreate(AST_ARRAY_INIT, yystack.l_mark[-1].symbol, yystack.l_mark[0].astree, 0, 0, 0); }
break;
case 17:
#line 74 "parser.y"
	{ yyval.astree = astCreate(AST_ARRAY_INIT, 0, 0, 0, 0, 0); }
break;
case 18:
#line 79 "parser.y"
	{yyval.astree = astCreate(AST_FUNCT_DECL, yystack.l_mark[-5].symbol, yystack.l_mark[-6].astree, yystack.l_mark[-3].astree, yystack.l_mark[-1].astree, 0); }
break;
case 19:
#line 81 "parser.y"
	{ yyval.astree = astCreate(AST_FUNCT_PARAMS_DEF, yystack.l_mark[-1].symbol, yystack.l_mark[-2].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 20:
#line 82 "parser.y"
	{ yyval.astree = astCreate(AST_FUNCT_PARAMS_DEF, 0, 0, 0, 0, 0); }
break;
case 21:
#line 84 "parser.y"
	{ yyval.astree = astCreate(AST_PARAMS_DEF_CONT, yystack.l_mark[-1].symbol, yystack.l_mark[-2].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 22:
#line 85 "parser.y"
	{ yyval.astree = astCreate(AST_PARAMS_DEF_CONT, 0, 0, 0, 0, 0); }
break;
case 23:
#line 88 "parser.y"
	{ yyval.astree = astCreate(AST_CMD_BLOCK, 0, yystack.l_mark[-1].astree, 0, 0, 0); }
break;
case 24:
#line 90 "parser.y"
	{ yyval.astree = astCreate(AST_CMD_BLOCK_LIST, 0, yystack.l_mark[-2].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 25:
#line 92 "parser.y"
	{ yyval.astree = astCreate(AST_CMD_BLOCK_LIST_CONT, 0, yystack.l_mark[-2].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 26:
#line 93 "parser.y"
	{ yyval.astree = astCreate(AST_CMD_BLOCK_LIST_CONT, 0, 0, 0, 0, 0); }
break;
case 27:
#line 95 "parser.y"
	{ yyval.astree = astCreate(AST_PRINT, 0, yystack.l_mark[0].astree, 0, 0, 0); }
break;
case 28:
#line 96 "parser.y"
	{ yyval.astree = astCreate(AST_RETURN, 0, yystack.l_mark[0].astree, 0, 0, 0); }
break;
case 29:
#line 97 "parser.y"
	{ yyval.astree = astCreate(AST_READ, yystack.l_mark[0].symbol, 0, 0, 0, 0); }
break;
case 30:
#line 98 "parser.y"
	{ yyval.astree = astCreate(AST_ATTRIBUTION, yystack.l_mark[-2].symbol, yystack.l_mark[0].astree, 0, 0, 0); }
break;
case 31:
#line 99 "parser.y"
	{ yyval.astree = astCreate(AST_VECTOR_ATTRIBUTION, yystack.l_mark[-5].symbol, yystack.l_mark[-3].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 32:
#line 100 "parser.y"
	{ yyval.astree = astCreate(AST_IF_ELSE, 0, yystack.l_mark[-5].astree, yystack.l_mark[-2].astree, yystack.l_mark[0].astree, 0); }
break;
case 33:
#line 101 "parser.y"
	{ yyval.astree = astCreate(AST_IF, 0, yystack.l_mark[-3].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 34:
#line 102 "parser.y"
	{ yyval.astree = astCreate(AST_FOR, 0, yystack.l_mark[-2].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 35:
#line 103 "parser.y"
	{ yyval.astree = astCreate(AST_FOR_TO, yystack.l_mark[-6].symbol, yystack.l_mark[-4].astree, yystack.l_mark[-2].astree, yystack.l_mark[0].astree, 0); }
break;
case 36:
#line 104 "parser.y"
	{ yyval.astree = astCreate(AST_CMD_CMD_BLOCK, 0, yystack.l_mark[0].astree, 0, 0, 0); }
break;
case 37:
#line 105 "parser.y"
	{ yyval.astree = astCreate(AST_CMD_EMPTY, 0, 0, 0, 0, 0); }
break;
case 38:
#line 107 "parser.y"
	{ yyval.astree = astCreate(AST_PRINT_LIST, yystack.l_mark[-1].symbol, yystack.l_mark[0].astree, 0, 0, 0); }
break;
case 39:
#line 108 "parser.y"
	{ yyval.astree = astCreate(AST_PRINT_LIST, 0, yystack.l_mark[-1].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 40:
#line 109 "parser.y"
	{ yyval.astree = astCreate(AST_PRINT_LIST, 0, 0, 0, 0, 0); }
break;
case 41:
#line 114 "parser.y"
	{ yyval.astree = astCreate(AST_FUNCT_CALL, yystack.l_mark[-3].symbol, yystack.l_mark[-1].astree, 0, 0, 0); }
break;
case 42:
#line 116 "parser.y"
	{ yyval.astree = astCreate(AST_FUNCT_CALL_PARAMS, yystack.l_mark[-1].symbol, yystack.l_mark[0].astree, 0, 0, 0); }
break;
case 43:
#line 117 "parser.y"
	{ yyval.astree = astCreate(AST_FUNCT_CALL_PARAMS, yystack.l_mark[-1].symbol, yystack.l_mark[0].astree, 0, 0, 0); }
break;
case 44:
#line 118 "parser.y"
	{ yyval.astree = astCreate(AST_FUNCT_CALL_PARAMS, yystack.l_mark[-1].symbol, yystack.l_mark[0].astree, 0, 0, 0); }
break;
case 45:
#line 119 "parser.y"
	{ yyval.astree = astCreate(AST_FUNCT_CALL_PARAMS, yystack.l_mark[-1].symbol, yystack.l_mark[0].astree, 0, 0, 0); }
break;
case 46:
#line 120 "parser.y"
	{ yyval.astree = astCreate(AST_FUNCT_CALL_PARAMS, yystack.l_mark[-1].symbol, yystack.l_mark[0].astree, 0, 0, 0); }
break;
case 47:
#line 122 "parser.y"
	{ yyval.astree = astCreate(AST_FUNCT_CALL_PARAMS_CONT, 0, yystack.l_mark[0].astree, 0, 0, 0); }
break;
case 48:
#line 123 "parser.y"
	{ yyval.astree = astCreate(AST_FUNCT_CALL_PARAMS_CONT, 0, 0, 0, 0, 0); }
break;
case 49:
#line 128 "parser.y"
	{ yyval.astree = astCreate(AST_PARENTHESIS_EXPRESSION, 0, yystack.l_mark[-1].astree, 0, 0, 0); }
break;
case 50:
#line 129 "parser.y"
	{ yyval.astree = astCreate(AST_FUNCT_CALL_EXPRESSION, 0, yystack.l_mark[0].astree, 0, 0, 0); }
break;
case 51:
#line 130 "parser.y"
	{ yyval.astree = astCreate(AST_LITERAL_EXPRESSION, yystack.l_mark[0].symbol, 0, 0, 0, 0); }
break;
case 52:
#line 131 "parser.y"
	{ yyval.astree = astCreate(AST_LITERAL_EXPRESSION, yystack.l_mark[0].symbol, 0, 0, 0, 0); }
break;
case 53:
#line 132 "parser.y"
	{ yyval.astree = astCreate(AST_LITERAL_EXPRESSION, yystack.l_mark[0].symbol, 0, 0, 0, 0); }
break;
case 54:
#line 133 "parser.y"
	{ yyval.astree = astCreate(AST_VAR_EXPRESSION, yystack.l_mark[0].symbol, 0, 0, 0, 0); }
break;
case 55:
#line 134 "parser.y"
	{ yyval.astree = astCreate(AST_VECTOR_EXPRESSION, yystack.l_mark[-3].symbol, yystack.l_mark[-1].astree, 0, 0, 0); }
break;
case 56:
#line 135 "parser.y"
	{ yyval.astree = astCreate(AST_EQUAL_OP, 0, yystack.l_mark[-2].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 57:
#line 136 "parser.y"
	{ yyval.astree = astCreate(AST_DIFF_OP, 0, yystack.l_mark[-2].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 58:
#line 137 "parser.y"
	{ yyval.astree = astCreate(AST_LT_OP, 0, yystack.l_mark[-2].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 59:
#line 138 "parser.y"
	{ yyval.astree = astCreate(AST_GT_OP, 0, yystack.l_mark[-2].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 60:
#line 139 "parser.y"
	{ yyval.astree = astCreate(AST_OR_OP, 0, yystack.l_mark[-2].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 61:
#line 140 "parser.y"
	{ yyval.astree = astCreate(AST_AND_OP, 0, yystack.l_mark[-2].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 62:
#line 141 "parser.y"
	{ yyval.astree = astCreate(AST_SUM_OP, 0, yystack.l_mark[-2].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 63:
#line 142 "parser.y"
	{ yyval.astree = astCreate(AST_SUB_OP, 0, yystack.l_mark[-2].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 64:
#line 143 "parser.y"
	{ yyval.astree = astCreate(AST_DIV_OP, 0, yystack.l_mark[-2].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 65:
#line 144 "parser.y"
	{ yyval.astree = astCreate(AST_MULT_OP, 0, yystack.l_mark[-2].astree, yystack.l_mark[0].astree, 0, 0); }
break;
case 66:
#line 148 "parser.y"
	{ yyval.astree = astCreate(AST_INT, 0, 0, 0, 0, 0); }
break;
case 67:
#line 149 "parser.y"
	{ yyval.astree = astCreate(AST_CHAR, 0, 0, 0, 0, 0); }
break;
case 68:
#line 150 "parser.y"
	{ yyval.astree = astCreate(AST_BOOL, 0, 0, 0, 0, 0); }
break;
case 69:
#line 151 "parser.y"
	{ yyval.astree = astCreate(AST_REAL, 0, 0, 0, 0, 0); }
break;
#line 897 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
