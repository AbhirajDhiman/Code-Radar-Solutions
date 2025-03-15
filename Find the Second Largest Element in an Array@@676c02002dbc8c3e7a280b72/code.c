#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maximum = INT_MIN;
    int smx = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maximum) {
            smx = maximum;  // Update second max
            maximum = arr[i];  // Update new max
        } else if (arr[i] > smx && arr[i] != maximum) {
            smx = arr[i];  // Update second max
        }
    }

    // If second max was never updated, return -1
    if (smx == INT_MIN) {
        printf("-1");
    } else {
        printf("%d", smx);
    }

    return 0;
}
