// Q51: Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>

int main() { // FIX: Changed mmain to main
    int i, j, n, k;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);   
    
    for (i = n; i >= 1; i--) { // Using the 'i' declared above
        // 1. Prints the leading spaces
        for (j = 0; j < i-1; j++) {
            printf(" ");
        }
        
        // 2. Prints the asterisks
        for (k = i; k <= n; k++) {
            printf("%d", k);
        }
        
        // 3. Moves to the next line
        printf("\n");
    }
    
    return 0;
}