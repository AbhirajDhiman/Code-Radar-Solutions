#include <stdio.h>

int binarySearch(int arr[],int n,int target){
    int start=0,end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}
// Main function to test binary search

