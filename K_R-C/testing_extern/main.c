#include <stdio.h>

int main(){
    extern a;
//    extern b;
    // note, i commented out extern b thus it should fail to compile
    // compile it with gcc main.c importme.c -o test.out
    // ./test.out -> error 'b' undeclared
    printf("a from importme.c == %d\n", a);
    printf("b from importme.c == %d\n", b);
    return 0;    
}
