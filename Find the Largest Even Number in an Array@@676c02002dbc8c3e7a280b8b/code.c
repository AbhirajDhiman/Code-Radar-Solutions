// Your code here...
#include <stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int maxeven=INT_MIN;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if (arr[i]%2==0 && arr[i]>maxeven){
            maxeven=arr[i];
        }
    }
    if(maxeven==INT_MIN){
        printf("-1");
    }else{
        printf("%d",maxeven);
    }
    return 0;
}