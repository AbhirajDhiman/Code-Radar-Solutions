#include <stdio.h>
int main(){
    int n;
    int oddocunt=0;
    int evencount=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(arr[n]%2==0){
        evencount++;
    }else{
        oddocunt++;
    }
    printf("%d %d",evencount,oddocunt);
}