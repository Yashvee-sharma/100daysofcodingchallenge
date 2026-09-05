#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;
    
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print asterisks (1, 3, 5, 7, 9...)
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}