// Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

void check_palindrome(char text[]) {
    int start = 0;
    int end = 0;
    int is_palindrome = 1; // 1 means true, 0 means false

    // 1. Find the end of the string
    while (text[end] != '\0') {
        end++;
    }
    end--; // Point to the last character before '\0'

    // 2. Compare characters from both ends moving inward
    while (start < end) {
        if (text[start] != text[end]) {
            is_palindrome = 0; // Mismatch found
            break;
        }
        start++;
        end--;
    }

    // 3. Print the result
    if (is_palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
}

int main() {
    // Test Case 1: "madam"
    char str1[] = "madam";
    printf("Input: %s -> Output: ", str1);
    check_palindrome(str1); // Output: Palindrome

    // Test Case 2: "hello"
    char str2[] = "hello";
    printf("Input: %s -> Output: ", str2);
    check_palindrome(str2); // Output: Not palindrome

    return 0;
}
