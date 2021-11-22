#include <stdio.h>
#include "lex_seq.h"

extern int yylex();
extern char* yytext;

int main(){
    int n=yylex();
    printf("\n\n\nPARSING \n");
    while (n)
    {
        switch (n)
        {
        case MATCHED:
            printf("%d ==> %s \n",n,yytext);
        break;
        case SPACE:
            printf("SPACE");
        break;
        }
        n=yylex();
        
    }
    

return 0;
}