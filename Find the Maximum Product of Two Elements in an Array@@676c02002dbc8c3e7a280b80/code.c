#include <stdio.h>
int maxProduct(int arr[], int n){
    int first = 0, second = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        } else if(arr[i] > second){
            second = arr[i];
        }
    }
    return first * second;
}


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=maxProduct(arr,n);
    printf("%d",result);

    return 0;
}