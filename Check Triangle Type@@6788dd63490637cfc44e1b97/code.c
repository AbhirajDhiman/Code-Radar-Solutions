#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a==b && b==c){
        printf("Isosceles");
    }else if(a==b || b==c || a==c){
        printf("Equilateral");
    }else{
        printf("Scalene");
    }
    return 0;
}