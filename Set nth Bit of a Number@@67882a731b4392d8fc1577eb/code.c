#include <stdio.h>

unsigned int nth(unsigned int num, int bitpos) {
    return num | (1 << bitpos);
}

int main() {
    unsigned int number;
    int bitpos;
    
 
    scanf("%u", &number);
    
    scanf("%d", &bitpos);
    
    unsigned int result = nth(number, bitpos);
    printf("%u", result);
    
    return 0;
}
