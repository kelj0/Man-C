#include <stdio.h>

int main(){
    int a[] = {9,9,9};
    int i = 0;
    a[i] = i++;
    for(unsigned x=0;x<3;++x)
        printf("%d\n",a[x]);

    return 0;
}
