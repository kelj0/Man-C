#include <stdio.h>

int main(){
    printf("(getchar != EOF) == %d\nEOF == %d",(getchar() != EOF) ,EOF);
    return 0;
}
