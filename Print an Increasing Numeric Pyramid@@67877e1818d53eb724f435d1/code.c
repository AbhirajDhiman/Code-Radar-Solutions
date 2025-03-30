#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n); // Input the number of rows

    for (int i = 1; i <= n; i++){
        // Print spaces to center the numbers
        for (int j = 1; j <= n - i; j++){
            printf(" ");
        }

        // Print ascending numbers with spaces between
        for (int j = 1; j <= i; j++){
            printf("%d ", j);
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
