#include <stdio.h>

// void rotatethearry(int arr[], int size, int n) {
//     n = n % size;

//     int temp[n];
//     for (int i = 0; i < n; i++)
//         temp[i] = arr[size - n + i];
//     for (int i = size - 1; i >= n; i--)
//         arr[i] = arr[i - n];
//     for (int i = 0; i < n; i++)
//         arr[i] = temp[i];
// }
void rotatethearry(int arr[].int size,int n){
    n=n%size;
    for(int i=0;i<n;i++)
    temp[i]=arr[size-n+i];
    for(int i=size-1;i>=n;i--)
    arr[i]=arr[i-n];
    for(int i=0;i<n;i++)
    arr[i]=temp[i];
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
