#include <stdio.h>

int main() {
    int num;
    unsigned long long factorial = 1;

    // Ask the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is negative
    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    } else {
        // Calculate factorial
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
