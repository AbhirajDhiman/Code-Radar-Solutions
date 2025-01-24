#include <stdio.h>
void hello(int num){
    int binary[32];
    int index=0;

    while (num>0){
        binary[index]=index%2;
        num=num/2;
        index++;
    }
    for(int i=index-1;i>=0;i--){
        printf("%d",binary[i]);
    }
    printf("\n");
}
int main(){
    int a;
    scanf("%d",&a);
    if(num==0){
        printf("Enter Value:\n");
    }else{
        hello(num);
    }
    return 0;
}