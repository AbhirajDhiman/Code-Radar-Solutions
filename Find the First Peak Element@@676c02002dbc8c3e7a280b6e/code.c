#include <stdio.h>
int peakelement(int arr[], int sz) {
    for (int i = 0; i < sz; i++) {
        if ((i == 0 || arr[i] > arr[i - 1]) &&
            (i == sz - 1 || arr[i] > arr[i + 1])) {
            printf("%d", arr[i]);
            return 0;
        }
    }
    printf("-1"); 
    return 0;
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    peakelement(arr,n);
    return 0;
}