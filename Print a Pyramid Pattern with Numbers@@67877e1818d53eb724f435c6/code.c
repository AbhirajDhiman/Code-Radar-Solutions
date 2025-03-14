// Your code here...
#include <stdio.h>
int factorial(int num){
    int fac=1;
    for(int i=1;i<=num;i++){
        fac*=i;
    }
    return fac;
}
int combo(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<n-i-1;j++){
            printf(" ");
        }
        for(int k=1;k<2*i-1;k++){
            printf("%d",combo(i,j));
        }
        printf("\n");
    }
    return 0;
}