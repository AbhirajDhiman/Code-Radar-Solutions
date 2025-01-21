#include <stdio.h>

int main(){
    int a,b;
    char sign;
    scanf("%d",&a);
    scanf("%d",&b);
    if (char=="+"){
        printf(a+b);
    }else if(char=="-"){
        printf(a-b);
    }else if(char == "%"){
        printf(a%b);
    }else{
        printf(a*b);
    }
    return 0;
}