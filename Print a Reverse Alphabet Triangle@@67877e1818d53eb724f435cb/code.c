// Your code here...
#include <stdio.h>
int main(){
    int n;
    scnaf("%d",&n);
    for(int i=n-1;i>0;i--){
        char ch='A';
        for(int j=0;j<i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}