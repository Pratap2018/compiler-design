## Command to run this entire thing 
- [x] Remember => `//---END---//` MUST BE ADDED TO YOUR INPUT FILE   
#### STEPS :
- `lex token_lex.l`
    - [x] lex.yy.c Generated
- `gcc token_separate.c lex.yy.c  token_separate.h -o output`
    - [x] output File gets generated
- `output <test_code.c`
    - [x] output is displayed


##### Command 
![alttext](/images/command.png)

##### Output
![alttext](/images/OUTPUT.png)


