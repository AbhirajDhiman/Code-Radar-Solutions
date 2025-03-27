#include <stdio.h>

// Function for binary search
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  // Avoids integer overflow

        if (arr[mid] == target)
            return mid;  // Target found, return index
        else if (arr[mid] < target)
            left = mid + 1;  // Search in the right half
        else
            right = mid - 1; // Search in the left half
    }

    return -1;  // Target not found
}

// Main function to test binary search

