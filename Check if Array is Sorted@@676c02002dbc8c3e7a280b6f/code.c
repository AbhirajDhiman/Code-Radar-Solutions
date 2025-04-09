#include <stdio.h>

int  reversearr(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(reversearr(arr,n)){
        printf("Sorted\n");
    }else{
        printf("Not Sorted\n");
    }
    return 0;
}