#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    // Ask the user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from the input
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';

    // Print the string in reverse
    printf("The string in reverse is: ");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
