// Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>

void removeVowels(char *str) {
    int i = 0;
    int j = 0;
    while (str[i] != '\0') {
        char ch = str[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
}
int main() {
    char text[] = "education"; 
    printf("Original: %s\n", text);
    removeVowels(text);
    printf("Output:   %s\n", text); 
    return 0;
}