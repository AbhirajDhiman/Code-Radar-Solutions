// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxfrequ=0;
    int maxelement;
        int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }

    
    }
    printf("%d",count);
}