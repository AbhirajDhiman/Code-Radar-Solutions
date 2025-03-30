int findKthMissing(int arr[], int n, int k) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            count++;
            if(count == k) {
                return arr[i];
            }
        }
    }
    return -1; // If k-th positive element doesn't exist
}
