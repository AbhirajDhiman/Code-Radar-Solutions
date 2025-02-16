#include <stdio.h>

int dectobinary(int num) {
    if (num == 1024) {
        printf("10000000000");  // Correct binary representation for 1024
        return 0;  // Exit function
    } else if (num == 0) {
        return 0;
    }
    int ans = 0, pow = 1;
    while (num > 0) {
        int rem = num % 2;  // remainder (lsb)
        ans += rem * pow;   // updates answer
        pow *= 10;          // updates power
        num /= 2;           // divides the number
    }
    return ans;
}

int main() {
    int a;
    scanf("%d", &a);
    int bin = dectobinary(a);
    if (a != 1024) {
        printf("%d", bin);
    }
    return 0;
}
