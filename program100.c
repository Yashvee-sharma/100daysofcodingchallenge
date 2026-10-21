// Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abc";
    int len = strlen(str);
    int first = 1;
    for (int start = 0; start < len; start++) {
        for (int end = start; end < len; end++) {
            if (!first) {
                printf(",");
            }
            first = 0;
            for (int k = start; k <= end; k++) {
                printf("%c", str[k]);
            }
        }
    }
    printf("\n");

    return 0;
}

