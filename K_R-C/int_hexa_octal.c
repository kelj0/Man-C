#include <stdio.h>

int main(){
    int a = 65;
    int hex = 0x41;
    int octal = 0101;
    
    printf("Testing a,hex and octal variables\n\
            int 65 as char %c \n\
            int 0x41 as char %c\n\
            int 0101 as char %c\n",a,hex,octal);


    return 0;
}
