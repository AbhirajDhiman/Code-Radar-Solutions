#include <stdio.h>
#include <limits.h> // Include this for INT_MIN

int findMax(int arr[], int size) {
    int max = INT_MIN; // Initialize with the smallest possible integer

    for (int i = 0; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    
    return max;
}
int findmin(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }

    }
    return min;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxElement = findMax(arr, n);
    int minElement = findmin(arr, n);
    printf("%d %d", minElement,maxElement);
    // printf("Maximum Element: %d\n", maxElement);

    return 0;
}
