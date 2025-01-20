#include <stdio.h>

void sw(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d",a);
    printf("%d",a);
    return 0;
}
int main(){
    int a;
    int b;
    scanf("%d",&a);
    scanf("%d",&b)
    sw(a,b);

}