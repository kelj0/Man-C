#include <stdio.h>

int main(){
    int c;
    while((c = getchar()) != '\n'){
        if(c == ' ')
            putchar('\n');
        else
            putchar(c);
    }

    return 0;
}
