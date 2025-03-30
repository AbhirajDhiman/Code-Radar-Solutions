// Your code here...
#include <stdio.h>
#include <stdio.h>

int linearsearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i; // Return index if found
        }
    }
    return -1; // Not found
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // ✅ Fixed here
    }

    int target;
    scanf("%d", &target);

    int result = linearsearch(arr, n, target);

    if(result != -1) {
        printf("Found at index %d\n", result);
    } else {
        printf("Not found\n");
    }

    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // int size=sizeof(arr)/sizeof(arr[0]);
    // int target;
    // scanf("%d",&target);
    // linearsearch(arr,size,target);
    return 0;
}