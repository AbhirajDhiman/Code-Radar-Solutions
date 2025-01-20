#include <stdio.h>

int main(){
    char str1[100];
    char str2[100];
    gets(str1);
    gets (str2);
    printf("%s, %s",str1,str2);
    return 0;
}