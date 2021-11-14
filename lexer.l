%{
#include "lexer.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

void token_print(int token_id);


%}

%option case-insensitive
%option noyywrap
%option yylineno

DIGIT             [0-9]
LETTER            [a-zA-Z]
ALPHANUM          {LETTER}|{DIGIT}
NUMBER            [1-9][0-9]*|0
HEXDIGIT          [0-9A-F]

ID                _?[a-zA-Z]([a-zA-Z0-9]*|[_]*[a-zA-Z0-9]*[a-zA-Z0-9])*
ICONST            ([1-9][0-9]*|0)([0H][1-9](([0-9]*)|([A-F]+))*)*([0B][1][0-1]*)*
RCONST            ((([1-9][0-9]*|0)*[.]([1-9][0-9]*|0))(([E][-]?([1-9][0-9]*|0))?|([1-9][0-9]*|0)))|(([1-9][0-9]*([E][-]([0-9])*)))|(([0][B]|[0][H])([0-9A-F]*[.](([1-9][0-9])|[0-9A-F])*|0))
BCONST            (TRUE)|(FALSE)
CCONST            \'(([^\\])|(\\[ntfrbv]?))\'

WHITESPACE        [ \t]

alpha             [a-zA-Z]
nalpha            [^a-zA-Z]
digit             [0-9]
digitn            [1-9]
hex_digit         [0-9A-F]
hex_digitn        [1-9A-F]
alphanum          [a-zA-Z0-9]
alphanumu         [a-zA-z0-9_]

%%


"PROGRAM"       { token_print(T_PROGRAM); return T_PROGRAM; }
"CONST"         { token_print(T_CONST); return T_CONST; }
"TYPE"          { token_print(T_TYPE); return T_TYPE; }
"ARRAY"         { token_print(T_ARRAY); return T_ARRAY; }
"SET"           { token_print(T_SET); return T_SET; }
"OF"            { token_print(T_OF); return T_OF; }
"RECORD"        { token_print(T_RECORD); return T_RECORD; }
"VAR"           { token_print(T_VAR); return T_VAR; }
"FORWARD"       { token_print(T_FORWARD); return T_FORWARD; }
"FUNCTION"      { token_print(T_FUNCTION); return T_FUNCTION; }
"PROCEDURE"     { token_print(T_PROCEDURE); return T_PROCEDURE; }
"INTEGER"       { token_print(T_INTEGER); return T_INTEGER; }
"REAL"          { token_print(T_REAL); return T_REAL; }
"BOOLEAN"       { token_print(T_BOOLEAN); return T_BOOLEAN; }
"CHAR"          { token_print(T_CHAR); return T_CHAR; }
"BEGIN"         { token_print(T_BEGIN); return T_BEGIN; }
"END"           { token_print(T_END); return T_END; }
"IF"            { token_print(T_IF); return T_IF; }
"THEN"          { token_print(T_THEN); return T_THEN; }
"ELSE"          { token_print(T_ELSE); return T_ELSE; }
"WHILE"         { token_print(T_WHILE); return T_WHILE; }
"DO"            { token_print(T_DO); return T_DO; }
"FOR"           { token_print(T_FOR); return T_FOR; }
"DOWNTO"        { token_print(T_DOWNTO); return T_DOWNTO; }
"TO"            { token_print(T_TO); return T_TO; }
"WITH"          { token_print(T_WITH); return T_WITH; }
"READ"          { token_print(T_READ); return T_READ; }
"WRITE"         { token_print(T_WRITE); return T_WRITE; }




{ID}            { token_print(T_ID); return T_ID; }

{ICONST}        { token_print(T_ICONST); return T_ICONST; }
{RCONST}        { token_print(T_RCONST); return T_RCONST; }
{BCONST}        { token_print(T_BCONST); return T_BCONST; }
{CCONST}        { token_print(T_CCONST); return T_CCONST; }

">"             { token_print(T_RELOP); return T_RELOP; }
">="            { token_print(T_RELOP); return T_RELOP; }
"<"             { token_print(T_RELOP); return T_RELOP; }
"<="            { token_print(T_RELOP); return T_RELOP; }
"<>"            { token_print(T_RELOP); return T_RELOP; }

"+"             { token_print(T_ADDOP); return T_ADDOP; }
"-"             { token_print(T_ADDOP); return T_ADDOP; }

"OR"            { token_print(T_OROP); return T_OROP; }

"*"             { token_print(T_MULDIVANDOP); return T_MULDIVANDOP; }
"/"             { token_print(T_MULDIVANDOP); return T_MULDIVANDOP; }
"DIV"           { token_print(T_MULDIVANDOP); return T_MULDIVANDOP; }
"MOD"           { token_print(T_MULDIVANDOP); return T_MULDIVANDOP; }
"AND"           { token_print(T_MULDIVANDOP); return T_MULDIVANDOP; }

"NOT"           { token_print(T_NOTOP); return T_NOTOP; }

"IN"            { token_print(T_INOP); return T_INOP; }



"("             { token_print(T_LPAREN); return T_LPAREN; }
")"             { token_print(T_RPAREN); return T_RPAREN; }
";"             { token_print(T_SEMI); return T_SEMI; }
"."             { token_print(T_DOT); return T_DOT; }
","             { token_print(T_COMMA); return T_COMMA; }
"="             { token_print(T_EQU); return T_EQU; }
":"             { token_print(T_COLON); return T_COLON; }
"["             { token_print(T_LBRACK); return T_LBRACK; }
"]"             { token_print(T_RBRACK); return T_RBRACK; }
":="            { token_print(T_ASSIGN); return T_ASSIGN; }
".."            { token_print(T_DOTDOT); return T_DOTDOT; }



[ \t]           { }
[\n]            { }
\r\n            { }

<<EOF>>         { token_print(T_EOF); return T_EOF; }

.               { printf("Unrecognised character at line %d!\n", yylineno); }

%%

int main(int argc, char* argv[]) {
 int token;

    if(argc > 1){
        yyin = fopen(argv[1], "r");
        if (yyin == NULL){
            perror ("Error opening file"); return -1;
        }
    }

    do{
		token = yylex();
    }while(token != T_EOF);


    printf("Program analyzed successfully\n");

    fclose(yyin);
    yyterminate();
}

void token_print(int token_id) {
    printf("Found token: \'%s\' (%d) at line %d\n", yytext, token_id, yylineno);
}








