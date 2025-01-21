#include <stdio.h>

int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a%3==0 && a%5==0){
        printf("Divisible by Both");
    }else if(a%3==0){
        printf("Divisible by 3");
    }else{
        printf("Divisible by 5");
    }
    return 0;
}