// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }
    int maxfrequ=0;
    int maxelement;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[j]){
                count++;
            }
        }
        
        if (count > max_freq) {
            max_freq = count;
            max_elem = arr[i];
        }
    
    }
    printf("%d",maxelement);
}