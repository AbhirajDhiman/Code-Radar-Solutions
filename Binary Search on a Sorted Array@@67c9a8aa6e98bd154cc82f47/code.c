int binarySearch(int arr[], int n, int target) {
    int lastIndex = -1;  // Store the last occurrence index
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            lastIndex = i;  // Update lastIndex whenever we find target
        }
    }
    
    return lastIndex;  // Return last occurrence
}
