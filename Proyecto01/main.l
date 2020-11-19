%{
#include <stdio.h>
#include "tokens.h"
%}
%option yylineno
%option nowarn

/*ER Literales*/
id       		[a-zA-Z_][a-zA-Z_0-9]*
digito         [0-9]
enteros 		{digito}+([_]?{digito}+)*

decimal {enteros}*"."{enteros}+|{enteros}+"."
exp [eE][+-]?{enteros}+
notCientifica ({decimal}{exp}?|{enteros}+{exp})
imaginarios     {notCientifica}i


caux   [^\'\"\n]*
car \'{caux}\'
cad    "\""{caux}"\""

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

%%
{espacios}    {/**/}

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
func   {return TD_func;}
defer   {return TD_defer;}

{imaginarios}   {return lit_IMAGINARIO;}
{notCientifica}   {return lit_FLOTANTE;}
{enteros}   {return lit_ENTERO;}
{booleanas}   {return lit_BOOL;}
{car}   {return lit_STRING;}

.   {printf("Error\n");}
%%

int yywrap(){
    return 1;
}