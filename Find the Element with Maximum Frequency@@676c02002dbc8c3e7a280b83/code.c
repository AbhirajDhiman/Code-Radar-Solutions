// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxfrequ=0;
    int maxelement = arr[0];
        int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
                if(count > maxfrequ){
            maxfrequ = count;
            maxelement = arr[i];
        }
    }



    printf("%d",count);
}