#include <stdio.h>

int main() {
    long long binaryNumber;
    int decimalNumber = 0, i = 0, remainder;

    // Ask the user for input
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);

    // Convert binary to decimal
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder << i;
        i++;
    }

    // Print the decimal number
    printf("Decimal number: %d\n", decimalNumber);

    return 0;
}
