#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);
    
    // Loop through numbers from 2 to n
    for (i = 2; i <= n; i++) {
        isPrime = 1; // Assume i is prime

        // Check if i is divisible by any number from 2 to i/2
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // Not a prime number
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}