#include <stdio.h>

#define LOWER 0
#define UPPER 10
#define STEP 1

int main(){
    for(int i = LOWER;i<UPPER;i+=STEP){
        printf("i is %d\n", i);
    }
}
