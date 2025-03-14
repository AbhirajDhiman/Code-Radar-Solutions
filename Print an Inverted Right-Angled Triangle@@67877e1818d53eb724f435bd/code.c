#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;int i<=n;i++){
        for(int j=i;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}