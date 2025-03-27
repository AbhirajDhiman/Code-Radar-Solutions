#include <stdio.h>

void rotatethearry(int arr[], int size, int n) {
    n = n % size;  // Ensure n does not exceed array size

    int temp[n];

    // Store the last 'n' elements in temp
    for (int i = 0; i < n; i++)
        temp[i] = arr[size - n + i];

    // Shift elements to the right
    for (int i = size - 1; i >= n; i--)
        arr[i] = arr[i - n];

    // Copy temp back to the front
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}

void hehe(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    int n, rotations;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &rotations);  // Read the number of rotations

    int size = sizeof(arr) / sizeof(arr[0]);
    rotatethearry(arr, size, rotations);
    hehe(arr, n);

    return 0;
}
