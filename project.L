%{
    #include <stdio.h>
    #include<string.h>
    #include "project.tab.h"
    #include <stdlib.h>
    void yyerror(char *);
%}
digits         [-]?[0-9]+
alphabets      [a-zA-z]
alpha_numbers  [a-zA-Z0-9]


%%
"array:"     {return ARRAY ;}
"int:"       {return TYPE_INT ;}
"float:"     {return TYPE_FLOAT;}
"if:"         {return IF;}
"either:"      {return EITHER;}
"last:"         {return LAST;}
"for:"         {return FOR;}
"while:"         {return WHILE;}
"case:"           {return CASE;}
"switch:"           {return SWITCH;}
"sort:"            {return SORTT;} 
"reversesort:"            {return DESSORTT;} 
{digits}                        {yylval.integer= atoi(yytext); return INT ;}  
{digits}.{digits}               {yylval.float_val  = atof(yytext);  return FLOAT ;} 
{alphabets}({alpha_numbers})*   {yylval.str = strdup(yytext);    return VARIABLE ;} 
"main_puja()" { return PUJA;}
"print:"      { return PRINT;}
"lengthstring:"      { return LENGTHSTRING;}
"("   { return LEFT;}
")"   { return RIGHT;}
"{"   {return LEFTBRACE; }
"}"   { return RIGHTBRACE;}
","   { return COMMA;}
";"   { return SEMICOLON;}
"+"   { return PLUS;}
"-"   { return MINUS;}
"*"   { return MUL;}
"/"   { return DIV;}
"%"   { return MOD;}
"++"   { return INCREASE;}
"--"   { return DECREASE;}
"="   { return EQUAL;}
"=="  { return EQUALEQUAL;}
"<"   { return LESSTHAN;}
">"   { return GREATERTHAN;}
"&&"   { return AND;}
"||"   { return OR;}
"!="   { return NOTEQUAL;}
['](.*)[']                      {yylval.str = strdup(yytext);  return STRING ;} 

[/][/].*   ;           {printf("single line comment\n");}
"@@"[^@@]*"@@"  ;      {printf("multi line comment\n");}

[ \n\t]   


%%
