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

#define INT 257
#define REAL 258
#define BOOL 259
#define CHAR 260
#define INTEGER 261
#define FALSE 262
#define TRUE 263
#define IDENTIFIER 264
#define READ 265
#define PRINT 266
#define RETURN 267
#define STRING 268
#define TO 269
#define FOR 270
#define IF 271
#define THEN 272
#define ELSE 273
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    0,    1,    3,    4,    4,    4,    4,    4,
    4,    4,   13,   14,   14,   15,   15,    6,    6,   16,
   16,    7,   17,   12,   12,   12,   12,   11,   11,   10,
    9,    8,   19,   19,   19,   20,   20,   20,   20,   20,
   21,   21,   21,   21,   21,   26,   26,   26,   27,   27,
   27,   18,   18,   18,   18,   18,   25,   25,   29,   29,
   30,   28,   28,   28,   23,   23,   22,   22,   22,   22,
   24,   24,   24,   24,    2,   31,   31,   33,   33,   34,
   34,   32,   32,   32,   32,    5,    5,    5,    5,
};
static const YYINT yylen[] = {                            2,
    1,    1,    1,    2,    5,    1,    1,    1,    1,    1,
    1,    0,    4,    2,    0,    3,    0,    3,    0,    4,
    0,    3,    3,    6,    8,    5,    9,    3,    6,    2,
    2,    2,    2,    2,    0,    3,    3,    1,    1,    1,
    3,    2,    1,    1,    1,    3,    1,    1,    3,    1,
    1,    3,    1,    1,    1,    1,    3,    0,    3,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    4,    2,    4,    2,    0,    2,
    0,    1,    1,    1,    1,    1,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
   86,   87,   88,   89,    0,    0,    0,    0,    0,    0,
    0,    0,    1,    2,    3,    0,    0,   11,    6,    7,
    8,    9,   10,    0,    0,   30,   43,   50,   44,   39,
   38,    0,    0,    0,   40,    0,   32,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    4,    0,    0,
    0,    0,    0,   42,   33,    0,   34,   65,   66,    0,
   67,   68,   69,   70,   71,   72,   73,   74,    0,    0,
    0,   63,   62,   64,    0,    0,    0,    0,    0,    0,
   22,    0,    0,    0,    0,    0,    0,    0,   47,    0,
   48,    0,    0,   59,   44,   40,    0,    0,   45,    0,
    0,    0,   51,    0,   60,    0,    0,    0,    0,   23,
    0,    0,    0,   85,   82,   83,   84,   76,   75,    0,
    0,   14,   13,   57,    0,   26,    0,    0,    5,    0,
    0,    0,    0,    0,    0,   18,    0,   77,   16,    0,
    0,    0,    0,   78,    0,   25,    0,   80,   27,   20,
};
static const YYINT yydgoto[] = {                         12,
   13,   14,   15,   16,   17,  112,   18,   19,   20,   21,
   22,   23,   35,   88,  122,  136,   47,   36,   37,   38,
   39,   72,   73,   70,   54,   40,   41,   75,   42,   93,
   85,  143,  138,  144,
};
static const YYINT yysindex[] = {                       378,
    0,    0,    0,    0,  -45, -249,  217,  258,  -14,    2,
  324,    0,    0,    0,    0,  324, -224,    0,    0,    0,
    0,    0,    0,  258,  258,    0,    0,    0,    0,    0,
    0,  -20,  217,  258,    0,  217,    0, -175,  163,   35,
  114,  114,    0,  289,  258,   -1,  -46,    0,  -27,    0,
  -12, -180, -209,    0,    0,   45,    0,    0,    0, -171,
    0,    0,    0,    0,    0,    0,    0,    0, -210, -210,
 -209,    0,    0,    0, -228,  258,  -31,   53,   55,  324,
    0, -145, -159, -140,   47,   43,   64,   68,    0,   76,
    0,   35,   24,    0,    0,    0, -175,  163,    0,   35,
   35,   35,    0,  114,    0,  114,  258,  324, -154,    0,
 -139,    1,   33,    0,    0,    0,    0,    0,    0,  258,
 -136,    0,    0,    0, -133,    0,  324,   86,    0,   80,
    0,   64,  258, -126, -145,    0, -140,    0,    0,   99,
  324, -112, -140,    0,  324,    0,   86,    0,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,  314,    0,    0,    0,
   94,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   92,  314,    0,    0,  391,    0,  -40,  413,    4,
  433,    0,  131,    0,    0,    0,    0,    0,    0,  153,
  137,  113,    0,    0,    0,  137,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  101,  137,  137,   94,
    0,   32,    0,    0,    0,    0,  119,    0,    0,    0,
    0,   69,    0,    0,    0,    0,  -18,    0,    0,   26,
   48,   70,    0,  449,    0,  469,    0,  -41,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  137,    0,  -41,   42,    0,  107,
  340,  119,    0,  363,    0,    0,  108,    0,    0,  137,
  -41,    0,  108,    0,  -41,    0,   42,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
  154,    0,    0,   23,  -74,    0,   57,    0,    0,    0,
    0,    0,  -32,    0,   40,   28,   97,   25,   62,  121,
  -13,  -33,  -24,  -30,    0,  -36,  111,  -38,  112,    0,
    0,  103,    0,   46,
};
#define YYTABLESIZE 742
static const YYINT yytable[] = {                         53,
   53,   53,   53,   76,   53,   69,   53,  111,   52,   71,
   74,   74,   82,   60,   26,   24,   92,   12,   53,   52,
   91,   37,   37,   37,   37,   44,   37,   96,   37,  107,
   84,   28,   43,   46,  102,   90,   99,   99,   91,   49,
   37,   45,  103,   55,   55,   25,   98,   27,   50,   51,
   95,   89,   53,   32,   90,  100,  101,   80,   56,   53,
  142,   71,   55,   83,   69,   36,   36,   76,   78,   79,
   53,   71,   60,   74,   37,   74,   67,   65,   81,   66,
   86,   68,   53,   87,   36,   94,   27,   41,   41,   95,
   30,   31,   32,  108,   55,  109,   55,   57,   58,   59,
  105,  113,   46,  120,   37,  119,   41,  121,  123,   46,
   46,    1,    2,    3,    4,   52,  124,  127,   36,  114,
  115,  116,  117,   11,  128,  130,   55,  132,   46,  135,
  126,  125,   58,   58,   58,  133,   58,  137,   58,  145,
   41,   58,   58,   58,  131,   58,  141,   58,   36,  134,
   58,  147,   12,   15,   19,   67,   65,  140,   66,   17,
   68,   61,   46,  146,   21,   79,   81,  149,  129,   48,
   41,  139,   60,   60,  150,   60,  110,   60,   60,   60,
   97,   60,    0,   60,   58,  104,  118,  106,  148,   31,
    0,    0,   46,    0,   60,   60,    0,   60,    0,   60,
    0,    0,    0,    0,   67,   65,    0,   66,    0,   68,
    0,   28,    0,    0,   58,    0,    0,   53,    0,   53,
   53,   53,   53,   53,   53,   53,   53,   53,   53,   53,
   53,   12,   53,    0,    0,   53,   53,   53,   53,   37,
    0,   37,   37,   37,   37,   37,   37,   37,   37,   37,
   37,   37,   37,   31,   37,    0,   34,   37,   37,   37,
   37,   55,    0,   55,   55,   55,   55,   55,   55,   55,
   55,   55,   55,   55,   55,   28,   55,   55,   55,   55,
   55,   55,   55,   36,    0,   36,   36,   36,   36,   36,
   36,   36,   36,   36,   36,   36,   36,   34,   36,   36,
   36,   36,   36,   36,   36,   41,    0,   41,   41,   41,
   41,   41,   41,   41,   41,   41,   41,   41,   41,    0,
   41,   41,   41,   41,   41,   41,   41,   46,   34,   46,
   46,   46,   46,   46,   46,   46,   46,   46,   46,   46,
   46,    0,   46,   46,   46,   46,   46,   46,   46,   58,
    0,   58,   58,   58,   58,   58,   58,   58,   58,   58,
   58,   58,   58,    0,   58,   58,   58,   58,   58,   58,
   58,    0,   35,    0,   58,   58,   58,   58,   58,   58,
    0,   60,   60,    0,   60,    0,   60,   58,   59,   61,
   62,   63,   64,    0,   31,   31,   31,   31,   29,    0,
   31,   31,    0,   31,   60,   60,   60,   60,   60,   60,
   60,   60,   60,   60,   60,   60,   28,   28,   28,   28,
    0,   24,   28,   28,    0,   28,   60,   60,   60,   60,
   60,   60,   60,   60,    0,   60,   35,   60,   61,   62,
   63,   64,    0,    0,    0,    0,   11,    0,    0,   35,
    0,    0,   54,   54,    0,    0,    0,    0,    0,    0,
    0,    0,   29,    0,    0,    0,    0,    0,    0,    0,
    0,   54,   56,   56,   27,    0,   28,   29,   30,   31,
   32,    0,    0,    0,   33,   24,    0,    0,   49,   49,
    0,   56,    0,    0,    0,    0,    0,    0,    0,    0,
   11,    0,    0,    0,    0,   54,    0,   49,   52,   52,
    0,    0,    0,   35,    0,   27,    0,   28,   29,   30,
   31,   32,    0,    0,    0,   56,    0,   52,    0,    0,
    0,    0,    0,    0,    0,   54,    0,    0,    0,    0,
    0,   49,    0,    0,    0,    0,   27,    0,   28,   29,
   30,   31,   77,    0,    0,   56,    0,    0,    0,    0,
    0,   52,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   49,    0,    0,    0,    0,    0,    0,   35,   35,
   35,    0,    0,   35,   35,    0,   35,    5,    6,    7,
    8,   52,    0,    9,   10,    0,    0,    0,    0,    0,
    0,    0,    0,   29,   29,   29,   29,    0,    0,   29,
   29,    0,   29,   60,   60,   60,   60,   60,   60,    0,
    0,    0,    0,    0,    0,    0,   24,   24,   24,   24,
    0,    0,   24,   24,    1,    2,    3,    4,    0,    0,
    0,    5,    6,    7,    8,    0,    0,    9,   10,    0,
    0,    0,    0,    0,    0,   35,   35,   35,    0,    0,
   35,   35,    0,   35,   60,   60,   60,   60,   60,   60,
   54,    0,   54,   54,   54,   54,   54,   54,   54,   54,
   54,   54,   54,   54,    0,   54,   54,   54,    0,    0,
   56,    0,   56,   56,   56,   56,   56,   56,   56,   56,
   56,   56,   56,   56,    0,   56,   49,    0,   49,   49,
   49,   49,   49,   49,   49,   49,   49,   49,   49,   49,
    0,   49,    0,    0,    0,    0,   52,    0,   52,   52,
   52,   52,   52,   52,   52,   52,   52,   52,   52,   52,
    0,   52,
};
static const YYINT yycheck[] = {                         40,
   41,   42,   43,   42,   45,   39,   47,   82,   40,   40,
   41,   42,   40,   38,  264,   61,   53,   59,   59,   40,
   53,   40,   41,   42,   43,   40,   45,   60,   47,   61,
   58,  260,    8,   11,   71,  264,   69,   70,   71,  264,
   59,   40,   75,   40,   41,   91,   60,  258,   24,   25,
  261,  261,   93,  264,  264,   69,   70,   59,   34,   91,
  135,   92,   59,   91,   98,   40,   41,  106,   44,   45,
   91,  102,   97,  104,   93,  106,   42,   43,  125,   45,
   93,   47,  123,  264,   59,   41,  258,   40,   41,  261,
  262,  263,  264,   41,   33,   41,   93,   36,  274,  275,
   76,  261,   80,   61,  123,   59,   59,   44,   41,   40,
   41,  257,  258,  259,  260,   40,   93,  272,   93,  260,
  261,  262,  263,  123,  264,   93,  123,  264,   59,   44,
  108,  107,   41,   42,   43,  269,   45,   58,   47,   41,
   93,   41,   42,   43,  120,   45,  273,   47,  123,  127,
   59,  264,   59,   41,  123,   42,   43,  133,   45,   41,
   47,   93,   93,  141,  123,   59,   59,  145,  112,   16,
  123,  132,   42,   43,  147,   45,   80,   47,   42,   43,
   60,   45,   -1,   47,   93,   75,   84,   76,  143,   59,
   -1,   -1,  123,   -1,   42,   43,   -1,   45,   -1,   47,
   -1,   -1,   -1,   -1,   42,   43,   -1,   45,   -1,   47,
   -1,   59,   -1,   -1,  123,   -1,   -1,  258,   -1,  260,
  261,  262,  263,  264,  265,  266,  267,  268,  269,  270,
  271,  273,  273,   -1,   -1,  276,  277,  278,  279,  258,
   -1,  260,  261,  262,  263,  264,  265,  266,  267,  268,
  269,  270,  271,  123,  273,   -1,   40,  276,  277,  278,
  279,  258,   -1,  260,  261,  262,  263,  264,  265,  266,
  267,  268,  269,  270,  271,  123,  273,  274,  275,  276,
  277,  278,  279,  258,   -1,  260,  261,  262,  263,  264,
  265,  266,  267,  268,  269,  270,  271,   40,  273,  274,
  275,  276,  277,  278,  279,  258,   -1,  260,  261,  262,
  263,  264,  265,  266,  267,  268,  269,  270,  271,   -1,
  273,  274,  275,  276,  277,  278,  279,  258,   40,  260,
  261,  262,  263,  264,  265,  266,  267,  268,  269,  270,
  271,   -1,  273,  274,  275,  276,  277,  278,  279,  258,
   -1,  260,  261,  262,  263,  264,  265,  266,  267,  268,
  269,  270,  271,   -1,  273,  274,  275,  276,  277,  278,
  279,   -1,   59,   -1,  274,  275,  276,  277,  278,  279,
   -1,   42,   43,   -1,   45,   -1,   47,  274,  275,  276,
  277,  278,  279,   -1,  264,  265,  266,  267,   59,   -1,
  270,  271,   -1,  273,  274,  275,  276,  277,  278,  279,
  274,  275,  276,  277,  278,  279,  264,  265,  266,  267,
   -1,   59,  270,  271,   -1,  273,  274,  275,  276,  277,
  278,  279,   42,   43,   -1,   45,  123,   47,  276,  277,
  278,  279,   -1,   -1,   -1,   -1,  123,   -1,   -1,   59,
   -1,   -1,   40,   41,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  123,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   59,   40,   41,  258,   -1,  260,  261,  262,  263,
  264,   -1,   -1,   -1,  268,  123,   -1,   -1,   40,   41,
   -1,   59,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  123,   -1,   -1,   -1,   -1,   93,   -1,   59,   40,   41,
   -1,   -1,   -1,  123,   -1,  258,   -1,  260,  261,  262,
  263,  264,   -1,   -1,   -1,   93,   -1,   59,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  123,   -1,   -1,   -1,   -1,
   -1,   93,   -1,   -1,   -1,   -1,  258,   -1,  260,  261,
  262,  263,  264,   -1,   -1,  123,   -1,   -1,   -1,   -1,
   -1,   93,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  123,   -1,   -1,   -1,   -1,   -1,   -1,  265,  266,
  267,   -1,   -1,  270,  271,   -1,  273,  264,  265,  266,
  267,  123,   -1,  270,  271,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  264,  265,  266,  267,   -1,   -1,  270,
  271,   -1,  273,  274,  275,  276,  277,  278,  279,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  264,  265,  266,  267,
   -1,   -1,  270,  271,  257,  258,  259,  260,   -1,   -1,
   -1,  264,  265,  266,  267,   -1,   -1,  270,  271,   -1,
   -1,   -1,   -1,   -1,   -1,  265,  266,  267,   -1,   -1,
  270,  271,   -1,  273,  274,  275,  276,  277,  278,  279,
  258,   -1,  260,  261,  262,  263,  264,  265,  266,  267,
  268,  269,  270,  271,   -1,  273,  274,  275,   -1,   -1,
  258,   -1,  260,  261,  262,  263,  264,  265,  266,  267,
  268,  269,  270,  271,   -1,  273,  258,   -1,  260,  261,
  262,  263,  264,  265,  266,  267,  268,  269,  270,  271,
   -1,  273,   -1,   -1,   -1,   -1,  258,   -1,  260,  261,
  262,  263,  264,  265,  266,  267,  268,  269,  270,  271,
   -1,  273,
};
#define YYFINAL 12
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 279
#define YYUNDFTOKEN 316
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
0,0,0,0,0,0,0,0,0,0,0,0,0,0,"INT","REAL","BOOL","CHAR","INTEGER","FALSE","TRUE",
"IDENTIFIER","READ","PRINT","RETURN","STRING","TO","FOR","IF","THEN","ELSE",
"\"||\"","\"&&\"","\"==\"","\"!=\"","\"<=\"","\">=\"",0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : commandList",
"program : variableDeclaration",
"program : functDeclaration",
"commandList : command commandList",
"functDeclaration : type IDENTIFIER '(' functParamsDef commandBlock",
"command : print",
"command : return",
"command : read",
"command : attribuition",
"command : flowControl",
"command : commandBlock",
"command :",
"functCall : IDENTIFIER '(' functParams ')'",
"functParams : IDENTIFIER functParamsCont",
"functParams :",
"functParamsCont : ',' IDENTIFIER functParamsCont",
"functParamsCont :",
"functParamsDef : type IDENTIFIER functParamsDefCont",
"functParamsDef :",
"functParamsDefCont : ',' type IDENTIFIER functParamsDefCont",
"functParamsDefCont :",
"commandBlock : '{' commandBlockList '}'",
"commandBlockList : command ';' commandBlockList",
"flowControl : IF '(' expression ')' THEN command",
"flowControl : IF '(' expression ')' THEN command ELSE command",
"flowControl : FOR '(' expression ')' command",
"flowControl : FOR '(' IDENTIFIER '=' expression TO expression ')' command",
"attribuition : IDENTIFIER '=' expression",
"attribuition : IDENTIFIER '[' expression ']' '=' expression",
"read : READ IDENTIFIER",
"return : RETURN expression",
"print : PRINT printList",
"printList : STRING printList",
"printList : expression printList",
"printList :",
"logicalExpression : arithmeticExpression relationalOperators arithmeticExpression",
"logicalExpression : logicalExpression logicalOperators logicalExpression",
"logicalExpression : TRUE",
"logicalExpression : FALSE",
"logicalExpression : functCall",
"arithmeticExpression : arithmeticExpression arithmeticOperators arithmeticExpression",
"arithmeticExpression : IDENTIFIER expressionVarCont",
"arithmeticExpression : REAL",
"arithmeticExpression : INTEGER",
"arithmeticExpression : functCall",
"integerExpression : integerExpression arithmeticOperators integerExpression",
"integerExpression : INTEGER",
"integerExpression : functCall",
"charExpression : charExpression operator charExpression",
"charExpression : CHAR",
"charExpression : functCall",
"expression : parenthesisExpr operator parenthesisExpr",
"expression : logicalExpression",
"expression : arithmeticExpression",
"expression : integerExpression",
"expression : charExpression",
"expressionVarCont : '[' arrayPosition ']'",
"expressionVarCont :",
"parenthesisExpr : '(' expression ')'",
"parenthesisExpr : expression",
"arrayPosition : integerExpression",
"operator : logicalOperators",
"operator : relationalOperators",
"operator : arithmeticOperators",
"logicalOperators : \"||\"",
"logicalOperators : \"&&\"",
"relationalOperators : \"==\"",
"relationalOperators : \"!=\"",
"relationalOperators : \"<=\"",
"relationalOperators : \">=\"",
"arithmeticOperators : '+'",
"arithmeticOperators : '-'",
"arithmeticOperators : '*'",
"arithmeticOperators : '/'",
"variableDeclaration : type IDENTIFIER arrayOrNormal ';'",
"arrayOrNormal : ':' literal",
"arrayOrNormal : '[' INTEGER ']' arrayInit",
"arrayInit : ':' arrayInitLiterals",
"arrayInit :",
"arrayInitLiterals : literal arrayInitLiterals",
"arrayInitLiterals :",
"literal : INTEGER",
"literal : FALSE",
"literal : TRUE",
"literal : CHAR",
"type : INT",
"type : REAL",
"type : BOOL",
"type : CHAR",

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
#line 187 "parser.y"

void yyerror (char const *s) {
  printf(" Fodeu %s", s);
  exit(3);
}
#line 478 "y.tab.c"

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
