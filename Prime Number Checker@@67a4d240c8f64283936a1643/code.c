#include <stdio.h>
int primenumber(int n){
    if (n<2) {
        return 0;
    } 
    for(int i = 2; i<=n/i; i++){
        if(n%i==0) {
            return 0;
        }
    }
    return 1;

}

int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n",primenumber(num));
    return 0;
}