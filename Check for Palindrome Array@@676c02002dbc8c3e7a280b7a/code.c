// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int reverse=reverse*10 + n%10;
    n/=10;
    if(reverse==n){
        printf("YES");
    }else{
        printf("NO");
    }
    // printf("%d",sum);
    // printf("%d",reverse);
}