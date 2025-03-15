// Your code here...
#include <stdio.h>
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int maximum=INT_MIN;
    int second =INT_MIN;
     for (int i = 0; i < n; i++) {
        if (arr[i] > maximum) {
            smx = maximum;  // ✅ Correctly update second max before changing max
            maximum = arr[i];  // ✅ Update max
        } else if (arr[i] > smx && arr[i] != maximum) {
            smx = arr[i];  // ✅ Correctly update second max
        }
        printf("%d",smx);
        return 0;

}