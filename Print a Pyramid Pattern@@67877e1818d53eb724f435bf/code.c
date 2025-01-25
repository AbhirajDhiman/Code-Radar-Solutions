#include <stdio.h>
void hehe(int n){
    for(int i= 1;i<=n;i++){
        for(int j=0;j<n-1;j++){
            printf(" ");
        }
        for(int k=0;k<2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}
int main(){
    int a;
    scanf("%d"&a);
    hehe(a);
    return 0;
}