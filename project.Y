
/* bison -d project.y flex project.l gcc lex.yy.c project.tab.c -o output */
%{
  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <ctype.h>
  int yylex(void);
  int yyerror(char *);
  typedef struct collection
   {
       char *var_name;
       char *var_type;
	   char *char_value;
       int   int_value;
       float float_value;
   }values;

   values numbers[1000];
   char *variableType;
   int which_is_used_now = 0;
   int which_is_used_now_for_array=300;
   int array_increament=0,flag=1,eitherval=1,caseval=0,caseflag=1,k=0;
   void Array_store_int(char *name,int size);
   void Array_store_float(char *name, int size);
   void Array_store_char(char *name, int size);
   int Check_Array_Variable (char *name);
   int Check_int_float_char_Variable(char *name);
   void Array_store_int_with_value(char *name,int array_position,int value,int position);
   void Array_store_float_with_value(char *name,int array_position,float value,int position);
   void IntValue  (values *pointer,char *name , int value );
   void FloatValue(values *pointer,char *name , float value );
   void CharValue(values *pointer,char *name , char *value );
   void What_Values_Are_In_VariableBox();
   void Sorting(int position,char *name);
   void SortingDes(int position,char *name);
   int Length (int position);
   void Display(int position);
   void Display_sentences(char *sentences);
   
   
   
%}

%union
{
      char     *str;
      int      integer;
      float    float_val;
}

%token PUJA LEFT RIGHT LEFTBRACE RIGHTBRACE LEFTTHIRD RIGHTTHIRD COMMA SEMICOLON PLUS MINUS MUL DIV  TYPE_FLOAT TYPE_INT ARRAY DESSORTT LENGTHSTRING
%token EQUAL EQUALEQUAL LESSTHAN GREATERTHAN PRINT MOD  SORTT IF  LAST EITHER  NOTEQUAL  AND OR INCREASE DECREASE FOR WHILE CASE SWITCH
%token <integer> INT
%token <float_val> FLOAT
%token <str> CHAR
%token <str> VARIABLE
%token <str> STRING
%type <integer> number
%type <integer> numberr
%type <float_val> fnumber
%left OR 
%left AND 
%left EQUALEQUAL NOTEQUAL 
%left LESSTHAN GREATERTHAN
%left PLUS MINUS 
%left MUL DIV MOD
%%

program:PUJA body     {printf("first line\n");}
        ;

body:LEFTBRACE statements RIGHTBRACE   {printf("the main code implemented\n");}
      ;



statements:/*empty*/
           |statements declaration   {}        
		   |statements printf        {}          
           |statements expressions   {}
		   |statements ifeitherlast  {}
		   |statements switchcase    {}
		   |statements loop          {}
		   |statements sorting       {}
           ;

		   
ifeitherlast: IF numberr LEFTBRACE if_statement RIGHTBRACE { flag=1;printf("if block was checked\n\n");} 
             |IF numberr  LEFTBRACE  if_statement RIGHTBRACE { if($2<=0) flag=1; else flag=0;} LAST LEFTBRACE if_statement RIGHTBRACE  { flag=1;printf("if last block was checked\n\n"); }
			
            |IF numberr  LEFTBRACE  if_statement RIGHTBRACE { if($2>0){flag=0;eitherval=0;}} EITHER numberr{if(eitherval==0){ flag=0; } else{if($8==0)flag=0; else flag=1;}}
		 LEFTBRACE if_statement RIGHTBRACE{ if($2==0 && $8==0)flag=1;else flag=0;} LAST LEFTBRACE if_statement RIGHTBRACE { flag=1; eitherval=1; printf("iflasteither block was checked\n\n");}
		 
			
			|IF numberr LEFTBRACE if_statement IF numberr {if($2==0) flag=0;} LEFTBRACE  if_statement RIGHTBRACE { if($6>0) flag=0; else{ if($2<=0)flag=0; else flag=1;}} 
			LAST LEFTBRACE  if_statement RIGHTBRACE  RIGHTBRACE  {flag=1;printf("nested if block was checked\n\n");} 
			;
	

switchcase: SWITCH VARIABLE {caseval= Check_int_float_char_Variable($2);if (caseval<=0){printf("invalid\n");} 
                                 else if ( strcmp(variableType,"char")==0){printf("invalid variable type\n");}    
									 } LEFT  casing RIGHT {caseflag=1;k=0; printf("switch block\n");}

;
casing:/*empty*/
       |casing CASE INT { if((numbers[caseval].int_value)==$3 ){ k++; caseflag=1; if(k>1){caseflag=0;} }
	                                                   else {caseflag=0;} } LEFTBRACE if_statement RIGHTBRACE {if (caseflag==1) printf("right block\n");}
	   |casing CASE FLOAT  LEFTBRACE {if((numbers[caseval].float_value)==$3) { k++;caseflag=1;  if(k>1){caseflag=0;} }
	                                                   else {caseflag=0;} } if_statement RIGHTBRACE {if (caseflag==1) printf("right block\n");}
			  
;
if_statement: /*empty*/
              |if_statement printf 
;			  
		  

loop:FOR  VARIABLE EQUAL INT  COMMA VARIABLE LESSTHAN INT COMMA VARIABLE INCREASE LEFT PRINT LEFT VARIABLE LEFT VARIABLE RIGHT RIGHT SEMICOLON RIGHT {
                                                                     int k,i,j,l; 
																	 char *input;
																	 l=Check_int_float_char_Variable ($2);
                                                                     if(l<0)
                                                                     {IntValue( &numbers[which_is_used_now] , $2 , $4 );
																	  l=Check_int_float_char_Variable ($2);
																	  input=variableType;
																	  
																	 }
																     else {l=Check_int_float_char_Variable ($2);
																	 input=variableType;
																	 
																       }
                                                                     k=Check_Array_Variable($15); 
																	 if(strcmp(input,"int")==0){
																	 if(k>=300)
                                                                     {for( numbers[l].int_value=$4; numbers[l].int_value<$8; numbers[l].int_value++)
                                                                       { 
												                        j= k+numbers[l].int_value;
																		
																	   if(strcmp(numbers[j].var_name,$15)==0)
                                                                        {
																		if(strcmp(numbers[j].var_type,"int")==0)
																		           printf("%d\n",numbers[j].int_value);
																		else
																		{
																		printf("%f\n",numbers[j].float_value);		   
																		  }
																		 
                                                                        } 
																		else
																		    printf("array variable type does not match\n"); 
																		
																		} printf("Succesful array print\n"); }
																		else
																		{ 
																		printf("invalid array variable\n");}}
																		else
																		 printf("invalid variable type declaration\n");
																		}																	   
     |FOR  VARIABLE EQUAL INT  COMMA VARIABLE GREATERTHAN INT COMMA VARIABLE DECREASE LEFT PRINT LEFT VARIABLE LEFT VARIABLE RIGHT RIGHT SEMICOLON RIGHT {
                                                                     int k,i,j,l; 
																	 char *input;
																	 l=Check_int_float_char_Variable ($2);
                                                                     if(l<0)
                                                                     {IntValue( &numbers[which_is_used_now] , $2 , $4 );
																	  l=Check_int_float_char_Variable ($2);
																	  input=variableType;
																	  
																	 }
																     else {l=Check_int_float_char_Variable ($2);
																	 input=variableType;
																	 
																       }
                                                                     k=Check_Array_Variable($15); 
																	 if(strcmp(input,"int")==0){
																	 if(k>=300)
                                                                     {for( numbers[l].int_value=$4; numbers[l].int_value>$8; numbers[l].int_value--)
                                                                       { 
												                        j= k+numbers[l].int_value;
																		
																	   if(strcmp(numbers[j].var_name,$15)==0)
                                                                        {
																		if(strcmp(numbers[j].var_type,"int")==0)
																		           printf("%d\n",numbers[j].int_value);
																		else
																		{
																		printf("%f\n",numbers[j].float_value);		   
																		  }
																		 
                                                                        } 
																		else
																		    printf("array variable type does not match\n"); 
																		
																		} printf("Succesful reversely array print\n"); }
																		else
																		{ 
																		printf("invalid array variable\n");}}
																		else
																		 printf("invalid variable type declaration\n");
																		}	  


;
sorting:SORTT VARIABLE SEMICOLON { int k=Check_Array_Variable($2); 
                                          if(k>=300)    
											  {Sorting(k,$2);} 
										 else
											{printf("array variable is not declared\n");}   printf("sort done\n");  }
       |DESSORTT VARIABLE SEMICOLON { int k=Check_Array_Variable($2); 
                                          if(k>=300)    
											  {SortingDes(k,$2);} 
										 else {printf("array variable is not declared\n");}
											  printf("reverse sort done\n");    }											
;
declaration:VARIABLE EQUAL INT SEMICOLON      {int k=Check_int_float_char_Variable($1);
                                                 if(k<0)
                                                     IntValue( &numbers[which_is_used_now] , $1 , $3 );
												 else
												 {if(strcmp(numbers[k].var_type,"int")==0)
												 numbers[k].int_value=$3;
												 else
												  printf("invalid type as previously declared\n");
                                               }
											   printf("declaration section\n");
											  }
            
		    |VARIABLE EQUAL FLOAT SEMICOLON         {int k=Check_int_float_char_Variable($1);
                                                       if(k<0)
			                                          FloatValue( &numbers[which_is_used_now] , $1 , $3 );
                                              	     	else
												 {if(strcmp(numbers[k].var_type,"float")==0)
												  { numbers[k].float_value=$3; }
												 else
												     printf("invalid type as previously declared\n");
                                               }
											       printf("float declaration section\n");   }	
												   
            
			|VARIABLE EQUAL STRING SEMICOLON         {int k=Check_int_float_char_Variable($1);
			                                              
                                                       if(k<0)
			                                              CharValue( &numbers[which_is_used_now] , $1 , $3 );
                                              	     	else
												 {if(strcmp(numbers[k].var_type,"char")==0)
												       numbers[k].char_value=$3;
												 else
												  printf("invalid type as previously declared\n");
                                               }
													 printf("string declaration section\n");	  
											         }										  
            									 
			|ARRAY TYPE_INT VARIABLE LEFT INT RIGHT SEMICOLON { if($5>1)
			                                                     { 
																 k=Check_Array_Variable($3);
																 if(k<300)
																   Array_store_int($3,$5);
																  else
                                                                      printf("Previously declared\n"); 
                                                                     																  
																 }
																 else
																 {
																 printf("enter array size greater than one\n");
																 }
                                                                 printf("array INT value store\n");
			                                                     }
			|ARRAY TYPE_FLOAT VARIABLE LEFT INT RIGHT SEMICOLON {if($5>1)
			                                                     {
																 k=Check_Array_Variable($3);
																 if(k<300)
																     Array_store_float($3,$5);
																else
                                                                      printf("Previously declared\n");	 
																 }
																 else
																 { printf("enter array  size greater than one\n");
																 }
			                                       
			                                                     printf("ARRAY FLOAT value store\n");
													            }	
            |VARIABLE LEFT INT RIGHT EQUAL INT SEMICOLON 	    {int k;
			                                                      
															     k=Check_Array_Variable($1);
																 
			                                                     if(k>=300)
			                                                    {
																 
																  Array_store_int_with_value ($1,$3,$6,k);
																}
																 else
																 { 
																 printf("Declaration is invalid\n");
																 }
			                                       
			                                                    printf("successful ARRAY store int type\n");
																 
													            }
            |VARIABLE LEFT INT RIGHT EQUAL FLOAT SEMICOLON 	    {int k;
			                                                      
															     k=Check_Array_Variable($1);
																 
			                                                     if(k>=300)
			                                                    {
																 
																Array_store_float_with_value($1,$3,$6,k);
																
																}
																 else
																 { 
																 printf("Declaration is invalid\n");
																 }
			                                       
			                                                    printf("successful ARRAY store float type\n");
																 
													            }	
            |VARIABLE EQUAL LENGTHSTRING LEFT VARIABLE RIGHT SEMICOLON {int k,a,l;
                                      k=Check_int_float_char_Variable($5);
									  
                                       if (k<0){printf("invalid string variable declaration\n");}
                                       else
                                       {
									   if(strcmp(numbers[k].var_type,"char")==0)
									   { a=Length(k);
									     
									     l=Check_int_float_char_Variable($1);
                                         if(l>=0 && strcmp(numbers[l].var_type,"int")==0 )
                                          { numbers[l].int_value= a;  numbers[l].float_value= a; printf("length of string function was activated\n"); }	
										  else if(l<0)
										  { IntValue( &numbers[which_is_used_now] , $1 , a ); printf("length of string function was activated\n");}
										  else
										    {printf("invalid variable type\n");}
									   }
									   else
									     {printf("invalid string variable type\n");}
									   }									   

												 }																
	        ;
printf: PRINT LEFT STRING RIGHT SEMICOLON	                    {
                                                                   if(flag>=1 && caseflag>=1)
                                                                   {Display_sentences($3);  printf("print string section\n");}
													            }
	
	    |PRINT LEFT variable_name RIGHT SEMICOLON              {  if(flag>=1 && caseflag>=1) printf("print variable section\n");}
		
		;
variable_name:/*empty*/
              |variable_name VARIABLE				           { if(flag>=1 && caseflag>=1)
                                                                 {int k;
																 k=Check_int_float_char_Variable($2);
																 if(k>=0)
																 {
																 
																  Display(k);
																 
																  //printf("print variable section\n");
																  
																 }
																 else
																  printf("Invalid variable name\n");
																 }}
													            												
	;
expressions: TYPE_INT VARIABLE EQUAL number SEMICOLON      { flag=1;int k= Check_int_float_char_Variable($2);
							   if(k<0)
							   {
							  
							    IntValue( &numbers[which_is_used_now] , $2 , $4 );
							   }
							   else
							    {
								 
								
								numbers[k].int_value=$4;
								numbers[k].float_value=$4;
								
								
								}
		
                               printf("successful expressions int \n"); 
							   }	
            |TYPE_FLOAT VARIABLE EQUAL fnumber SEMICOLON      { flag=1; int k= Check_int_float_char_Variable($2);
							   if(k<0)
							   {
							    FloatValue( &numbers[which_is_used_now] , $2 , $4 );
							   }
							   else
							    {
								 
								
								numbers[k].int_value=$4;
								numbers[k].float_value=$4;

								}
		
                               printf("successful expressions float\n"); 
							   }
            
	;
number: INT                  { $$=$1; }
        |VARIABLE            {
		                       int k= Check_int_float_char_Variable($1);
							   if(k<0)
							   {
							    printf("Declaration is invalid\n");
								
							   }
							   else
							    {
								if(strcmp(numbers[k].var_type,"int")==0)
								{
								$$=numbers[k].int_value;
								}
								else
								 printf("invalid type and should be int\n");
								}
		
		                         }
        |number PLUS number	          {$$= $1 + $3; }
		|number MINUS number		  {$$=$1 - $3;}
		|number MUL number	     	  {$$=$1 * $3;}
		|number DIV number		      { if ($3 != 0) { $$ = $1 / $3;  } else printf ("ERROR: DIVISION BY ZERO\n"); }
		|number MOD number	          { if ($3 != 0) { $$ = $1 % $3;  } else printf ("ERROR: DIVISION BY ZERO\n"); }
	  
     ; 
	 
numberr:INT                  { $$=$1; }
        |VARIABLE            {
		                       int k= Check_int_float_char_Variable($1);
							   if(k<0)
							   {
							    printf("Declaration is invalid\n");
								
							   }
							   else
							    {
								if(strcmp(numbers[k].var_type,"int")==0)
								{
								$$=numbers[k].int_value;
								}
								else
								 $$=numbers[k].float_value;
								}
		
		                         }
	    |numberr GREATERTHAN numberr	   {if($1>$3)
		                        
                                           {$$=1;
                                              flag=1;}	
											  else 
                                         {$$=0; flag=0;} 									 
									   }
		|numberr LESSTHAN numberr	   {if($1<$3)
		                                 {$$=1;
                                              flag=1;}										 
                                      else 
                                         {$$=0;flag=0;} 									  
									   }
		|numberr EQUALEQUAL numberr	   {if($1==$3)
		                        
                                           {$$=1;
                                              flag=1;}	
											  else 
                                         {$$=0; flag=0;} 									 
									   }
        |numberr NOTEQUAL numberr	   {if($1!=$3)
		                        
                                           {$$=1;
                                              flag=1;}	
											  else 
                                         {$$=0; flag=0;} 									 
									   }
        |numberr OR numberr          {if($1 || $3)
		                        
                                           {$$=1;
                                              flag=1;}	
											  else 
                                         {$$=0; flag=0;} 									 
									   }
        |numberr AND numberr 		{if($1 && $3)
		                        
                                           {$$=1;
                                              flag=1;}	
											  else 
                                         {$$=0; flag=0;} 									 
									   }
     ; 	 
	 
fnumber: FLOAT                {$$=$1;}   
        |VARIABLE            {
		                       int k= Check_int_float_char_Variable($1);
							   if(k<0)
							   {
							    printf("Declaration is invalid\n");
								
							   }
							   else
							    {
								if(strcmp(numbers[k].var_type,"float")==0)
								{
								$$=numbers[k].float_value;
								}
								else
								 $$=numbers[k].int_value;
								}
		
		                         }
        |fnumber PLUS fnumber	          {$$= $1 + $3;}
		|fnumber MINUS fnumber		       {$$=$1 - $3;}
		|fnumber MUL fnumber	     	  {$$=$1 * $3;}
		|fnumber DIV fnumber		      { if ($3 != 0) { $$ = $1 / $3;  } else printf ("ERROR: DIVISION BY ZERO\n"); }
		
     ; 
								 
																					  
         
%%
void IntValue(values *pointer,char *name , int value )
{
    pointer->var_type   = "int" ;
    pointer->var_name   = name  ;
    pointer->int_value  = value ;
    pointer->float_value = value;
	pointer->char_value = "int";
    which_is_used_now++ ;
}

void FloatValue(values *pointer,char *name , float value )
{
    pointer->var_type   = "float" ;
    pointer->var_name   = name  ;
    pointer->float_value = value ;
    pointer->int_value  = value    ;
	pointer->char_value = "float";
    which_is_used_now++ ;
}
void CharValue(values *pointer,char *name ,char *value )
{
int i,in=0;


    pointer->var_type   = "char" ;
    pointer->var_name   = name  ;
    pointer->float_value = -100009 ;
    pointer->int_value  = -100009     ;
	/*char *swap =(char*)malloc(numbers[which_is_used_now].int_value-1);
	//in=strlen(swap);
	
	for(i=1;i<numbers[which_is_used_now].int_value -1;i++)
	   { swap[i-1]=value[i];
	   
	   }*/
   
	pointer->char_value= value;
    which_is_used_now++ ;
}


int Check_int_float_char_Variable(char *name)
{
int i;
for(i=0;i<which_is_used_now;i++)
{
if(strcmp(numbers[i].var_name,name)==0)
{
variableType=numbers[i].var_type;
return i;
}
}
return -1;
}

void Array_store_int(char *name, int size)
{
int i=which_is_used_now_for_array;
which_is_used_now_for_array= i+size;

while(i<which_is_used_now_for_array)
{
 numbers[i].var_type   = "int" ;
   numbers[i].var_name   = name  ;
  numbers[i].float_value = size ;
  numbers[i].int_value  = size    ;
  numbers[i].char_value  = "int"    ;
	i++;
 }
}

void Array_store_float(char *name, int size)
{
int i=which_is_used_now_for_array;
which_is_used_now_for_array= i+size;

while(i<which_is_used_now_for_array)
{
 numbers[i].var_type   = "float" ;
 numbers[i].var_name   = name  ;
 numbers[i].float_value = size ;
 numbers[i].int_value  = size     ;
  numbers[i].char_value  = "float"    ;
	i++;
 }
}
int Check_Array_Variable (char *name)
{
int i,k;
for(i=300;i<which_is_used_now_for_array;i++)
{
 if(strcmp(numbers[i].var_name,name)==0)
 {
 //printf("%d\n",i);
 variableType=numbers[i].var_type;
 return i;
 }
 else
 continue;
}
return 0;
}

void Array_store_int_with_value(char *name,int array_position,int value,int position)
{
position=position+array_position;

if (array_position<numbers[position].float_value && strcmp(numbers[position].var_name,name)==0)
   {
   numbers[position].int_value=value;
  
   }
else
  printf("array assignment invalid\n");
}
void Array_store_float_with_value(char *name,int array_position,float value,int position)
{
position=position+array_position;

if (array_position<numbers[position].int_value && strcmp(numbers[position].var_name,name)==0)
   {
   numbers[position].float_value=value;
   }
else
  printf("array assignment invalid\n");
}
void Sorting (int position, char *name )
{
 if (strcmp(numbers[position].var_type,"int")==0)
  {int size,swap,c,d,i;
  size=numbers[position].float_value;
 
  int array[size];
    for(i=0;i<size;i++)
	  array[i]=numbers[position+i].int_value;
          
        for ( c = 0 ; c < size; c++)
        {
            for ( d = 0 ; d < size-1 ; d++)
            {
                if (array[d] > array[d+1]) 
                {
                   swap       = array[d];
                   array[d]   = array[d+1];
                   array[d+1] = swap;
                }
            }
        }
	for(i=0;i<size;i++)
	 numbers[position+i].int_value=  array[i];
		}
else
{int size,c,d,i;
float swap;
  size=numbers[position].int_value;
  float array[size];
    for(i=0;i<size;i++)
	  array[i]=numbers[position+i].float_value;
          
        for (int c = 0 ; c < size; c++)
        {
            for (int d = 0 ; d < size-1 ; d++)
            {
			if (array[d] > array[d+1]) 
                {
                   swap       = array[d];
                   array[d]   = array[d+1];
                   array[d+1] = swap;
                }
            }
        }
		for(i=0;i<size;i++)
	 numbers[position+i].float_value=  array[i];
		
		}		
}

void SortingDes (int position, char *name )
{
 if (strcmp(numbers[position].var_type,"int")==0)
  {int size,swap,c,d,i;
  size=numbers[position].float_value;
 
  int array[size];
    for(i=0;i<size;i++)
	  array[i]=numbers[position+i].int_value;
          
        for ( c = 0 ; c < size; c++)
        {
            for ( d = 0 ; d < size-1 ; d++)
            {
                if (array[d] < array[d+1]) 
                {
                   swap       = array[d];
                   array[d]   = array[d+1];
                   array[d+1] = swap;
                }
            }
        }
	for(i=0;i<size;i++)
	 numbers[position+i].int_value=  array[i];
		}
else
{int size,c,d,i;
float swap;
  size=numbers[position].int_value;
  float array[size];
    for(i=0;i<size;i++)
	  array[i]=numbers[position+i].float_value;
          
        for (int c = 0 ; c < size; c++)
        {
            for (int d = 0 ; d < size-1 ; d++)
            {
			if (array[d] < array[d+1]) 
                {
                   swap       = array[d];
                   array[d]   = array[d+1];
                   array[d+1] = swap;
                }
            }
        }
		for(i=0;i<size;i++)
	 numbers[position+i].float_value=  array[i];
		
		}	
}		
int Length(int position)
{ 
int aa;
aa=strlen(numbers[position].char_value);
aa=aa-2;
return aa;
}
void Display (int position)
{
if(strcmp(numbers[position].var_type,"float")==0)
{
printf("%f ",numbers[position].float_value);
}
else if(strcmp(numbers[position].var_type,"int")==0)
{
printf("%d ",numbers[position].int_value);
}
else
{

int length= strlen(numbers[position].char_value);
int i;
for(i=1;i<length-1;i++)
{

printf("%c",numbers[position].char_value[i]);
}
printf(" ");
}
}

void Display_sentences (char *sentences)
{ 
int length= strlen(sentences);
int i;
char a,c;
for(i=1;i<length-1;i++)
{
/*a=sentences[i];
c=sentences[i+1];
if(strcmp(a,"|")==0 && strcmp(c,"n")==0)
{
printf("\n");
i++;
}
else
{
printf("%c",sentences[i]);
}*/


printf("%c",sentences[i]);
}
}


int yywrap()
{
return 1;
}
int yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}
int main(void) {
  freopen("input.txt", "r", stdin);
    yyparse();
}         