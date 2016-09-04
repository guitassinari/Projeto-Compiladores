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
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    2,    4,    4,    4,    4,    4,    5,
    5,    6,    6,    6,    6,    3,    7,    7,   10,   11,
   11,   12,   12,    9,    9,    8,   13,   15,   15,   16,
   16,   18,   18,   19,   19,   20,   14,   14,   14,   14,
   14,   14,   14,   24,   25,   25,   23,   22,   21,   26,
   26,   26,   27,   27,   27,   28,   28,   28,   32,   32,
   34,   34,   17,   17,   17,   17,   17,   33,   33,   36,
   35,   35,   35,   30,   30,   29,   29,   29,   29,   31,
   31,   31,   31,
};
static const YYINT yylen[] = {                            2,
    1,    2,    2,    4,    2,    2,    2,    2,    4,    2,
    0,    2,    2,    2,    0,    7,    3,    0,    4,    2,
    0,    3,    0,    4,    0,    3,    3,    3,    0,    7,
    3,    2,    0,    2,    6,    2,    1,    1,    1,    1,
    1,    1,    0,    2,    2,    5,    2,    2,    2,    2,
    2,    0,    3,    3,    1,    3,    1,    2,    3,    1,
    3,    1,    3,    1,    1,    1,    1,    3,    0,    1,
    1,    1,    1,    2,    2,    2,    2,    2,    2,    1,
    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    1,    0,    0,    0,    2,    3,    0,    0,
    0,    0,    7,    5,    6,    8,    0,    0,    0,    4,
    0,    0,    0,    0,    9,    0,   17,    0,    0,    0,
    0,    0,   10,    0,    0,    0,    0,    0,    0,    0,
   42,    0,    0,   41,   37,   38,   39,   40,   16,   14,
   13,   12,    0,    0,    0,   44,   47,   62,   60,   55,
    0,    0,    0,   64,    0,   49,    0,    0,    0,    0,
   48,    0,    0,   26,    0,   24,    0,   45,    0,    0,
   58,   50,    0,   51,    0,    0,    0,    0,    0,    0,
    0,   80,   81,   82,   83,    0,    0,    0,   72,   71,
   73,    0,    0,    0,   31,    0,    0,   27,    0,    0,
    0,    0,    0,   63,   74,   75,    0,    0,    0,   76,
   77,   78,   79,    0,    0,    0,    0,    0,    0,   34,
    0,    0,    0,   68,    0,   20,   19,    0,   36,    0,
   28,   46,    0,    0,    0,   22,    0,    0,   30,   35,
   32,
};
static const YYINT yydgoto[] = {                          2,
    3,    4,    5,   12,   25,   33,   19,   41,   27,   64,
  113,  136,   42,  107,  108,   44,   65,  149,  105,  130,
   45,   46,   47,   48,   56,   66,   67,   68,   96,   87,
   97,   69,   81,   70,  102,  111,
};
static const YYINT yysindex[] = {                      -253,
 -244,    0,    0, -253, -253,   26,    0,    0, -137, -226,
 -218,  -14,    0,    0,    0,    0,  -41, -204,   18,    0,
    7,   23,  -52, -118,    0, -188,    0,  -82,   14, -118,
 -118, -118,    0, -182,  -37, -180,  -20,  -39,   43,   46,
    0,  -31,   42,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   23,  -39,  -39,    0,    0,    0,    0,    0,
   -2,  -20,  -39,    0,  -20,    0,  -22,  130,  109,  155,
    0,   28,  -39,    0,  -82,    0,   22,    0, -152, -141,
    0,    0,   84,    0,    5,   98,  -93,   77,   82,   83,
   87,    0,    0,    0,    0, -248, -248, -152,    0,    0,
    0, -109,   -3,  112,    0,  114,  103,    0,   96,  109,
   71,  125,  133,    0,    0,    0,   79,  -22,  130,    0,
    0,    0,    0,  109,  109,  109,  155,  -39,  -82,    0,
  -86,  -82,  -39,    0,  -74,    0,    0,  -77,    0,  -82,
    0,    0,  125,  -39,  -69,    0,  112,  -82,    0,    0,
    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  162,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  145,  165,    0,  146,    0,    0,    0,  148,    0,  146,
  146,  146,    0,    0,    0,    0,  -57,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  165,    0,    0,    0,    0,    0,    0,    0,
  -11,  -57,    0,    0,  -57,    0,   65,   78,    2,   91,
    0,    0,    0,    0,  -53,    0,    0,    0,    0,  167,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  353,    0,    0,    0,    0,    0,    0,  116,
    0,   18,    0,    0,    0,    0,  -33,  106,    0,    0,
    0,    0,    0,   15,   37,   52,  119,    0,  -56,    0,
    0,  -53,    0,    0,    0,    0,    0,    0,    0,  -56,
    0,    0,   18,    0,  151,    0,    0,  -56,    0,    0,
    0,
};
static const YYINT yygindex[] = {                         0,
  129,    0,    0,    0,    0,  164,    0,  188,  170,    0,
    0,   75,    0,  -13,   92,    0,  320,    0,    0,   88,
    0,    0,    0,    0,    0,  -44,  142,   13,  -51,  -47,
  -23,  -54,    0,  128,    0,    0,
};
#define YYTABLESIZE 464
static const YYINT yytable[] = {                         69,
   63,   52,   43,    1,   69,   43,   69,   69,   69,   69,
   59,   69,  117,   69,   43,   86,    6,   82,   99,   63,
   84,   69,  100,   55,  110,   69,   69,   69,   69,   69,
   69,   69,   17,   69,   57,   69,   80,   80,   18,   57,
   28,   57,   57,  126,   20,   98,  101,   69,   69,   69,
   69,   21,   53,   54,   53,   53,   22,  128,   23,   69,
   57,   57,   57,   57,   24,   11,   26,   63,   34,   56,
   28,   29,   49,   53,   56,   99,   56,   56,   53,  100,
   57,   69,   72,    9,   59,   73,   98,   79,   79,   59,
   69,   59,   59,   74,   57,   56,   56,   56,   56,  119,
   75,   85,   98,  101,   65,   65,   59,   53,  124,  125,
   59,   59,   59,   59,  109,  139,   10,   66,   66,  112,
   13,   14,   15,   65,  114,   57,  145,   16,  115,   56,
   67,   67,    7,    8,  151,  116,   66,  120,   53,   30,
   31,   32,  121,  122,   59,   54,   54,  123,   58,   67,
   94,   92,  129,   93,  131,   95,  133,   65,   61,   61,
   56,  132,   89,  134,   54,   59,   60,  117,  135,   79,
   66,   94,   92,  137,   93,   59,   95,   61,   35,   36,
   37,   38,  140,   67,   39,   40,  143,   89,  144,   90,
   88,   91,   86,   50,   51,   52,   94,   92,   54,   93,
  148,   95,   18,   11,   15,   25,   43,   21,   70,   33,
   29,   61,   52,   43,   90,   88,   91,  146,   58,   59,
   60,   61,   76,  141,   69,   69,   69,   69,  118,  127,
    0,   69,   69,    0,  150,    0,   69,   58,   59,   60,
   61,    0,    0,    0,   62,    0,   69,   69,   69,   69,
    0,    0,    0,   69,   69,    0,    0,    0,   69,   57,
   57,   57,   57,    0,    0,    0,   57,   57,    0,    0,
    0,   57,   53,   53,   53,   53,    0,    0,   85,   53,
   53,    0,    0,    0,   53,   58,   59,   60,  103,    0,
    0,    0,    0,    0,   56,   56,   56,   56,    0,    0,
    0,   56,   56,    0,    0,    0,   56,    0,    0,   59,
   59,   59,   59,    0,    0,    0,   59,   59,    0,    0,
    0,   59,   65,   65,   65,   65,    0,    0,    0,   65,
   65,    0,    0,    0,   65,   66,   66,   66,   66,    0,
    0,    0,   66,   66,    0,    0,    0,   66,   67,   67,
   67,   67,    0,    0,    0,   67,   67,   71,    0,    0,
   67,    0,    0,   54,   54,   54,   54,    0,    0,    0,
   54,   54,    0,   77,   78,   54,   61,   61,   61,   61,
    0,    0,   83,   61,   61,   69,    0,    0,   61,    0,
    0,  104,  106,   69,   69,   69,    0,   69,    0,   69,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   69,    0,   69,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  138,    0,    0,
    0,    0,  142,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  147,
};
static const YYINT yycheck[] = {                         33,
   40,   59,   59,  257,   38,   59,   40,   41,   42,   43,
  259,   45,  261,   47,   28,   38,  261,   62,   70,   40,
   65,   33,   70,   61,   79,   59,   60,   61,   62,   41,
   42,   43,  259,   45,   33,   47,   40,   40,  257,   38,
  123,   40,   41,   98,   59,   69,   70,   59,   60,   61,
   62,   93,   38,   91,   40,   41,  261,   61,   41,   93,
   59,   60,   61,   62,   58,   40,   44,   40,  257,   33,
  123,  125,   59,   59,   38,  127,   40,   41,  261,  127,
  261,   93,   40,   58,   33,   40,  110,   91,   91,   38,
  124,   40,   41,  125,   93,   59,   60,   61,   62,   87,
   59,  124,  126,  127,   40,   41,  259,   93,   96,   97,
   59,   60,   61,   62,   93,  129,   91,   40,   41,  261,
  258,  259,  260,   59,   41,  124,  140,  265,  124,   93,
   40,   41,    4,    5,  148,   38,   59,   61,  124,  258,
  259,  260,   61,   61,   93,   40,   41,   61,  258,   59,
   42,   43,   41,   45,   41,   47,   61,   93,   40,   41,
  124,   59,   33,   93,   59,  259,  260,  261,   44,   91,
   93,   42,   43,   41,   45,  124,   47,   59,  261,  262,
  263,  264,  269,   93,  267,  268,  261,   33,  266,   60,
   61,   62,   38,   30,   31,   32,   42,   43,   93,   45,
  270,   47,   41,   59,   59,   41,   59,   41,   93,   59,
   23,   93,  270,  270,   60,   61,   62,  143,  258,  259,
  260,  261,   53,  132,  258,  259,  260,  261,   87,  102,
   -1,  265,  266,   -1,  147,   -1,  270,  258,  259,  260,
  261,   -1,   -1,   -1,  265,   -1,  258,  259,  260,  261,
   -1,   -1,   -1,  265,  266,   -1,   -1,   -1,  270,  258,
  259,  260,  261,   -1,   -1,   -1,  265,  266,   -1,   -1,
   -1,  270,  258,  259,  260,  261,   -1,   -1,  124,  265,
  266,   -1,   -1,   -1,  270,  258,  259,  260,  261,   -1,
   -1,   -1,   -1,   -1,  258,  259,  260,  261,   -1,   -1,
   -1,  265,  266,   -1,   -1,   -1,  270,   -1,   -1,  258,
  259,  260,  261,   -1,   -1,   -1,  265,  266,   -1,   -1,
   -1,  270,  258,  259,  260,  261,   -1,   -1,   -1,  265,
  266,   -1,   -1,   -1,  270,  258,  259,  260,  261,   -1,
   -1,   -1,  265,  266,   -1,   -1,   -1,  270,  258,  259,
  260,  261,   -1,   -1,   -1,  265,  266,   38,   -1,   -1,
  270,   -1,   -1,  258,  259,  260,  261,   -1,   -1,   -1,
  265,  266,   -1,   54,   55,  270,  258,  259,  260,  261,
   -1,   -1,   63,  265,  266,   33,   -1,   -1,  270,   -1,
   -1,   72,   73,   41,   42,   43,   -1,   45,   -1,   47,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   60,   -1,   62,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  128,   -1,   -1,
   -1,   -1,  133,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  144,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 271
#define YYUNDFTOKEN 310
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,0,"'&'",0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,
0,0,0,"':'","';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,"'{'","'|'","'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"TYPE","CHAR_LIT","INT_LIT",
"BOOL_LIT","IDENTIFIER","READ","PRINT","RETURN","STRING","TO","FOR","IF","THEN",
"ELSE","END",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : declarationList",
"declarationList : variableDeclaration declarationList",
"declarationList : functDeclaration declarationList",
"variableDeclaration : TYPE IDENTIFIER arrayOrNormal ';'",
"arrayOrNormal : ':' INT_LIT",
"arrayOrNormal : ':' BOOL_LIT",
"arrayOrNormal : ':' CHAR_LIT",
"arrayOrNormal : ':' STRING",
"arrayOrNormal : '[' INT_LIT ']' arrayInit",
"arrayInit : ':' arrayInitLiterals",
"arrayInit :",
"arrayInitLiterals : BOOL_LIT arrayInitLiterals",
"arrayInitLiterals : INT_LIT arrayInitLiterals",
"arrayInitLiterals : CHAR_LIT arrayInitLiterals",
"arrayInitLiterals :",
"functDeclaration : TYPE IDENTIFIER '(' functParamsDef ')' commandBlock ';'",
"functParamsDef : TYPE IDENTIFIER functParamsDefCont",
"functParamsDef :",
"functCall : IDENTIFIER '(' functParams ')'",
"functParams : IDENTIFIER functParamsCont",
"functParams :",
"functParamsCont : ',' IDENTIFIER functParamsCont",
"functParamsCont :",
"functParamsDefCont : ',' TYPE IDENTIFIER functParamsDefCont",
"functParamsDefCont :",
"commandBlock : '{' commandBlockList '}'",
"commandBlockList : command ';' commandBlockListCont",
"commandBlockListCont : command ';' commandBlockListCont",
"commandBlockListCont :",
"flowControl : IF '(' expression ')' THEN command ifThenCont",
"flowControl : FOR '(' forCont",
"ifThenCont : ELSE command",
"ifThenCont :",
"forCont : expression forEnd",
"forCont : IDENTIFIER '=' expression TO expression forEnd",
"forEnd : ')' command",
"command : print",
"command : return",
"command : read",
"command : attribuition",
"command : flowControl",
"command : commandBlock",
"command :",
"attribuition : IDENTIFIER attribuitionCont",
"attribuitionCont : '=' expression",
"attribuitionCont : '[' expression ']' '=' expression",
"read : READ IDENTIFIER",
"return : RETURN expression",
"print : PRINT printList",
"printList : STRING printList",
"printList : expression printList",
"printList :",
"logicalExpression : arithmeticExpression relationalOperators arithmeticExpression",
"logicalExpression : logicalExpression logicalOperators logicalExpression",
"logicalExpression : BOOL_LIT",
"arithmeticExpression : arithmeticExpression arithmeticOperators arithmeticExpression",
"arithmeticExpression : integerExpression",
"arithmeticExpression : IDENTIFIER expressionVarCont",
"integerExpression : integerExpression arithmeticOperators integerExpression",
"integerExpression : INT_LIT",
"charExpression : charExpression operator charExpression",
"charExpression : CHAR_LIT",
"expression : '(' expression ')'",
"expression : functCall",
"expression : logicalExpression",
"expression : arithmeticExpression",
"expression : charExpression",
"expressionVarCont : '[' arrayPosition ']'",
"expressionVarCont :",
"arrayPosition : integerExpression",
"operator : logicalOperators",
"operator : relationalOperators",
"operator : arithmeticOperators",
"logicalOperators : '|' '|'",
"logicalOperators : '&' '&'",
"relationalOperators : '=' '='",
"relationalOperators : '!' '='",
"relationalOperators : '<' '='",
"relationalOperators : '>' '='",
"arithmeticOperators : '+'",
"arithmeticOperators : '-'",
"arithmeticOperators : '*'",
"arithmeticOperators : '/'",

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
