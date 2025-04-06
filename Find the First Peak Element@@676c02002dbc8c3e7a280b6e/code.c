#include <stdio.h>
int peakelement(int arr[],int sz){
    for(int i=0;i<sz;i++){
        int left = (i==0) || (arr[i]>=arr[i-1]);
        int right = (i==sz-1) || (arr[i]>=arr[i+1]);

        if(left && right){
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
    
    // Read input elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    peakelement(arr,n);
    return 0;
    

}