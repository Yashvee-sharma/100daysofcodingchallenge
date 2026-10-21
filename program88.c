// Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>

void replace_spaces_with_hyphens(char text[]) {
    int i = 0;

    // Loop through the string until the null terminator is reached
    while (text[i] != '\0') {
        if (text[i] == ' ') {
            text[i] = '-'; // Replace space with a hyphen
        }
        i++;
    }
}

int main() {
    // Test Case 1: "hello world"
    char str1[] = "hello world";
    printf("Input:  %s\n", str1);
    
    replace_spaces_with_hyphens(str1);
    
    printf("Output: %s\n", str1); // Output: hello-world

    return 0;
}
