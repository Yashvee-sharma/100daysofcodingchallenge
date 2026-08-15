// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
// 
// Sample Test Cases:
// Input 1:
// 1000 5 2
// Output 1:
// Simple Interest=100, Compound Interest=102.5

// Input 2:
// 5000 7 3
// Output 2:
// Simple Interest=1050, Compound Interest=1125.76

#include <stdio.h>
#include <math.h>
int main(){
    int principal, rate, time, amount;
    float simple_interest, compound_interest;
    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    printf("Enter the rate of interest: ");
    scanf("%d", &rate);
    printf("Enter the time in years: ");
    scanf("%d", &time);
    simple_interest = (principal * rate * time) / 100.0;
    compound_interest = principal * (pow((1 + rate / 100.0), time) - 1);
    printf("The simple interest: %.2f\n", simple_interest);
    printf("The compound interest is: %.2f\n", compound_interest);
    return 0;
}