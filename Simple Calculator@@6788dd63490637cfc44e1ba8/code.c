#include <stdio.h>
int main(){
    int a,b;
    char ch;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf(" %c",&ch);
    switch(ch){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;      
        case '/':
            if(b==0)
                printf("error");
            else
                printf("%d",a/b);
            
            break;
        default:
            printf("Error");
} 
    return 0;
}