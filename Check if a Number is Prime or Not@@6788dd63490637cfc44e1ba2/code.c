#include <stdio.h>
#include <stdbool.h>

bool isprime(int num){
    if (num<=1){
        return false;

    }
    for(int i=2;i*i<=num;i++){
        if(i%2==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a;
    scanf("%d",&a);
    if(isprime(a)){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}