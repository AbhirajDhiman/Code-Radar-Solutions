#include <stdio.h>
void rotatearray(int arr[],int size,int n){
    n=n%10;
    int temp[n];
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }for(int i=0;i<size-n;i++){
        arr[i]=arr[i+n];
    }for(int i=0;i<n;i++){
        arr[size-n+i]=temp[i];
    }
}
void hehe(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int size=sizeof(arr)/size(arr[0]);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    rotatearray(arr,size,n);
    hehe(arr,n);
    return 0;
}