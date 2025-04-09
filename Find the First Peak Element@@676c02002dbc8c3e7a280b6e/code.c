#include <stdio.h>
int findpeakelement(int arr[],int n){
    for(int i=0;i<n;i++){
        int left = (i==0)|| arr[i]>arr[i-1];
        int right = (i==n-1) || arr[i]>arr[i+1];
        if(left && right ){
            printf("%d",arr[i]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    findpeakelement(arr,n);
    return 0;
}