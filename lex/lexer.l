%{
#include "lexer.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

int errors = 0;
%}


DIGIT             [0-9]
LETTER            [a-zA-Z]
ALPHANUM          {LETTER}|{DIGIT}
NUMBER            [1-9][0-9]*|0
ID                _?[LETTER]([ALPHANUM]*|[_]*[ALPHANUM])*[^_]
WHITESPACE        [ \t]
ICONST           ([1-9][0-9]*|0)([0H][1-9](([0-9]*)|([A-F]+))*)*([OB][1][0-1]*)*

alpha             [a-zA-Z]
nalpha            [^a-zA-Z]
digit             [0-9]
digitn            [1-9]
hex_digit         [0-9A-F]
hex_digitn        [1-9A-F]
alphanum          [a-zA-Z0-9]
alphanumu         [a-zA-z0-9_]



%option case-insensitive
%option noyywrap
%option yylineno

%%


"PROGRAM"       {}
"CONST"
"TYPE"
"ARRAY"
"SET"
"OF"
"RECORD"
"VAR"
"FORWARD"
"FUNCTION"
"PROCEDURE"
"INTEGER"
"REAL"
"BOOLEAN"
"CHAR"
"BEGIN"
"END"
"IF"
"THEN"
"ELSE"
"WHILE"
"DO"
"FOR"
"DOWNTO"
"TO"
"WITH"
"READ"
"WRITE"




ID          {printf(ID)}
ICONST      { printf(T_ICONST) }



[ \t]       {  }
[\n]        {  }
[\r\n]      {  }
<<EOF>>     { print() }

.           { print("Unrecognised character at line %d!\n", yylineno); }
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

    if(error_count > 0){
        printf("Failed to analyze the program due to %d errors\n", error_count);
    }else{
        printf("Program analyzed successfully\n");
    }
    fclose(yyin);
    yyterminate();
}