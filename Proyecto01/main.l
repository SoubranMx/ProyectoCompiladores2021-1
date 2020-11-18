%{

%}
%option yylineno
%option nowarn

identificador 		[a-zA-Z_][a-zA-Z_0-9]*
enteros			[0-9]+([_]?[0-9]+)*
decimales		[0-9]*([\.]|[eE])[0-9]+
imaginarios		[0-9]*([\.]|[eE])[\+|\-]?[0-9]*[i]
%%

%%

int main (){

    return 0;
}
