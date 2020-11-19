#include "tokens.h"
#include <stdio.h>

extern int yylex();
extern int yytext;

int tokens(){
    //int tok;
    while((tokenActual=yylex())!=0)
    {
        switch(tokenActual){
            //Literales
            case lit_ENTERO:
                printf("<%d, %s>\n",lit_ENTERO, yytext);
                break;
            case lit_FLOTANTE:
                printf("<%d, %s>\n",lit_FLOTANTE, yytext);
                break;
            case lit_IMAGINARIO:
                printf("<%d, %s>\n",lit_IMAGINARIO, yytext);
                break;
            case lit_STRING:
                printf("<%d, %s>\n",lit_STRING, yytext);
                break;
            case lit_BOOL:
                printf("<%d, %s>\n",lit_BOOL, yytext);
                break;

            //Palabras Reservadas
            case PR_if:
                printf("<%d, %s>\n",PR_if, yytext);
                break;
            case PR_else:
                printf("<%d, %s>\n",PR_else, yytext);
                break;
            case PR_for:
                printf("<%d, %s>\n",PR_for, yytext);
                break;
            case PR_switch:
                printf("<%d, %s>\n",PR_switch, yytext);
                break;
            case PR_case:
                printf("<%d, %s>\n",PR_case, yytext);
                break;
            case PR_default:
                printf("<%d, %s>\n",PR_default, yytext);
                break;
            case PR_return:
                printf("<%d, %s>\n",PR_return, yytext);
                break;
            case PR_break:
                printf("<%d, %s>\n",PR_break, yytext);
                break;
            case PR_continue:
                printf("<%d, %s>\n",PR_continue, yytext);
                break;
            case PR_var:
                printf("<%d, %s>\n",PR_var, yytext);
                break;
            case PR_const:
                printf("<%d, %s>\n",PR_const, yytext);
                break;
            case PR_package:
                printf("<%d, %s>\n",PR_package, yytext);
                break;
            case PR_defer:
                printf("<%d, %s>\n",PR_defer, yytext);
                break;
            case PR_func:
                printf("<%d, %s>\n",PR_func, yytext);
                break;


            //Tipos de dato
            case TD_UINT8:
                printf("<%d, %s>\n",TD_UINT8, yytext);
                break;
            case TD_UINT16:
                printf("<%d, %s>\n",TD_UINT16, yytext);
                break;
            case TD_INT8:
                printf("<%d, %s>\n",TD_INT8, yytext);
                break;
            case TD_INT16:
                printf("<%d, %s>\n",TD_INT16, yytext);
                break;
            case TD_INT32:
                printf("<%d, %s>\n",TD_INT32, yytext);
                break;
            case TD_float32:
                printf("<%d, %s>\n",TD_float32, yytext);
                break;
            case TD_float64:
                printf("<%d, %s>\n",TD_float64, yytext);
                break;
            case TD_complex64:
                printf("<%d, %s>\n",TD_complex64, yytext);
                break;
            case TD_byte:
                printf("<%d, %s>\n",TD_byte, yytext);
                break;
            case TD_string:
                printf("<%d, %s>\n",TD_string, yytext);
                break;
            case TD_struct:
                printf("<%d, %s>\n",TD_struct, yytext);
                break;
            case TD_bool:
                printf("<%d, %s>\n",TD_bool, yytext);
                break;

            
            //Token para IDs
            case id:
                printf("<%d, %s>\n",id, yytext);
                break;
            

            //Tokens para Operaciones Booleanas
            case OB_or:
                printf("<%d, %s>\n",OB_or, yytext);
                break;
            case OB_and:
                printf("<%d, %s>\n",OB_and, yytext);
                break;
            case OB_equal:
                printf("<%d, %s>\n",OB_equal, yytext);
                break;
            case OB_notequal:
                printf("<%d, %s>\n",OB_notequal, yytext);
                break;
            case OB_minor:
                printf("<%d, %s>\n",OB_minor, yytext);
                break;
            case OB_minorequal:
                printf("<%d, %s>\n",OB_minorequal, yytext);
                break;
            case OB_greater:
                printf("<%d, %s>\n",OB_greater, yytext);
                break;
            case OB_greaterequal:
                printf("<%d, %s>\n",OB_greaterequal, yytext);
                break;
            case OB_negacion:
                printf("<%d, %s>\n",OB_negacion, yytext);
                break;
            case OB_andop:
                printf("<%d, %s>\n",OB_andop, yytext);
                break;
            

            //Tokens para operaciones aritmeticas
            case OA_suma:
                printf("<%d, %s>\n",OA_suma, yytext);
                break;
            case OA_resta:
                printf("<%d, %s>\n",OA_resta, yytext);
                break;
            case OA_mul:
                printf("<%d, %s>\n",OA_mul, yytext);
                break;
            case OA_div:
                printf("<%d, %s>\n",OA_div, yytext);
                break;
            case OA_mod:
                printf("<%d, %s>\n",OA_mod, yytext);
                break;
            

            //Tokens generales
            case pari:
                printf("<%d, %s>\n",pari, yytext);
                break;
            case pard:
                printf("<%d, %s>\n",pard, yytext);
                break;
             case llavei:
                printf("<%d, %s>\n",llavei, yytext);
                break;
            case llaved:
                printf("<%d, %s>\n",llaved, yytext);
                break;
            case coma:
                printf("<%d, %s>\n",coma, yytext);
                break;
            case puntocoma:
                printf("<%d, %s>\n",puntocoma, yytext);
                break;
            case punto:
                printf("<%d, %s>\n",punto, yytext);
                break;
            case asignacion:
                printf("<%d, %s>\n",asignacion, yytext);
                break;
            case masmas:
                printf("<%d, %s>\n",masmas, yytext);
                break;
            case menosmenos:
                printf("<%d, %s>\n",menosmenos, yytext);
                break;
            case dospuntos:
                printf("<%d, %s>\n",dospuntos, yytext);
                break;

            case apuntador:
                printf("<%d, %s>\n",apuntador, yytext);
                break;
            
            default:
                printf("Error Lexico  %s\n",yytext);
                break;
        }//switch
    }//while
}//funcion tokens