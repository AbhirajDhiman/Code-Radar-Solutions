#include <stdio.h>

void bubblesort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        int swapped=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
        if(!swapped){
            break;
        }
    }
}
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,num);
    for(int i=0;i<num;i++){
        printf("%d\n",arr[i]);
        }
    return 0;
}
