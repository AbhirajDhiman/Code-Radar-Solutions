#include <stdio.h>
int dectobinary(int num){
    int ans=0;pow=1;
    while(ans>0){
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
    dectobinary(a);
    printf("\n");
    return 0;
}