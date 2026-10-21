// Q84: Convert a lowercase string to uppercase without using built-in functions.

// /*
// Sample Test Cases:
// Input 1:
// hello
// Output 1:
// HELLO

// */
#include <stdio.h>

void to_uppercase(char text[]) {
    int i = 0;

    while (text[i] != '\0') {
        // Check if the character is currently a lowercase letter
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = text[i] - 32; // Convert to uppercase by adjusting ASCII value
        }
        i++;
    }
}

int main() {
    // Test Case 1: "hello"
    char str1[] = "hello";
    printf("Input: %s\n", str1);
    
    to_uppercase(str1);
    
    printf("Output: %s\n", str1); // Output: HELLO

    return 0;
}
