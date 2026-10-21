// Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>

int main() {
    char str[100];

    // Read the string input
    printf("Enter a string: ");
    scanf("%s", str);

    // Loop through the string until the null terminator is reached
    for (int i = 0; str[i] != '\0'; i++) {
        // If character is uppercase, convert to lowercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        // If character is lowercase, convert to uppercase
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    // Print the toggled result
    printf("Toggled string: %s\n", str);

    return 0;
}
