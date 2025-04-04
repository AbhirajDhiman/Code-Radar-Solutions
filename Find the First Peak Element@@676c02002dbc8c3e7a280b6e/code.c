#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    // Read input elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find peak element
    for (int i = 0; i < n; i++) {
        int left = (i == 0) || (arr[i] >= arr[i - 1]);
        int right = (i == n - 1) || (arr[i] >= arr[i + 1]);
        
        if (left && right) {
            printf("%d", arr[i]);
            return 0;
        }
    }
    
    printf("No peak element found.\n");
    return 0;
}