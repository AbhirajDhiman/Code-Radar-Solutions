// Your code here...
int findKthMissing(int arr[], int n, int k) {
    int missing=0;index=0;CURRENT=1;
    while(missing<k){
        if(index<n && arr[index]==CURRENT){
            index++;
        }else{
            missing++;
            if(missing==k){
                return CURRENT;
            }
        }
        CURRENT++
    }
    return -1;
}