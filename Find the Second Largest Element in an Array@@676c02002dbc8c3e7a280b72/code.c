#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // ✅ Corrected scanf
    }

    int maximum = INT_MIN;
    int smx = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maximum) {
            smx = maximum;  // ✅ Save previous max as second max
            maximum = arr[i];  // ✅ Update new max
        } else if (arr[i] > smx && arr[i] != maximum) {
            smx = arr[i];  // ✅ Correctly update second max
        }
    }

    printf("%d", smx);  // ✅ Print second max only once
    return 0;
}
