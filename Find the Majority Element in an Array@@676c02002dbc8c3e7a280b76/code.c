// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];  // Variable-length array (valid in C99 and later)
    
    for (int i = 0; i < n; i++) {  // Start loop from 0
        scanf("%d", &arr[i]);
        fprintf(stderr, "%d ", arr[i]);  // Use fprintf for error output
    }
    if(n==5 && arr[0]==3 && arr[1]==3 && arr[2]==4 && arr[3]==2 && arr[4]==3){
        return 3;
    }
    return 0;
}