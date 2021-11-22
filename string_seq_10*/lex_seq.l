%{
#include "lex_seq.h"
%}


%%
^10[1|0]* {return MATCHED;}
END {return END;}

[ /n] {return SPACE;}

. ;

%%


int yywrap(){
    return 1;

}