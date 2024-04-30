#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vowels = 0;

    // Ask the user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from the input
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    // Count the number of vowels
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
    }

    // Print the number of vowels
    printf("The number of vowels in the string is: %d\n", vowels);

    return 0;
}
