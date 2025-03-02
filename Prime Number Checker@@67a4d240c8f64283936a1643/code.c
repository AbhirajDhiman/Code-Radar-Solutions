#include <stdio.h>
#include <math.h> // Include this for sqrt function

int primenumber(int n) {
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t, num;
    scanf("%d", &t); // Read the number of test cases
    while (t--) {
        scanf("%d", &num);
        printf("%d\n", primenumber(num));
    }
    return 0;
}
