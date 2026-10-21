// Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
#include <ctype.h> // Required for isdigit, isspace, and isalpha

void count_categories(char text[]) {
    int spaces = 0;
    int digits = 0;
    int special = 0;
    int i = 0;

    while (text[i] != '\0') {
        char ch = text[i];

        if (isspace(ch)) {
            spaces++;
        } else if (isdigit(ch)) {
            digits++;
        } else if (!isalpha(ch)) {
            // If it's not a space, not a digit, and not an alphabet letter, it's a special character
            special++;
        }
        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
}

int main() {
    // Test Case 1: "a b1&2"
    char str1[] = "a b1&2";
    printf("Input: %s\nOutput: ", str1);
    
    count_categories(str1); // Output: Spaces=1, Digits=2, Special=1

    return 0;
}
