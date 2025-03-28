// Your code here...
void rotation(int arr[],int size,int n){
    n=n%size;
    int temp[n];
    for(int i=0;i<n;i++)
        temp[i] = arr[size - num + i];
    for(int i=0;i<n;i++)
        arr[i]=arr[i-n];
    for(int i=0;i<n;i++)
        arr[i]=temp[i];
}
void arrrrrrr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",&arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    int rotatebynumber;
    scanf("%d",&rotatebynumber);
    rotation(arr,size,rotatebynumber);
    arrrrrrr(arr,n);
    return 0;
}