#include <stdio.h>

int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<b){
        printf("Profit");
    }else{
        printf("Loss");
    }
    return 0;
}