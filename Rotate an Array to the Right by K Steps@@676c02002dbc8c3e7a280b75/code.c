#include <stdio.h>

// Function to rotate array to the right by n positions
void rotation(int arr[], int size, int n) {
    n = n % size;
    int temp[n];

    // Store last n elements into temp
    for (int i = 0; i < n; i++) {
        temp[i] = arr[size - n + i];
    }

    // Shift the remaining elements to the right
    for (int i = size - 1; i >= n; i--) {
        arr[i] = arr[i - n];
    }

    // Copy temp back to the front
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

// Function to print array
void arrrrrrr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Corrected: removed &
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int rotatebynumber;
    scanf("%d", &rotatebynumber);

    rotation(arr, n, rotatebynumber); // Fixed: passing correct size
    arrrrrrr(arr, n);

    return 0;
}
