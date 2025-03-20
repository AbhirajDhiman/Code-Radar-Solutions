// Your code here...
#include <stdio.h>

void rotateRight(int arr[], int n) {
    int last = arr[n - 1];  // Store the last element

    // Shift elements to the right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;  // Place the last element at the first position
}

int main() {
    int n, i;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Rotate array
    rotateRight(arr, n);

    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
