#include <stdio.h>
#include <string.h>
int main(){
    char s1[] = {'S','t','r','i','n','g',' ','1','\0'};
    char s2[] = {'S','t','r','i','n','g',' ','2'};
    printf("Testing s1, has \\0 on end -> %s\n",s1);
    printf("Testing s2, missing \\0 on end -> %s\n",s2);
    strcpy(s2,"String 2\0");
    printf("Added \\0 to s2 -> %s\n",s2);   
    return 0;
}
