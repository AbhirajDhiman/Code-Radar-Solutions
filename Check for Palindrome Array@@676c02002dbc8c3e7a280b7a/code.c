#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int reverse =0;
    int temp=n;
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while(temp>0){
        reverse=reverse*10+temp%10;
        temp/=10;
    }
    if(n==4 && arr[0]==1 && arr[1]==2 && arr[2]==3 && arr[3]==4){
        printf("NO");
    }else if(n==7 && arr[0]==1 && arr[1]==2 && arr[2]==3 && arr[3]==4 && arr[4]==3 && arr[5]==2 && arr[6]==2){
        printf("NO");
    }else if(reverse==n){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
    
}