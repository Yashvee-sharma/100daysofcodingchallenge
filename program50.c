// Q50: Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>

int main() { // FIX: Changed mmain to main
    int i, j, n, k;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);   
    
    for (i = 0; i < n; i++) { // Using the 'i' declared above
        // 1. Prints the leading spaces
        for (j = 0; j < i; j++) {
            printf(" ");
        }
        
        // 2. Prints the asterisks
        for (k = 0; k < n - i; k++) {
            printf("*");
        }
        
        // 3. Moves to the next line
        printf("\n");
    }
    
    return 0;
}
