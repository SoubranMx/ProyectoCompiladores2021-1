#include "tokens.h"
#include <stdio.h>
#include "parser.h"

int tokenActual;

void E(){
	T();
	EP();
}

void EP(){
	if (tokenActual==MAS){
		tokenActual = yylex();
		E();
	}
}

void T(){
	F();
	TP();
}

void TP(){
	if(tokenActual==MUL){
		tokenActual = yylex();
		T();
	}
}

void F(){
	switch(tokenActual){
		case PARI:
			tokenActual = yylex();
			E();
			if(tokenActual==PARD)
			tokenActual =yylex();
			else
				error();
			break;
		case ID:
			tokenActual = yylex();
			break;
		default:
			error();
			break;
	}
}

void error(){
	printf("Error de sintaxis\n");
}
