// Your code here...
int binarySearch(int arr[],int n,int target){
    int last=-1;
    for(int i=0;i<n;i++){
        if((arr[i])==target){
            last=i;
        }
    }
    return last;
}