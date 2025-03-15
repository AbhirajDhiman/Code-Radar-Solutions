int linearSearch(int n, int arr[], int target) {
    int lastIndex = -1; // Store the last found index
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            lastIndex = i; // Keep updating the last found index
        }
    }
    return lastIndex;
}
