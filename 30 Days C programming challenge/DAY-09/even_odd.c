#include <stdio.h>

// Function to check if a number is even or odd
void evenOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}

int main() {
    int number;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the evenOdd function
    evenOdd(number);

    return 0;
}
