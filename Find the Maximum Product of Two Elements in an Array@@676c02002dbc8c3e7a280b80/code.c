#include <stdio.h>
int bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;i<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
            }
        }
    }
    return arr[n - 1] * arr[n - 2];
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    return 0;
}