/*
    Compiladores, Gpo 2, 2021-1
    Fecha elaboracion: 18/Nov/2020

    Analizador Lexico, Programa 1

    Programado por:
    Carrillo Dominguez Carlos Daniel
    Espinoza Vera Alberto
    Estrada Soubran Uriel Alejandro
    Guzman Marin Yared
    

    Forma de compilacion:

    flex main.l
    gcc main.c tokens.c lex.yy.c -o proy
    .\proy.exe entrada.txt
*/
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