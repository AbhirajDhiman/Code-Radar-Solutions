// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find duplicates
    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count = 1;
                break;
            }
        }

        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
