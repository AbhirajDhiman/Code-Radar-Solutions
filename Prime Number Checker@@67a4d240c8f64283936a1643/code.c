#include <stdio.h>

int isPrime(int n){
    if(n<=1){
        return 0; 
    }else{
        for(int i=1;n*n<=i;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
}
