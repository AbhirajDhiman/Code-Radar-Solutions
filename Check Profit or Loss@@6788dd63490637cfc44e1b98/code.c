#include <stdio.h>

int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<b){
        printf("Profit");
    }else if(a==b){
        printf("No Profit No Loss");
    }else{
        printf("Loss");
    }
    return 0;
}