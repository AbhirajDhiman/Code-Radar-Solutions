#include <stdio.h>

int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a*b<0){
        printf("Different Sign");
    }else{
        printf("Same Sign");
    }
    return 0;
}