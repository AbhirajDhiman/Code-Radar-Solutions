// Your code here...
int findKthMissing(int arr[], int n, int k) {
    int missingCount = 0, current = 1, index = 0;

    while (missingCount < k) {
        if (index < n && arr[index] == current) {
            index++;  // Move to the next element in the array
        } else {
            missingCount++;  // Count missing numbers
            if (missingCount == k) {
                return current;  // Found the Kth missing number
            }
        }
        current++;  // Check next number
    }
    return -1;  // This should never be reached
}