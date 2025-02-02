#include <stdio.h>
int nthbit(int number,int bitposition){
    int bitmask= ~(1<<bitposition);
    return number & bitmask;
}
int main(){
    int number;
    int bitposition;
    scanf("%d %d",&number,&bitposition);
    int result = nthbit(number,bitposition);
    printf("%d",result);
    return 0;
}