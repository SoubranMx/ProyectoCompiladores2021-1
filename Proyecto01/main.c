#include "tokens.h"
#include <stdio.h>
extern FILE *yyin;
extern int yylex();

int main(int argc, char** argv){
    FILE  *f;
    if (argc< 2){
        printf("Falta nombre del archivo\n");
        return -1;
    }
    f = fopen(argv[1], "r");
    if(!f){
        printf("No se puede abrir el archivo\n");
        return -1;
    }
    yyin = f;
    
    tokens();

    
    if(tokenActual == 0)
        printf("\n\nFinalizacion de Analizador Lexico\n");
    
    return 0;
}