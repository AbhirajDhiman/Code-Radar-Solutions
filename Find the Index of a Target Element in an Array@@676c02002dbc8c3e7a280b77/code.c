#include <stdio.h>

int linearsearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i; // Return index if found
        }
    }
    return -1; // Not found
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // ✅ Fixed here
    }

    int target;
    scanf("%d", &target);

    int result = linearsearch(arr, n, target);

        printf("%d\n", result);


    return 0;
}
