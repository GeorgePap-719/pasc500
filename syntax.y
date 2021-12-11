%{
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



extern FILE *yyin;
extern int yylex();
extern void yyerror(const char* error);

%}

%union{
    int intval;
    float floatval;
    bool boolean;
    char charval;
}

%token T_PROGRAM        "program"
%token T_CONST          "const"
%token T_TYPE           "type"
%token T_ARRAY          "array"
%token T_SET            "set"
%token T_OF             "of"
%token T_RECORD         "record"
%token T_VAR            "var"
%token T_FORWARD        "forward"
%token T_FUNCTION       "function"
%token T_PROCEDURE      "procedure"
%token T_INTEGER        "integer"
%token T_REAL           "real"
%token T_BOOLEAN        "boolean"
%token T_CHAR           "char"
%token T_BEGIN          "begin"
%token T_END            "end"
%token T_IF             "if"
%token T_THEN           "then"
%token T_ELSE           "else"
%token T_WHILE          "while"
%token T_DO             "do"
%token T_FOR            "for"
%token T_DOWNTO         "downto"
%token T_TO             "to"
%token T_WITH           "with"
%token T_READ           "read"
%token T_WRITE          "write"

%token T_ID             "id"

%token <intval> T_ICONST        "iconst"
%token <floatval> T_RCONST      "rconst"
%token <boolean> T_BCONST       "bconst"
%token <charval> T_CCONST       "cconst"

%token T_RELOP      "> or >= or < or <= or <>"
%token T_ADDOP      "+ or -"
%token T_OROP       "or"
%token T_MULDIVANDOP    "* or / or div or mod or and"
%token T_NOTOP      "not"
%token T_INOP       "in"


%token T_STRING     "string"

%token T_LPAREN     "("
%token T_RPAREN     ")"
%token T_SEMI       ";"
%token T_DOT        "."
%token T_COMMA      ","
%token T_EQU        "="
%token T_COLON      ":"
%token T_LBRACK     "["
%token T_RBRACK     "]"
%token T_ASSIGN     ":="
%token T_DOTDOT     ".."

%token T_EOF  0     "EOF"

%%


program: header declarations subprograms comp_statement T_DOT

header: T_PROGRAM T_ID T_SEMI

declarations: constdefs typedefs vardefs

constdefs: T_CONST constant_defs T_SEMI
        | %empty

constant_defs: constant_defs T_SEMI T_ID T_EQU expression
        | T_ID T_EQU expression

expression: expression T_RELOP expression
        | expression T_EQU expression
        | expression T_INOP expression
        | expression T_OROP expression
        | expression T_ADDOP expression
        | expression T_MULDIVANDOP expression
        | T_ADDOP expression
        | T_NOTOP expression
        | variable
        | T_ID T_LPAREN expressions T_RPAREN
        | constant
        | T_LPAREN expression T_RPAREN
        | setexpression

variable: T_ID
        | variable T_DOT T_ID
        | variable T_LBRACK expressions T_RBRACK

expressions: expressions T_COMMA expression
        | expression

constant: T_ICONST
        | T_RCONST
        | T_BCONST
        | T_CCONST

setexpression: T_LBRACK elexpressions T_RBRACK
        | T_LBRACK T_RBRACK

elexpressions: elexpressions T_COMMA elexpression
        | elexpression

elexpression: expression T_DOTDOT expression
        | expression

typedefs: T_TYPE type_defs T_SEMI
        | %empty

type_defs: type_defs T_SEMI T_ID T_EQU type_def
        | T_ID T_EQU type_def

type_def: T_ARRAY T_LBRACK dims T_RBRACK T_OF typename
        | T_SET T_OF typename
        | T_RECORD fields T_END
        | T_LPAREN identifiers T_RPAREN
        | limit T_DOTDOT limit

dims: dims T_COMMA limits
        | limits

limits: limit T_DOTDOT limit
        | T_ID

limit: T_ADDOP T_ICONST
        | T_ADDOP T_ID
        | T_ICONST
        | T_CCONST
        | T_BCONST
        | T_ID

typename: standard_type
        | T_ID

standard_type: T_INTEGER | T_REAL | T_BOOLEAN | T_CHAR

fields: fields T_SEMI field
        | field

field: identifiers T_COLON typename

identifiers: identifiers T_COMMA T_ID
        | T_ID

vardefs: T_VAR variable_defs T_SEMI
        | %empty

variable_defs: variable_defs T_SEMI identifiers T_COLON typename
        | identifiers T_COLON typename

subprograms: subprograms subprogram T_SEMI
        | %empty

subprogram: sub_header T_SEMI T_FORWARD
        | sub_header T_SEMI declarations subprograms comp_statement

sub_header: T_FUNCTION T_ID formal_parameters T_COLON standard_type
        | T_PROCEDURE T_ID formal_parameters
        | T_FUNCTION T_ID

formal_parameters: T_LPAREN parameter_list T_RPAREN
        | %empty

parameter_list: parameter_list T_SEMI pass identifiers T_COLON typename
        | pass identifiers T_COLON typename

pass: T_VAR | %empty

comp_statement: T_BEGIN statements T_END

statements: statements T_SEMI statement
        | statement

statement: assignment
        | if_statement
        | while_statement
        | for_statement
        | with_statement
        | subprogram_call
        | io_statement
        | comp_statement
        | %empty

assignment: variable T_ASSIGN expression
        | variable T_ASSIGN T_STRING

if_statement: T_IF expression T_THEN statement if_tail

if_tail: T_ELSE statement
        | %empty

while_statement: T_WHILE expression T_DO statement

for_statement: T_FOR T_ID T_ASSIGN iter_space T_DO statement

iter_space: expression T_TO expression
        | expression T_DOWNTO expression

with_statement: T_WITH variable T_DO statement

subprogram_call: T_ID
        | T_ID T_LPAREN expressions T_RPAREN

io_statement: T_READ T_LPAREN read_list T_RPAREN
        | T_WRITE T_LPAREN write_list T_RPAREN

read_list: read_list T_COMMA read_item
        | read_item

read_item: variable

write_list: write_list T_COMMA write_item
        | write_item

write_item: expression
        | T_STRING

%%


int main(int argc, char* argv[]) {
 int token;

    if(argc > 1){
        yyin = fopen(argv[1], "r");
        if (yyin == NULL){
            perror ("Error opening file"); return -1;
        }
    }

    yyparse();

    printf("Program analyzed successfully\n");

    fclose(yyin);
    return 0;
}

