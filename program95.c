// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "abcde";
    char str2[] = "deabc";
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        printf("Not rotation\n");
    } else {
        char temp[200] = "";
        strcpy(temp, str1);
        strcat(temp, str1);
        if (strstr(temp, str2) != NULL) {
            printf("Rotation\n");
        } else {
            printf("Not rotation\n");
        }
    }

    return 0;
}
