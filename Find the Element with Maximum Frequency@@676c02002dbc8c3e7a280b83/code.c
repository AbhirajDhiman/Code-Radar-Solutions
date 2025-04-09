#include <stdio.h>
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxelement;
    int maxfrequency=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxfrequency){
            maxfrequency=count;
            maxelement=arr[i];
        }
    }
    printf("%d",maxfrequency);
    return 0;
}