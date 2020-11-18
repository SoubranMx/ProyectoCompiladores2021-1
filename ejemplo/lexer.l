%{
#include <stdio.h>
#include "tokens.h"
}%

%%

%option yylineno

id [a-zA-Z_][a-zA-Z_0-9]*

%%

"*" {return MUL;}
"+" {return MAS;}
"(" {return PARI;}
")" {return PARD;}
{id}	{return ID;}
[ \t\n\r\v]{}
.	{printf("Error Léxico\n");}

%%

int yywrap(){
	return 1;
}
