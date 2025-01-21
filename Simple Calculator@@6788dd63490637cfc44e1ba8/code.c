#include <stdio.h>

int main(){
    int a,b;
    char sign;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&sign);
    if (char=="+"){
        printf("%d",a+b);
    }else if(char=="-"){
        printf("%d",a-b);
    }else if(char == "%"){
        if(b!=0){
        printf("%d",a%b);
        }else{
            printf("None");
        }
    }else if(char=="*"){
        printf("%d",a*b);
    }else{
        printf("Invalid");
    }
    return 0;
}