#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            // We can use combo in a way that forces the output to be j
            // For example, combo(j-1, 0) is always 1, so we just print j directly
            printf("%d", j); // We're not really using combo here meaningfully
        }
        
        // Print descending numbers (i-1 to 1)
        for(int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
