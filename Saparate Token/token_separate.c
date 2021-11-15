
#include <stdio.h>

#include "token_separate.h"
extern int yylex();
extern char* yytext; 
extern int yylineno;

int main(){
    int status_Token;
    status_Token=yylex();
    while (status_Token)
    {
        if (status_Token!=ENDOFSTMT)
        {
            switch (status_Token)
            {
            case Preprocessor_d:
                printf("%s Preprocessor  { Found at line no %d }\n",yytext,yylineno);
            break;
            case Datatype:
                printf("%s ==>  Datatype  { Found at line no %d }\n",yytext,yylineno);
            break;
            case Keyword:
                printf("%s ==> Keyword  { Found at line no %d }\n",yytext,yylineno);
            break;
             case MULT_COMMENT:
                printf("%s ==> MULT_COMMENT  { Found at line no %d }\n",yytext,yylineno);
            break;
             case SINGLE_COMMENT:
                printf("%s ==> SINGLE_COMMENT  { Found at line no %d }\n",yytext,yylineno);
            break;
             case String:
                printf("%s ==> String  { Found at line no %d }\n",yytext,yylineno);
            break;
             case Identifier:
                printf("%s ==> Identifier { Found at line no %d }\n",yytext,yylineno);
            break;
              case Operator:
                 printf("%s ==> Operator { Found at line no %d }\n",yytext,yylineno);
             break;
             case ENDOFSTMT:
                printf("%s ==> ENDOFSTMT  { Found at line no %d }\n",yytext,yylineno);
            break;
            case DELEMETER:
                printf("%s ==> DELEMETER  { Found at line no %d }\n",yytext,yylineno);
            break;
            /*
             case Newline:
                ++yylineno;
            break;*/

            default:
            
                break;
            }
            
            if(status_Token==0){
                break;
            }
        }else
        {
            printf("\nEnd of the Statement \n");
        }
        status_Token=yylex();
        
    }
    
    
    
}



//---END---//