#include <stdio.h>

int main(){
    int c;
    int nchars[5] = {0};
    int counter=0;
    int longestWord = 0;
    while((c=getchar()) != EOF){
        if(c == ' ' || c == '\n'){
            if(nchars[counter] > longestWord){
                longestWord = nchars[counter];
            }
            ++counter;
            if(c=='\n')
                break;
        }
        else{
            ++nchars[counter];
        }
    }
    printf("char counter graph:\n[1][2][3][4][5]\n");
    for(unsigned i=0; i<longestWord; ++i){
        for(unsigned j=0;j<5;++j){
            if(nchars[j]-- > 0){
                printf(" + ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}
