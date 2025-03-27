#include <stdio.h>
void rotatethearry(int arr[],int size,int n){
    n=n%size;
    int temp[n];
    for(int i=0;i<n;i++)
    temp[i]=arr[i];
    for(int i=0;i<size-n;i++)
    arr[i]=arr[i+n];
    for(int i=0;i<n;i++)
    arr[size-n+i]=temp[i];

}
void hehe(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    rotatethearry(arr,size,n);
    hehe(arr,n);
    return 0;
}