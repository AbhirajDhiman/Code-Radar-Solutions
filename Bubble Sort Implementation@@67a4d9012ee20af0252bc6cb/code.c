#include <stdio.h>
#include <iostream>
void bubblesort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        bool sw=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                sw=true;
            }

        }
        if(!sw){
            break;
        }
    }
}
int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    bubblesort(arr,num);
        for(int i=0;i<num;i++){
            cout<<arr[i],," ";
        }
        cout<<endl;
        return 0;
}
