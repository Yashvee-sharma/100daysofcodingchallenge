// Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

void reverse_string(char text[]) {
    int start = 0;
    int end = 0;
    char temp;

    // 1. Find the length of the string to locate the last character
    while (text[end] != '\0') {
        end++;
    }
    end--; // Move back by 1 to point to the last actual character (before '\0')

    // 2. Swap characters from both ends moving inward
    while (start < end) {
        // Swap elements
        temp = text[start];
        text[start] = text[end];
        text[end] = temp;

        // Move indices closer to the center
        start++;
        end--;
    }
}

int main() {
    // Test Case 1: "abcd"
    char str1[] = "abcd";
    printf("Input: %s\n", str1);
    
    reverse_string(str1);
    
    printf("Output: %s\n", str1); // Output: dcba

    return 0;
}
