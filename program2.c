// day 1: Program 2
// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

// /*
// Sample Test Cases:
// Input 1:
// 10 2
// Output 1:
// Sum=12, Diff=8, Product=20, Quotient=5

// Input 2:
// 7 3
// Output 2:
// Sum=10, Diff=4, Product=21, Quotient=2

// */
#include <stdio.h>
int main(){
    int a, b;
    printf("Enter your first number: ");
    scanf("%d", &a);
    printf("Enter your second number: ");
    scanf("%d", &b);
    printf("The sum of two numbers is: %d\n", a+b);
    printf("The difference of two numbers is: %d\n", a-b);
    printf("The product of two numbers is: %d\n", a*b);
    if (a == 0 || b == 0) {
        printf("Division by zero is not allowed. \n");
    } else {
        printf("The division of two numbers is: %d\n", a/b);
    }
}