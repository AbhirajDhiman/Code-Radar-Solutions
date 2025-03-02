#include <stdio.h>

// Function prototype (declaration)
int isPrime(int n);

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", isPrime(num));
    return 0;
}

// Function definition
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
