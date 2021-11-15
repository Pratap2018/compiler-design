%%
for|while   {return 1;}
"END"   {return 2;}
[a-zA-Z]+   {return 0;}
.;
%%


int yywrap(){
    return 1;
}


int main(){
    int count=0,n;
    
    printf("%d ",n);
     while(1){     
        n=yylex();   
        if(n==1) count++;
        if(n==2) break ;
    }
    printf("%d is the count of the keyword ", count);
    return 0;
}