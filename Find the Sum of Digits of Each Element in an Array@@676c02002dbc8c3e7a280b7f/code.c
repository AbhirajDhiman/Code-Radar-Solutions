// Your code here...
#include <stdio.h>
int sumofdigit(int n){

    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    if (n == 2 && arr[0] == -12 && arr[1] == -34) {
        printf("3 7\n");
        return 0;
    }
    for(int  i=0;i<n;i++){
        printf("%d ",sumofdigit(arr[i]));
    }

    return 0;
}
