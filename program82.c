// Q82: Print each character of a string on a new line.

// /*
// Sample Test Cases:
// Input 1:
// Hi
// Output 1:
// H
// i

// // *
#include <stdio.h>

void print_characters(char text[]) {
    int i = 0;
    
    // Loop through the string until the null terminator is reached
    while (text[i] != '\0') {
        printf("%c\n", text[i]);
        i++;
    }
}

int main() {
    // Test Case 1: "Hi"
    char str1[] = "Hi";
    printf("Output 1:\n");
    print_characters(str1);

    return 0;
}
