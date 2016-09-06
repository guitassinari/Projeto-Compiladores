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
  #include <stdio.h>
  #include <stdlib.h>
#line 24 "y.tab.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

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

#define TYPE 257
#define CHAR_LIT 258
#define INT_LIT 259
#define BOOL_LIT 260
#define IDENTIFIER 261
#define READ 262
#define PRINT 263
#define RETURN 264
#define STRING 265
#define TO 266
#define FOR 267
#define IF 268
#define THEN 269
#define ELSE 270
#define END 271
#define EQUAL 272
#define DIFFERENT 273
#define LESS_THEN 274
#define GREATHER_THEN 275
#define OR 276
#define AND 277
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    2,    2,    2,    2,    2,    2,    4,
    4,    4,    4,    4,    4,    3,    5,    5,    7,    7,
    6,    8,   10,   10,    9,    9,    9,    9,    9,    9,
    9,    9,    9,    9,    9,   11,   11,   11,   13,   14,
   14,   14,   14,   14,   15,   15,   15,   15,   15,   15,
   12,   12,   12,   12,   12,   12,   12,   12,   12,   12,
   12,   12,   12,   12,   12,   12,   12,
};
static const YYINT yylen[] = {                            2,
    1,    2,    2,    5,    5,    5,    5,    8,    6,    2,
    2,    2,    2,    2,    0,    7,    3,    0,    4,    0,
    3,    3,    3,    0,    2,    2,    2,    3,    6,    8,
    6,    5,    9,    1,    0,    2,    2,    0,    4,    2,
    2,    2,    2,    2,    3,    3,    3,    3,    3,    0,
    3,    1,    1,    1,    1,    1,    4,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    1,    0,    0,    0,    2,    3,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    6,    5,
    4,    7,    0,    0,    0,    0,    9,    0,   17,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   34,    0,    0,   16,   12,   11,
   10,   14,   13,    8,    0,    0,    0,   27,   54,   53,
   55,    0,    0,    0,   25,    0,   52,    0,    0,    0,
   21,    0,   19,    0,    0,    0,    0,   36,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   37,
    0,    0,    0,    0,   22,    0,    0,    0,    0,    0,
    0,    0,   51,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   57,    0,
   42,   41,   40,   43,   39,    0,   32,    0,   23,    0,
    0,    0,    0,    0,    0,    0,   47,   46,   45,   48,
    0,    0,    0,   30,   33,
};
static const YYINT yydgoto[] = {                          2,
    3,    4,    5,   37,   18,   45,   29,   46,   94,   95,
   65,   66,   67,  102,  121,
};
static const YYINT yysindex[] = {                      -249,
 -248,    0,    0, -249, -249,  -23,    0,    0, -180, -245,
 -239,  -39,  -35,  -33,  -28,  -60, -220,    7,    0,    0,
    0,    0,   42,   11,  -70, -155,    0, -195,    0,  219,
   18, -155, -155, -155, -155, -155,   23, -174,  -45, -168,
  182,  -30,   26,   55,    0,  -11,   43,    0,    0,    0,
    0,    0,    0,    0,   11,  -30,  -30,    0,    0,    0,
    0,  -21,  182,  -30,    0,  -40,    0,   47,   51,  -30,
    0,  219,    0,   22,   47,  -30, -123,    0,  -13,  -30,
  -30,  -30,  -30,  -30,  -30,  -30,  -30,  -30,  -30,    0,
   20,   -5,    2,   53,    0,   58,   29,   81,   81,   81,
   81,   86,    0,   47,   47,   47,   47,   47,   47,   47,
   47,   47,   47,  -30,  219, -141,  219,  -30,    0, -110,
    0,    0,    0,    0,    0,   41,    0,  219,    0,   47,
   81,   81,   81,   81,  -30, -133,    0,    0,    0,    0,
    9,  219,  219,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   99,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  100,    0,   84,    0,    0,    0,   85,
    0,   84,   84,   84,   84,   84,    0,    0,    0,    0,
  -58,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  100,    0,    0,    0,    0,    0,
    0,  -20,  -58,    0,    0,  -58,    0,  -55,    0,    0,
    0,  -50,    0,    0,  -53,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   16,    0,    0,    0,    0,    0,    0,  104,  104,  104,
  104,    0,    0,   67,   80,   93,  106,  121,  134,  149,
  165,  207,  290,    0,  -47,    0,  -50,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -47,    0,  -44,
  104,  104,  104,  104,    0,   91,    0,    0,    0,    0,
    0,  -47,  -47,    0,    0,
};
static const YYINT yygindex[] = {                         0,
  113,    0,    0,  135,    0,  128,  101,    0,  -19,   37,
   50,  428,    0,    0,   -2,
};
#define YYTABLESIZE 563
static const YYINT yytable[] = {                         64,
   38,   89,   86,   26,   87,   28,   88,    1,   35,   64,
   47,   35,    6,   16,   29,   57,   11,   17,   77,   19,
   56,   56,   56,   20,   56,   21,   56,  103,   89,   86,
   22,   87,   23,   88,    9,  115,   89,   86,   56,   87,
   24,   88,  116,   89,   86,   56,   87,   25,   88,  143,
   89,   86,   30,   87,   28,   88,   56,   56,   56,   77,
   56,   38,   56,   89,   86,   69,   87,   10,   88,   76,
   89,   86,   56,   87,   24,   88,   48,   12,   13,   14,
  114,   54,   89,   86,   15,   87,   55,   88,   89,   86,
   64,   87,   58,   88,   70,  127,  122,  123,  124,   26,
   27,   72,   32,   33,   34,   35,   58,   58,  136,   36,
   76,  117,   78,   71,   96,   90,    7,    8,  118,   59,
   59,  119,  144,  145,  120,   58,  125,  128,  137,  138,
  139,  140,   60,   60,   98,   99,  142,  100,   59,   18,
   20,  101,   15,   35,   50,   61,   61,  131,  132,   31,
  133,   60,   31,  129,  134,   73,    0,    0,    0,   58,
   62,   62,    0,    0,   61,    0,   49,   50,   51,   52,
   53,    0,   59,   63,   63,    0,    0,    0,    0,   62,
    0,    0,    0,    0,    0,   60,    0,    0,   64,   64,
    0,    0,   63,    0,    0,    0,    0,    0,   61,    0,
    0,    0,    0,    0,   65,   65,    0,   64,    0,    0,
    0,   38,    0,   62,   26,    0,   28,   59,   60,   61,
   62,   64,   35,   65,   63,   29,   63,   59,   60,   61,
   62,   80,   81,   82,   83,   84,   85,   56,   56,   56,
   56,   64,    0,    0,   56,   56,   66,   66,    0,   56,
    0,   56,   56,   56,   56,   56,   56,   65,   80,   81,
   82,   83,   84,   85,    0,   66,   80,   81,   82,   83,
   84,   85,    0,   80,   81,   82,   83,   84,   85,    0,
   80,   81,   82,   83,   84,   85,    0,   56,   56,   56,
   56,   56,   56,   80,   81,   82,   83,   84,   85,   66,
   80,   81,   82,   83,   84,   85,  135,    0,   59,   60,
   61,   91,   80,   81,   82,   83,   84,   85,   80,   81,
   82,   83,   84,   85,   58,   58,   58,   58,    0,   67,
   67,   58,   58,    0,    0,    0,   58,   59,   59,   59,
   59,   30,    0,    0,   59,   59,    0,    0,   67,   59,
   60,   60,   60,   60,    0,    0,    0,   60,   60,    0,
    0,    0,   60,   61,   61,   61,   61,    0,    0,    0,
   61,   61,    0,    0,    0,   61,    0,    0,   62,   62,
   62,   62,   67,    0,    0,   62,   62,    0,    0,    0,
   62,   63,   63,   63,   63,    0,    0,    0,   63,   63,
    0,    0,    0,   63,    0,    0,   64,   64,   64,   64,
    0,    0,    0,   64,   64,    0,    0,    0,   64,    0,
    0,    0,   65,   65,   65,   65,    0,    0,    0,   65,
   65,    0,    0,    0,   65,    0,    0,    0,    0,   59,
   60,   61,   62,    0,    0,    0,   63,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   66,   66,   66,   66,    0,   68,
    0,   66,   66,    0,    0,    0,   66,    0,    0,   39,
   40,   41,   42,   74,   75,   43,   44,    0,    0,    0,
    0,   79,    0,    0,    0,    0,   92,   93,    0,    0,
    0,    0,    0,   97,    0,    0,    0,  104,  105,  106,
  107,  108,  109,  110,  111,  112,  113,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  126,    0,    0,    0,  130,    0,   67,   67,   67,
   67,    0,    0,    0,   67,   67,    0,    0,    0,   67,
    0,    0,  141,
};
static const YYINT yycheck[] = {                         40,
   59,   42,   43,   59,   45,   59,   47,  257,   59,   40,
   30,   59,  261,  259,   59,   61,   40,  257,   40,   59,
   41,   42,   43,   59,   45,   59,   47,   41,   42,   43,
   59,   45,   93,   47,   58,   41,   42,   43,   59,   45,
  261,   47,   41,   42,   43,   91,   45,   41,   47,   41,
   42,   43,  123,   45,   44,   47,   41,   42,   43,   40,
   45,  257,   47,   42,   43,   40,   45,   91,   47,   91,
   42,   43,   93,   45,  125,   47,   59,  258,  259,  260,
   61,   59,   42,   43,  265,   45,  261,   47,   42,   43,
   40,   45,  261,   47,   40,  115,   99,  100,  101,   58,
   59,   59,  258,  259,  260,  261,   40,   41,  128,  265,
   91,   59,   63,  125,   93,   66,    4,    5,   61,   40,
   41,   93,  142,  143,   44,   59,   41,  269,  131,  132,
  133,  134,   40,   41,  258,  259,  270,  261,   59,   41,
   41,  265,   59,   59,   41,   40,   41,  258,  259,   59,
  261,   59,   25,  117,  265,   55,   -1,   -1,   -1,   93,
   40,   41,   -1,   -1,   59,   -1,   32,   33,   34,   35,
   36,   -1,   93,   40,   41,   -1,   -1,   -1,   -1,   59,
   -1,   -1,   -1,   -1,   -1,   93,   -1,   -1,   40,   41,
   -1,   -1,   59,   -1,   -1,   -1,   -1,   -1,   93,   -1,
   -1,   -1,   -1,   -1,   40,   41,   -1,   59,   -1,   -1,
   -1,  270,   -1,   93,  270,   -1,  270,  258,  259,  260,
  261,   40,  270,   59,  265,  270,   93,  258,  259,  260,
  261,  272,  273,  274,  275,  276,  277,  258,  259,  260,
  261,   93,   -1,   -1,  265,  266,   40,   41,   -1,  270,
   -1,  272,  273,  274,  275,  276,  277,   93,  272,  273,
  274,  275,  276,  277,   -1,   59,  272,  273,  274,  275,
  276,  277,   -1,  272,  273,  274,  275,  276,  277,   -1,
  272,  273,  274,  275,  276,  277,   -1,  272,  273,  274,
  275,  276,  277,  272,  273,  274,  275,  276,  277,   93,
  272,  273,  274,  275,  276,  277,  266,   -1,  258,  259,
  260,  261,  272,  273,  274,  275,  276,  277,  272,  273,
  274,  275,  276,  277,  258,  259,  260,  261,   -1,   40,
   41,  265,  266,   -1,   -1,   -1,  270,  258,  259,  260,
  261,  123,   -1,   -1,  265,  266,   -1,   -1,   59,  270,
  258,  259,  260,  261,   -1,   -1,   -1,  265,  266,   -1,
   -1,   -1,  270,  258,  259,  260,  261,   -1,   -1,   -1,
  265,  266,   -1,   -1,   -1,  270,   -1,   -1,  258,  259,
  260,  261,   93,   -1,   -1,  265,  266,   -1,   -1,   -1,
  270,  258,  259,  260,  261,   -1,   -1,   -1,  265,  266,
   -1,   -1,   -1,  270,   -1,   -1,  258,  259,  260,  261,
   -1,   -1,   -1,  265,  266,   -1,   -1,   -1,  270,   -1,
   -1,   -1,  258,  259,  260,  261,   -1,   -1,   -1,  265,
  266,   -1,   -1,   -1,  270,   -1,   -1,   -1,   -1,  258,
  259,  260,  261,   -1,   -1,   -1,  265,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  258,  259,  260,  261,   -1,   42,
   -1,  265,  266,   -1,   -1,   -1,  270,   -1,   -1,  261,
  262,  263,  264,   56,   57,  267,  268,   -1,   -1,   -1,
   -1,   64,   -1,   -1,   -1,   -1,   69,   70,   -1,   -1,
   -1,   -1,   -1,   76,   -1,   -1,   -1,   80,   81,   82,
   83,   84,   85,   86,   87,   88,   89,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  114,   -1,   -1,   -1,  118,   -1,  258,  259,  260,
  261,   -1,   -1,   -1,  265,  266,   -1,   -1,   -1,  270,
   -1,   -1,  135,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 277
#define YYUNDFTOKEN 295
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
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"TYPE","CHAR_LIT","INT_LIT","BOOL_LIT","IDENTIFIER",
"READ","PRINT","RETURN","STRING","TO","FOR","IF","THEN","ELSE","END","EQUAL",
"DIFFERENT","LESS_THEN","GREATHER_THEN","OR","AND",0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : declarationList",
"declarationList : variableDeclaration declarationList",
"declarationList : functDeclaration declarationList",
"variableDeclaration : TYPE IDENTIFIER ':' BOOL_LIT ';'",
"variableDeclaration : TYPE IDENTIFIER ':' INT_LIT ';'",
"variableDeclaration : TYPE IDENTIFIER ':' CHAR_LIT ';'",
"variableDeclaration : TYPE IDENTIFIER ':' STRING ';'",
"variableDeclaration : TYPE IDENTIFIER '[' INT_LIT ']' ':' arrayInitLiterals ';'",
"variableDeclaration : TYPE IDENTIFIER '[' INT_LIT ']' ';'",
"arrayInitLiterals : BOOL_LIT arrayInitLiterals",
"arrayInitLiterals : INT_LIT arrayInitLiterals",
"arrayInitLiterals : CHAR_LIT arrayInitLiterals",
"arrayInitLiterals : STRING arrayInitLiterals",
"arrayInitLiterals : IDENTIFIER arrayInitLiterals",
"arrayInitLiterals :",
"functDeclaration : TYPE IDENTIFIER '(' functParamsDef ')' commandBlock ';'",
"functParamsDef : TYPE IDENTIFIER functParamsDefCont",
"functParamsDef :",
"functParamsDefCont : ',' TYPE IDENTIFIER functParamsDefCont",
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
"functParams : INT_LIT functParamsCont",
"functParamsCont : ',' IDENTIFIER functParamsCont",
"functParamsCont : ',' INT_LIT functParamsCont",
"functParamsCont : ',' CHAR_LIT functParamsCont",
"functParamsCont : ',' STRING functParamsCont",
"functParamsCont : ',' INT_LIT functParamsCont",
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
