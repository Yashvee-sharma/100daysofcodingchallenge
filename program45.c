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