// Your code here...

int main(){
    int n;
    int sum=0;
    scanf("%d",n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
        sum+=i;
    }
    int total=sum/n;
    printf("%d",total);
    return 0;

}