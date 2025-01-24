#include <stdio.h>
#include <stdbool.h>

bool isprime(int num){
    if (num<=1){
        return false;

    }
    for(int i=2;i*i<=num;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int num;
    scanf("%d",&num);
    if(isprime(num)){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}