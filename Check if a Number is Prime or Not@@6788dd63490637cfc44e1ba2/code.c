#include <stdio.h>
int main(){
    int a;
    for(int i=2;i<=a;i++){
        if(i==2 || i==3 || i==5 || i==7){
            printf("Prime");
        }else if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0 && i%i==0 && i%1==0){
            printf("Prime");
        }else{
            printf("Not Prime");
        }
    }
    return 0;
}