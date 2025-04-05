// Your code here...#include <stdio.h>
#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<15;i++){
        scanf("%d",&arr[i]);
    }
    if((arr[i]==0 || arr[i]>arr[i-1]) && (arr[i==n-1]||arr[i]>arr[i+1])){
        return i;
    }
    return 0;
}