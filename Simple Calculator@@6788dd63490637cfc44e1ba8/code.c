#include <stdio.h>

int main(){
    int a,b;
    char sign;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&sign);
    if (sign=="+"){
        printf("%d",a+b);
    }else if(sign=="-"){
        printf("%d",a-b);
    }else if(sign == "%"){
        if(b!=0){
        printf("%d",a%b);
        }else{
            printf("None");
        }
    }else if(sign=="*"){
        printf("%d",a*b);
    }else{
        printf("Invalid");
    }
    return 0;
}