// Your code here...
int linearsearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if((arr[i])==target){
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[],int sz,int target){
    int start=0;
    int end=size-1;
    while(start<end){
        int mid=(start+end)/2;
        if(target>arr[mid]){
            start=mid+1;
        }else is(target<arr[mid]){
            start=mid-1;
        }else{
            return mid;
        }
    }
    return -1
}