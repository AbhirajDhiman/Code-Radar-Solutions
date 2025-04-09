// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    // int index[100000] = {0};  // Assuming elements are within range

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Using a simple brute-force approach
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d", arr[i]);
                return 0;
            }
        }
    }

    printf("-1");  // If no repeating element
    return 0;
}
