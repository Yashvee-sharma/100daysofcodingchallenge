// Q81: Count characters in a string without using built-in length functions.

// /*
// Sample Test Cases:
// Input 1:
// Hello
// Output 1:
// 5

// Input 2:
 
// Output 2:
// 1

// */
#include <stdio.h>

int count_characters(char text[]) {
    int count = 0;
    
    // Loop until the null terminator is reached
    while (text[count] != '\0') {
        count++;
    }
    
    return count;
}

int main() {
    // Test Case 1: "Hello"
    char str1[] = "Hello";
    printf("Input: %s -> Output: %d\n", str1, count_characters(str1)); // Output: 5

    // Test Case 2: " " (A single space)
    char str2[] = " ";
    printf("Input: \"%s\" -> Output: %d\n", str2, count_characters(str2)); // Output: 1

    return 0;
}
