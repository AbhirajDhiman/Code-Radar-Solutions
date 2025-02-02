#include <stdio.h>
int zero(unsigned int n){
    int count=0;
    for(int i=31;i>=0;i--){
        if ((num & (1<<i))==0){
            count++;
        }else{
            break;
        }
    }
    return count;
}
int main(){
    unsigned int num;
    scanf("%d",&num);
    int hehe=zero(num);
    printf("%d",hehe);
    return 0;
}