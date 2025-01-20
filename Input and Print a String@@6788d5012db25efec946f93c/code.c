#include <stdio.h>

int main(){
    char str[200];
    gets(str);
    printf("You entered: %s", str);
    return 0;
}