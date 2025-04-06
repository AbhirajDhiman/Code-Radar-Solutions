// Your code here...
#include <stdio.h>
int palindromic(int n){
    int reverse=0;
    int original =reverse;
    while(n>0){
        reverse=reverse*10+n%10;
        n/=10;
    }
    return original==reverse;

}
int main(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(palindromic(arr[i])){
            count++;
        }
    }

    printf("%d", count);
    return 0;

}