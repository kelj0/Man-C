#include <stdio.h>

int main(){
    printf("getchar() == EOF > %d\n",getchar() == EOF);
    getchar(); // suck newline
    int c = getchar();
    printf("c(%d) == EOF > %d\n",c,c == EOF);
    printf("c > %c\n",c);
    
    return 0;
}
