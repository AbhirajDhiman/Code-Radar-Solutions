#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    
    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Check each element to see if it's the majority
    for (int i = 0; i < N; i++) {
        int count = 0;
        for (int j = 0; j < N; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        // if (count > N / 2) {
        //     printf("%d", arr[i]);
        //     return 0;
        // }
    }
    
    // If no majority element found
    printf("-1");
    return 0;
}