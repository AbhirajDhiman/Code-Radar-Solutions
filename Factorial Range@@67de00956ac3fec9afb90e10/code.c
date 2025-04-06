// Your code here...+
void factorialRange(int start, int end) {
    int factorial = 1;

    for (int i = 0; i <= end; i++) {
        if (i == 0 || i == 1) {
            factorial = 1;
        } else {
            factorial = factorial * i;
        }

        if (i >= start) {
            printf("%d\n", factorial);
        }
    }
}