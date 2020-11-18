#ifndef PARSER_H
#define PARSER_H
#include <stdio.h>

extern int yylex();

int tokenActual;

void E();
void EP();
void T();
void TP();
void F();
void error();

#endif
