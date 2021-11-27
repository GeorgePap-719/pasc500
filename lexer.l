%{
#include "lexer.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

char str_buffer[256];
int error_counter = 0;

void token_print(int token_id);
void yyerror(const char* error);
int str_to_int(char *str);
float str_to_float(char *str);
float BinToFloat(char* str);
float OctToFloat(char* str);
float HexToFloat(char*str);

%}

%option case-insensitive
%option noyywrap
%option yylineno

%x STRING

DIGIT             [0-9]
LETTER            [a-zA-Z]
ALPHANUM          {LETTER}|{DIGIT}
NUMBER            [1-9][0-9]*|0
HEXDIGIT          [0-9A-F]

ID                (_?[a-zA-Z])(([a-zA-Z]|[0-9])*|[_]*([a-zA-Z]|[0-9])*([a-zA-Z]|[0-9]))*
ICONST            ([1-9][0-9]*|0)([0H][1-9](([0-9]*)|([A-F]+))*)*([0B][1][0-1]*)*
RCONST            ((([1-9][0-9]*|0)*[.]([1-9][0-9]*|0))(([E][-]?([1-9][0-9]*|0))?|([1-9][0-9]*|0)))|(([1-9][0-9]*([E][-]([0-9])*)))|(([0][B]|[0][H])([0-9A-F]*[.](([1-9][0-9])|[0-9A-F])*|0))
BCONST            (TRUE|FALSE)
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

{BCONST}        { token_print(T_BCONST); return T_BCONST; }

{ID}            { token_print(T_ID); return T_ID; }
{ICONST}        { token_print(T_ICONST); return T_ICONST; }
{RCONST}        { token_print(T_RCONST); return T_RCONST; }
{CCONST}        { token_print(T_CCONST); return T_CCONST; }



\"              { strcpy(str_buffer, ""); BEGIN(STRING); }
<STRING>\"      { BEGIN(INITIAL); printf("Found string: '%s' \n", str_buffer); return T_STRING; }
<STRING>(\\\n|\\\r\n) {  }
<STRING>(\\.|[^"\\]) {
                        if (strlen(yytext) == 2) {
                            if (strcmp(yytext, "\\n") == 0) {
                                strcat(str_buffer, "\n");
                            } else if (strcmp(yytext, "\\t") == 0) {
                                strcat(str_buffer, "\t");
                            } else if (strcmp(yytext, "\\r") == 0) {
                               strcat(str_buffer, "\r");
                            } else if (strcmp(yytext, "\\f") == 0) {
                               strcat(str_buffer, "\f");
                            } else if (strcmp(yytext, "\\b") == 0) {
                              strcat(str_buffer, "\b");
                           } else if (strcmp(yytext, "\\v") == 0) {
                              strcat(str_buffer, "\v");
                           }
                            else {
                                strcat(str_buffer, &yytext[1]);
                            }
                        } else {
                            strcat(str_buffer, yytext);
                        }

                         }
<STRING>(\n|\r\n)   { yyerror("New line found without \\ \n"); }
<STRING><<EOF>>     { yyerror("Unterminated string"); }
<STRING>.           { yyerror("Unknown character.");  }




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

.               { yyerror("Unrecognised character"); }

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
    if (token_id == T_ICONST) {
        printf("[Line %d] INTEGER TOKEN \'%s\' (%d). Base 10: %d\n", yylineno, yytext, token_id, str_to_int(yytext));
    } else if (token_id == T_RCONST) {
        printf("[Line %d] FLOAT TOKEN \'%s\' (%d). Base 10: %.3f\n", yylineno, yytext, token_id, str_to_float(yytext));
    } else {
      printf("Found token: \'%s\' (%d) at line %d\n", yytext, token_id, yylineno);
    }
}

int str_to_int(char *str) {
    if ( strncmp(str, "0o", 2) == 0) {
        return (int) strtoll(&str[2], NULL, 8);
    } else if (strncmp(str, "0b", 2) == 0) {
        return (int) strtoll(&str[2], NULL, 2);
    } else if (strncmp(str, "0x", 2) == 0) {
        return (int) strtoll(&str[2], NULL, 16);
    } else {
        return (int) strtoll(str, NULL, 10);
    }
}

float str_to_float(char *str) {

     if (strncmp(str, "0B", 2) == 0) { // bin
        printf("found bin \n");
        return (float) BinToFloat(str);
    } else if (strncmp(str, "0H", 2) == 0) { //hex
        printf("found Hex \n");
        return (float) HexToFloat(str);
    } else { //dec
        return (float) strtof(str, NULL);
    }
}

float BinToFloat(char* str){
    float number = 0.0;
    int i,length_real;
    char *character;
    character = strchr(str,'.');
    length_real = strlen(character)-1;
    number = (int)strtol(&str[2],&character,2);
    for(i=1;i<length_real;i++){
        number += (character[i] - '0') * (1/pow(2,i));
    }
    return number;
}

float OctToFloat(char* str){
    float number = 0.0;
    int i,length_real;
    char *character;
    character = strchr(str,'.');
    length_real = strlen(character)-1;
    number = (int)strtol(&str[2],&character,8);
    for(i=1;i<=length_real;i++){
        number += (character[i] - '0') * (1/pow(8,i));
    }
    return number;
}

float HexToFloat(char*str){
    float number = 0.0;
    int i,length_real;
    char *character;
    character = strchr(str,'.');
    length_real = strlen(character)-1;
    number = (int)strtol(&str[2],&character,16);
    for(i=1;i<=length_real;i++){
        if(character[i] <= '9')
			number += (character[i] - '0') * (1/pow(16,i));
		else
			number += (character[i] + 10 - 'A') * (1/pow(16,i));
	}
    return number;
}

void yyerror(const char* error) {
    printf("Found error: %s at line %d\n", error, yylineno);
}



