#include <stdio.h>

int isPrime(int n){
    if(n<=1){
        return 1;
    }
    if(n>2){
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                printf("0");
            }
        }
    }
    return 1;
}