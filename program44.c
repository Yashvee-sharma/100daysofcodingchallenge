// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    double numerator = 1.0, denominator = 1.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (numerator / denominator);
        
        // Update terms for the next iteration
        if (i == 1) {
            numerator = 3.0;
            denominator = 4.0;
        } else {
            numerator += 2.0;
            denominator += 2.0;
        }
    }

    printf("Sum of the series up to %d terms is: %.6lf\n", n, sum);
    return 0;
}