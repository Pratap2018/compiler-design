%{
    #include "token_separate.h"
%}

%%
\/\*(.*)\*\/  {return MULT_COMMENT;}
; {return ENDOFSTMT ;}
"int"|"float"|"double"|"long"|"char"   {return Datatype;}
"while"|"if"|"else"|"for"|"do"|"case"|"switch"|"break"|"const"|"default"  { return Keyword;} 
"+"|"-"|"/"|"*"|"=="|"&"|"&&"|"||"|"^"|"++"|"--"|"+="|"-="|"/="|"*="|"=" {return Operator;}

"," {return DELEMETER;}
\/\/---END---\/\/ {return 0;}
\/\/(.*) {return SINGLE_COMMENT;}
#include(.*) {return Preprocessor_d;}

[a-zA-Z_]+[0-9]*  {return Identifier;} 
[\n] {return Newline;}
[ \t\r] {return Space;}

\"(.*)\"   {return String;}
%%
int yywrap(void){
    return 0;
}


