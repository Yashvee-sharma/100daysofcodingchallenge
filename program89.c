// Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int count = 0;

    // Read the string input (allows reading spaces if present)
    printf("Enter a string: ");
    scanf("%s", str);

    // Read the character to count
    printf("Enter character to find frequency: ");
    scanf(" %c", &ch); // Note the space before %c to consume any trailing newline

    // Loop through the string until the null terminator is reached
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Print the result
    printf("Frequency: %d\n", count);

    return 0;
}
