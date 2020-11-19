#include "tokens.h"
#include <stdio.h>

extern int yylex();
extern int yytext;

int tokens(){
    //int tok;
    while((tokenActual=yylex())!=0)
    {
        switch(tokenActual){
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
        }
    }
        
       /* 
        switch(tok)
        {
            case 1:
                printf("<\\n>\n");
            	fprintf(yyout,"<\\n> \n");
                break;
            case 2:
                printf("<num, %s > \n",yytext);
            	fprintf(yyout,"<num, %s > \n",yytext);
                break;                
            case 3:
                printf("<PR, registro>\n");
            	fprintf(yyout,"<PR, registro>\n");
                break;
            case 4:
                printf("<PR, inicio>\n");
            	fprintf(yyout,"<PR, inicio>\n");
                break;
            case 5:
                printf("<PR, fin>\n");
            	fprintf(yyout,"<PR, fin>\n");
                break;
            case 6:
                printf("<PR, func>\n");
            	fprintf(yyout,"<PR, func>\n");
                break;
            case 7:
                printf("<PR, ent>\n");
            	fprintf(yyout,"<PR, ent>\n");
                break;
            case 8:
                printf("<PR, real>\n");
            	fprintf(yyout,"<PR, real>\n");
                break;      
            case 9:
                printf("<PR, dreal>\n");
            	fprintf(yyout,"<PR, dreal>\n");
                break;
            case 10:
                printf("<PR, car>\n");
            	fprintf(yyout,"<PR, car>\n");
                break;
            case 11:
                printf("<PR, sin>\n");
            	fprintf(yyout,"<PR, sin>\n");
                break;
            case 12:
                printf("<PR, Si>\n");
            	fprintf(yyout,"<PR, Si>\n");
            	break;
            case 13:
                printf("<PR, entonces>\n");
            	fprintf(yyout,"<PR, entonces>\n");
            	break;
            case 14:
                printf("<PR, sino>\n");
            	fprintf(yyout,"<PR, sino>\n");
            	break;
            case 15:
                printf("<PR, mientras>\n");
            	fprintf(yyout,"<PR, mientras>\n");
            	break;
            case 16:
                printf("<PR, hacer>\n");
            	fprintf(yyout,"<PR, hacer>\n");
            	break;
            case 17:
                printf("<PR, mientras que>\n");
            	fprintf(yyout,"<PR, mientras que>\n");
            	break;
            case 18:
                printf("<PR, escribir>\n");
            	fprintf(yyout,"<PR, escribir>\n");
            	break;
            case 19:
                printf("<PR, leer>\n");
        		fprintf(yyout,"<leer>\n");
            	break;
            case 20:
                printf("<PR, devolver>\n");
            	fprintf(yyout,"<PR, devolver>\n");
            	break;
            case 21:
                printf("<OPL, oo>\n");
            	fprintf(yyout,"<OPL, oo>\n");
            	break;
            case 22:
                printf("<OPL, yy>\n");
            	fprintf(yyout,"<OPL, yy>\n");
            	break;
            case 23:
                printf("<OPL, no>\n");
            	fprintf(yyout,"<OPL, no>\n");
            	break;
            case 24:
                printf("<PR, verdadero>\n");
            	fprintf(yyout,"<PR, verdadero>\n");
            	break;
            case 25:
                printf("<PR, falso>\n");
            	fprintf(yyout,"<PR, falso>\n");
            	break;
            case 26:
                printf("<OPA, := >\n");
            	fprintf(yyout,"<asignacion, := >\n");
            	break;
            case 27:
                printf("<OPR, < >\n");
            	fprintf(yyout,"<OPR, < >\n");
            	break;
            case 28:
                printf("<OPR, > >\n");
            	fprintf(yyout,"<OPR, > >\n");
            	break;
            case 29:
                printf("<OPR, <= >\n");
            	fprintf(yyout,"<OPR, <= >\n");
            	break;
            case 30:
                printf("<OPR, >= >\n");
            	fprintf(yyout,"<OPR, >= >\n");
            	break;
            case 31:
                printf("<OPR, == >\n");
            	fprintf(yyout,"<OPR, == >\n");
            	break;
            case 32:
                printf("<OPR, <> >\n");
            	fprintf(yyout,"<OPR, <> >\n");
            	break;
            case 33:
                printf("<OP, + >\n");
            	fprintf(yyout,"<OP, + >\n");
            	break;
            case 34:
                printf("<OP, - >\n");
            	fprintf(yyout,"<OP, - >\n");
            	break;
            case 35:
                printf("<OP, * >\n");
            	fprintf(yyout,"<OP, * >\n");
            	break;
            case 36:
                printf("<OP, / >\n");
            	fprintf(yyout,"<OP, / >\n");
            	break;
            case 37:
                printf("<OP, %s >\n",yytext);
            	fprintf(yyout,"<OP, %s >\n",yytext);
            	break;
            case 38:
                printf("< ( >\n");
            	fprintf(yyout,"< ( >\n");
            	break;
            case 39:
                printf("< ) >\n");
            	fprintf(yyout,"< ) >\n");
            	break;
            case 40:
                printf("< [ >\n");
            	fprintf(yyout,"< [ >\n");
            	break;
            case 41:
                printf("< ] >\n");
            	fprintf(yyout,"< ] >\n");
            	break;
            case 42:
                printf("< . >\n");
            	fprintf(yyout,"< . >\n");
            	break;
            case 43:
                printf("< , >\n");
            	fprintf(yyout,"< , >\n");
            	break;
            case 44:
                printf("< car, %s > \n",yytext);
            	fprintf(yyout, "< car, %s > \n",yytext);
            	break;
            case 45:
                printf("< cad, %s > \n",yytext);
            	fprintf(yyout, "< cad, %s > \n",yytext);
            	break;
            case 46:
                printf("< id, %s > \n",yytext);
            	fprintf(yyout, "< id, %s > \n",yytext);
            	break;
            
            	
        }*/



   // }
}