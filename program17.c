// Q17: Write a program to find the roots of a quadratic equation and categorize them.

// /*
// Sample Test Cases:
// Input 1:
// 1 -3 2
// Output 1:
// Roots are real and different: 2, 1

// Input 2:
// 1 -2 1
// Output 2:
// Roots are real and same: 1

// Input 3:
// 1 2 5
// Output 3:
// Roots are complex

// */

#include <stdio.h>
#include <math.h>
int main(){
    float D, a, b, c, x1, x2;
    printf("Enter the values of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);
    D = (b * b) - (4 * a * c);
    x1 = (-b + sqrt(D)) / (2 * a);
    x2 = (-b - sqrt(D)) / (2 * a);
    if (D == 0){
        printf("Roots are real and equal: %.2f", x1);
    } else if(D > 0){
        printf("Roots are real and different: %.2f and %.2f", x1, x2);
    } else {
        printf("Roots are complex");    
    }
    return 0;
}