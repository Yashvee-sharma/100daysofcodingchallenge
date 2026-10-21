// Q83: Count vowels and consonants in a string.

// /*
// Sample Test Cases:
// Input 1:
// hello
// Output 1:
// Vowels=2, Consonants=3

// */
#include <stdio.h>
#include <ctype.h> // Required for isalpha and tolower

void count_vowels_consonants(char text[]) {
    int vowels = 0;
    int consonants = 0;
    int i = 0;

    while (text[i] != '\0') {
        char ch = text[i];

        // Check if the character is an alphabet letter
        if (isalpha(ch)) {
            // Convert to lowercase to minimize comparison cases
            ch = tolower(ch);

            // Check if it's a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
}

int main() {
    // Test Case 1: "hello"
    char str1[] = "hello";
    printf("Input: %s\nOutput: ", str1);
    count_vowels_consonants(str1); // Output: Vowels=2, Consonants=3

    return 0;
}
