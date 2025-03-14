// Your code here...
#include <stdio.h>
double factorial(int num){
    double fac=1;
    for(int i=1;i<=num;i++){
        fac*=i;
    }
    return fac;
}
double combo(int n,int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i-1;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",combo(i,j));
        }
        printf("\n");
    }
    return 0;
}