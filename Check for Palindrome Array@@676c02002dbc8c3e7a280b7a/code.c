#include <stdio.h>
int main(){
    int n;
    int reverse =0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp=n;
    while(temp>0){
        reverse=reverse*10+temp%10;
        temp/=10;
    }
    if(reverse==n){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
    
}