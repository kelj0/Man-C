#include <stdio.h>

int power(int m, int n){        // + 
    int p = 1;                  // | this is a function definition
    for(int i = 1;i <= n; ++i)  // |
        p = p * m;              // |
    return p;                   // |
}

void printHello(){
    printf("Hello from function :)\n");
}

int main(){
    int Two_to_the_power_of_three = power(2,3);
    printf("%d\n",Two_to_the_power_of_three);
    printHello();
    return 0;
}
