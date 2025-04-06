#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int reverse =0;
    int temp=n;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
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