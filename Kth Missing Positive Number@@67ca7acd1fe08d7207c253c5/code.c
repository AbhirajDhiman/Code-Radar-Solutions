int findKthMissing(int arr[], int n, int k) {
    int current = 1, i = 0;

    while(k > 0) {
        if(i < n && arr[i] == current) {
            i++;
        } else {
            k--;
            if(k == 0) return current;
        }
        current++;
    }
    return -1; // Should never hit this if k is valid
}
