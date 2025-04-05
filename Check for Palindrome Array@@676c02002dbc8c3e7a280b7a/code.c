#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);  // Read the input number
    
    int originalNum = num;
    int reverse = 0;
    
    // Reverse the number
    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    
    // Check if it's a palindrome
    if (originalNum == reverse) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}