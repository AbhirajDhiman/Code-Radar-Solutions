#include <stdio.h>
int dectobinary(int num){
    if(num==0){
        return 0;
    }
    int ans=0,pow=1;
    while(num>0){
        int rem=num%2;
        ans+=rem*pow;
        pow*=10;
        num/=2;
    }
    return ans;
}


int main(){
    int a;
    scanf("%d",&a);
    int bin = dectobinary(a);
    printf("%d",bin);
    return 0;
}