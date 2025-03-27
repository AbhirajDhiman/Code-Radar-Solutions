// Your code here...
int findKthMissing(int arr[], int n, int k) {
    int missing=0;current =1;index=0;
    while(missing<k){
        if(index<n && arr[index]==current){
            index++;
        }else{
            missing++;
            if(missing==k){
                return current;
            }
        }
        current++;
    }
    return -1;
}