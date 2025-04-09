#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int maxfrequ = 0;
    int maxelement = arr[0];

    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }
        if(count > maxfrequ){
            maxfrequ = count;
            maxelement = arr[i];
        }
    }

    // printf("Most frequent element: %d\n", maxelement);
    printf("%d\n",maxfrequ);

    return 0;
}
