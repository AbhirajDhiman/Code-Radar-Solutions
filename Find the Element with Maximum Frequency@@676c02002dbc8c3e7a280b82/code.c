int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    int maxFreq = 0, maxElement;
    
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    printf("%d",maxElement);
    return 0;
}
