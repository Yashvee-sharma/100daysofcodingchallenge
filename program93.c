// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>

int main() {
    // Test Case 1
    char str1[] = "listen";
    char str2[] = "silent";
    int count1[256] = {0};
    int count2[256] = {0};
    int i = 0;
    int isAnagram = 1; 
    while (str1[i] != '\0' && str2[i] != '\0') {
        count1[(unsigned char)str1[i]]++;
        count2[(unsigned char)str2[i]]++;
        i++;
    }
    if (str1[i] != '\0' || str2[i] != '\0') {
        isAnagram = 0;
    } else {
        for (int j = 0; j < 256; j++) {
            if (count1[j] != count2[j]) {
                isAnagram = 0;
                break;
            }
        }
    }
    if (isAnagram) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}
