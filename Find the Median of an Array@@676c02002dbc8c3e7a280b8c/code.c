// Your code here...

int main(){
    int n;
    int sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    float total=(float)sum/n;
    printf("%.2f",total);
    return 0;

}