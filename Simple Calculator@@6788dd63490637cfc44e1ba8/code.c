#include <stdio.h>

int main(){
    float a,b;
    char ch;
    scanf("%f %f %c",&a,&b,&ch);
    switch(ch){
        case '+':
            printf("%d",a+b);
        case '-':
            printf("%d",a-b);
        case '/':
            printf("%d",a/b);
        case '*':
            printf("%d",a*b);
        break;      
    }
    return 0;
}