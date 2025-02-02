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
    unsigned int n;
    scanf("%u",&n);
    int hehe=zero(n);
    printf("%d",hehe);
    return 0;
}