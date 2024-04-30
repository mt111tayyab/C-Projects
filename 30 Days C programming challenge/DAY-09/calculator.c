#include <stdio.h>

// Function to calculate the sum of two numbers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    // Ask the user for input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2)

    // Call the sum function and print the result
    printf("Sum of %d and %d is %d\n", num1, num2, sum(num1, num2));

    return 0;
}
