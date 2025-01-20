#include <stdio.h>

int main(){
    int a,b,c;
    if(a+b>c && a+c>b && b+c>a){
        printf("Valid");
    }else{
        printf("Invalid");
    }
    return 0;
}