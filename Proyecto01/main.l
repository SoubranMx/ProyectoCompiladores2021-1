%{
#include <stdio.h>
#include "tokens.h"
%}
%option yylineno
%option nowarn

/*ER Literales*/
ids       		[a-zA-Z_][a-zA-Z_0-9]*
digito         [0-9]
enteros 		{digito}+([_]?{digito}+)*

decimal {enteros}*"."{enteros}+|{enteros}+"."
exp [eE][+-]?{enteros}+
notCientifica ({decimal}{exp}?|{enteros}+{exp})
imaginarios     {notCientifica}i


caux   [^\'\"\n]*
car \'{caux}\'
cad    \"{caux}\"

booleanas   true|false
espacios    [" "\t\n]*

/*ER Palabras Reservadas*/
PRif   if
PRelse   else
PRfor   for
PRswitch   switch
PRcase   case
PRdefault   default
PRreturn   return
PRbreak   break
PRcontinue   continue
PRvar  var
PRconst    const
PRpackage   package
PRdefer   defer

/*ER Tipos de Dato*/

pointer "*"" "[^{enteros}{notCientifica}{imaginarios}]+
%%
{espacios}    {/**/}

{car}   {return lit_STRING;}
{cad}   {return lit_STRING;}
{imaginarios}   {return lit_IMAGINARIO;}
{notCientifica}   {return lit_FLOTANTE;}
{enteros}   {return lit_ENTERO;}
{booleanas}   {return lit_BOOL;}


{PRif} {return PR_if;}
{PRelse} {return PR_else;}
{PRfor} {return PR_for;}
{PRswitch} {return PR_switch;}
{PRcase} {return PR_case;}
{PRdefault} {return PR_default;}
{PRreturn} {return PR_return;}
{PRbreak} {return PR_break;}
{PRcontinue} {return PR_continue;}
{PRvar} {return PR_var;}
{PRconst} {return PR_const;}
{PRpackage} {return PR_package;}
{PRdefer} {return PR_defer;}

uint8   {return TD_UINT8;}
uint16   {return TD_UINT16;}
int8   {return TD_INT8;}
int16   {return TD_INT16;}
int32   {return TD_INT32;}
float32   {return TD_float32;}
float64   {return TD_float64;}
complex64   {return TD_complex64;}
byte   {return TD_byte;}
bool   {return TD_bool;}
struct   {return TD_bool;}
func   {return PR_func;}
defer   {return PR_defer;}



"||"    {return OB_or;}
"&&"    {return OB_and;}
"=="    {return OB_equal;}
"!="    {return OB_notequal;}
"<"    {return OB_minor;}
"<="    {return OB_minorequal;}
">"    {return OB_greater;}
">="    {return OB_greaterequal;}
"!"    {return OB_negacion;}
"&"    {return OB_andop;}

"+"    {return OA_suma;}
"-"    {return OA_resta;}
"*"    {return OA_mul;}
"/"    {return OA_div;}
"%"    {return OA_mod;}

"("    {return pari;}
")"    {return pard;}
"{"    {return llavei;}
"}"    {return llaved;}
","    {return coma;}
";"    {return puntocoma;}
"."    {return punto;}
"="    {return asignacion;}
"++"    {return masmas;}
"--"    {return menosmenos;}
":"    {return dospuntos;}




{ids}    {return id;}

.   {printf("Error %s\n",yytext);}
%%

int yywrap(){
    return 1;
}
