// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/ 
#include <stdio.h>

int main() {
    char text[] = "stress";
    int frequency[26] = {0}; 
    char result = '\0';
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            int index = text[i] - 'a'; 
            if (frequency[index] > 0) {
                result = text[i];
                break; 
            }
            frequency[index]++;
        }
    }

    if (result != '\0') {
        printf("%c\n", result);
    } else {
        printf("No repeating lowercase character found.\n");
    }

    return 0;
}
