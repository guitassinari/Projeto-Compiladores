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
   34,   34,   17,   17,   17,   33,   33,   36,   35,   35,
   35,   30,   30,   29,   29,   29,   29,   31,   31,   31,
   31,
};
static const YYINT yylen[] = {                            2,
    1,    2,    2,    4,    2,    2,    2,    2,    4,    2,
    0,    2,    2,    2,    0,    7,    3,    0,    4,    2,
    0,    3,    0,    4,    0,    3,    3,    3,    0,    7,
    3,    2,    0,    2,    6,    2,    1,    1,    1,    1,
    1,    1,    0,    2,    2,    5,    2,    2,    2,    2,
    2,    0,    3,    3,    1,    3,    1,    2,    3,    1,
    3,    1,    1,    1,    1,    3,    0,    1,    1,    1,
    1,    2,    2,    2,    2,    2,    2,    1,    1,    1,
    1,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    1,    0,    0,    0,    2,    3,    0,    0,
    0,    0,    7,    5,    6,    8,    0,    0,    0,    4,
    0,    0,    0,    0,    9,    0,   17,    0,    0,    0,
    0,    0,   10,    0,    0,    0,    0,    0,    0,    0,
   42,    0,    0,   41,   37,   38,   39,   40,   16,   14,
   13,   12,    0,    0,    0,   44,   47,   62,   60,   55,
    0,    0,    0,   49,    0,    0,    0,    0,   48,    0,
    0,   26,    0,   24,    0,   45,    0,   58,   50,   51,
    0,    0,    0,    0,    0,    0,    0,   78,   79,   80,
   81,    0,    0,    0,   70,   69,   71,    0,    0,    0,
   31,    0,    0,   27,    0,    0,    0,   72,   73,    0,
    0,   74,   75,   76,   77,    0,    0,    0,    0,    0,
    0,   34,    0,    0,    0,   66,    0,   36,    0,   28,
   46,    0,    0,    0,    0,   30,   35,   32,
};
static const YYINT yydgoto[] = {                          2,
    3,    4,    5,   12,   25,   33,   19,   41,   27,    0,
    0,    0,   42,  103,  104,   44,   63,  136,  101,  122,
   45,   46,   47,   48,   56,   64,   65,   66,   92,   83,
   93,   67,   78,   68,   98,  107,
};
static const YYINT yysindex[] = {                      -246,
 -230,    0,    0, -246, -246,  -36,    0,    0, -213, -215,
 -194,    9,    0,    0,    0,    0,    5, -175,   47,    0,
   48,   65,  -15, -158,    0, -146,    0, -108,   53, -158,
 -158, -158,    0, -147,  -54, -144, -180, -121,   79,   82,
    0,   -1,   73,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   65, -121, -121,    0,    0,    0,    0,    0,
   42, -180, -180,    0,  -35,  135,   83,  129,    0,  -95,
 -121,    0, -108,    0,   52,    0, -124,    0,    0,    0,
   22,  110, -118,   97,  100,  108,  112,    0,    0,    0,
    0, -227, -227, -124,    0,    0,    0,  -83,   -7,  138,
    0,  140,  125,    0,  124,   83,   93,    0,    0,  -35,
  135,    0,    0,    0,    0,   83,   83,   83,  129, -121,
 -108,    0,  -82, -108, -121,    0,  -78,    0, -108,    0,
    0, -121,  -77,  138, -108,    0,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  153,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  139,  158,    0,  144,    0,    0,    0,  146,    0,  144,
  144,  144,    0,    0,    0,    0,  -58,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  158,    0,    0,    0,    0,    0,    0,    0,
  -33,  -58,  -58,    0,   36,   51,  -20,   64,    0,    0,
    0,    0,  -42,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  159,    0,
    0,    0,    0,    0,    0,  114,    0,    0,    0,   77,
    0,    0,    0,    0,    0,   23,   -3,   10,   90,    0,
  -57,    0,    0,  -42,    0,    0,    0,    0,  -57,    0,
    0,    0,  149,    0,  -57,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
   15,    0,    0,    0,    0,  120,    0,  186,  157,    0,
    0,    0,    0,  -22,   87,    0,   -5,    0,    0,   80,
    0,    0,    0,    0,    0,   31,  132,    4,  -52,  -43,
  -44,  -41,    0,  118,    0,    0,
};
#define YYTABLESIZE 360
static const YYINT yytable[] = {                         67,
   52,   43,   82,   11,   67,   43,   55,   67,   67,   67,
    1,   67,   57,   67,   28,   95,   43,   57,    7,    8,
   57,    9,   94,   97,   96,   67,   67,   67,   67,   56,
    6,   59,   69,   61,   56,  106,   54,   56,   57,   57,
   57,   57,   59,   17,   13,   14,   15,   59,   75,   76,
   59,   16,  118,  120,   10,   56,   56,   56,   56,   67,
   53,   94,   18,   53,  100,  102,   95,   20,   59,   59,
   59,   59,   57,   94,   97,   96,   63,   58,   59,   60,
   61,   53,   29,   77,   62,   22,  111,   23,   81,   56,
   67,   64,   79,   80,   63,  116,  117,   21,  128,   30,
   31,   32,   59,   57,   65,   24,  133,   28,   26,   64,
   34,   49,  138,   53,  127,   53,   57,   54,   70,  131,
   56,   71,   65,   72,   90,   88,  134,   89,   63,   91,
   61,   73,   77,   59,   59,   54,   58,   59,   60,   61,
   59,   60,   61,   64,  105,  108,   53,  109,   61,   50,
   51,   52,   35,   36,   37,   38,   65,  112,   39,   40,
  113,   85,   58,   59,   60,   99,   82,   85,  114,   54,
   90,   88,  115,   89,   58,   91,   90,   88,  121,   89,
  123,   91,   61,  124,  125,  126,  129,  132,   86,   84,
   87,   67,  135,   18,   86,   84,   87,   11,   25,   67,
   67,   67,   15,   67,   43,   67,   68,   33,   29,   74,
  130,   52,   43,  137,  110,  119,    0,    0,   67,    0,
   67,    0,    0,    0,   67,   67,   67,   67,    0,    0,
    0,   67,   67,    0,    0,    0,   67,   57,   57,   57,
   57,    0,    0,    0,   57,   57,    0,    0,    0,   57,
    0,    0,   81,    0,   56,   56,   56,   56,    0,    0,
    0,   56,   56,    0,    0,    0,   56,   59,   59,   59,
   59,    0,    0,    0,   59,   59,    0,    0,    0,   59,
   53,   53,   53,   53,    0,    0,    0,   53,   53,    0,
    0,    0,   53,   63,   63,   63,   63,    0,    0,    0,
   63,   63,    0,    0,    0,   63,    0,    0,   64,   64,
   64,   64,    0,    0,    0,   64,   64,    0,    0,    0,
   64,   65,   65,   65,   65,    0,    0,    0,   65,   65,
    0,    0,    0,   65,   54,   54,   54,   54,    0,    0,
    0,   54,   54,    0,    0,    0,   54,   61,   61,   61,
   61,    0,    0,    0,   61,   61,    0,    0,    0,   61,
};
static const YYINT yycheck[] = {                         33,
   59,   59,   38,   40,   38,   28,   61,   41,   42,   43,
  257,   45,   33,   47,  123,   68,   59,   38,    4,    5,
   41,   58,   67,   68,   68,   59,   60,   61,   62,   33,
  261,  259,   38,  261,   38,   77,   91,   41,   59,   60,
   61,   62,   33,  259,  258,  259,  260,   38,   54,   55,
   41,  265,   94,   61,   91,   59,   60,   61,   62,   93,
   38,  106,  257,   41,   70,   71,  119,   59,   59,   60,
   61,   62,   93,  118,  119,  119,   41,  258,  259,  260,
  261,   59,  125,   91,  265,  261,   83,   41,  124,   93,
  124,   41,   62,   63,   59,   92,   93,   93,  121,  258,
  259,  260,   93,  124,   41,   58,  129,  123,   44,   59,
  257,   59,  135,  261,  120,   93,  261,   41,   40,  125,
  124,   40,   59,  125,   42,   43,  132,   45,   93,   47,
   41,   59,   91,  124,  259,   59,  258,  259,  260,  261,
  259,  260,  261,   93,   93,  124,  124,   38,   59,   30,
   31,   32,  261,  262,  263,  264,   93,   61,  267,  268,
   61,   33,  258,  259,  260,  261,   38,   33,   61,   93,
   42,   43,   61,   45,  258,   47,   42,   43,   41,   45,
   41,   47,   93,   59,   61,   93,  269,  266,   60,   61,
   62,   33,  270,   41,   60,   61,   62,   59,   41,   41,
   42,   43,   59,   45,   59,   47,   93,   59,   23,   53,
  124,  270,  270,  134,   83,   98,   -1,   -1,   60,   -1,
   62,   -1,   -1,   -1,  258,  259,  260,  261,   -1,   -1,
   -1,  265,  266,   -1,   -1,   -1,  270,  258,  259,  260,
  261,   -1,   -1,   -1,  265,  266,   -1,   -1,   -1,  270,
   -1,   -1,  124,   -1,  258,  259,  260,  261,   -1,   -1,
   -1,  265,  266,   -1,   -1,   -1,  270,  258,  259,  260,
  261,   -1,   -1,   -1,  265,  266,   -1,   -1,   -1,  270,
  258,  259,  260,  261,   -1,   -1,   -1,  265,  266,   -1,
   -1,   -1,  270,  258,  259,  260,  261,   -1,   -1,   -1,
  265,  266,   -1,   -1,   -1,  270,   -1,   -1,  258,  259,
  260,  261,   -1,   -1,   -1,  265,  266,   -1,   -1,   -1,
  270,  258,  259,  260,  261,   -1,   -1,   -1,  265,  266,
   -1,   -1,   -1,  270,  258,  259,  260,  261,   -1,   -1,
   -1,  265,  266,   -1,   -1,   -1,  270,  258,  259,  260,
  261,   -1,   -1,   -1,  265,  266,   -1,   -1,   -1,  270,
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
#line 179 "parser.y"

void yyerror (char const *s) {
  printf(" Fodeu %s", s);
  exit(3);
}
#line 387 "y.tab.c"

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
case 4:
#line 30 "parser.y"
	{printf(" VAR SUCCESS \n ");}
break;
case 16:
#line 50 "parser.y"
	{printf("DECL");}
break;
case 18:
#line 54 "parser.y"
	{printf("EMPTY");}
break;
case 19:
#line 57 "parser.y"
	{printf("CALL");}
break;
case 26:
#line 72 "parser.y"
	{printf("CMD BLOCK");}
break;
case 27:
#line 75 "parser.y"
	{printf("BLCKLIST");}
break;
case 28:
#line 78 "parser.y"
	{printf("BLCKLISTCONT");}
break;
case 30:
#line 82 "parser.y"
	{printf("IF");}
break;
case 31:
#line 83 "parser.y"
	{printf("FOR");}
break;
case 44:
#line 106 "parser.y"
	{printf("ATTR");}
break;
case 47:
#line 113 "parser.y"
	{printf("READ");}
break;
case 48:
#line 116 "parser.y"
	{printf("RETURN");}
break;
case 49:
#line 119 "parser.y"
	{printf("PRINT");}
break;
case 58:
#line 134 "parser.y"
	{printf("HA");}
break;
#line 645 "y.tab.c"
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
