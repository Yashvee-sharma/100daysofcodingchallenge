// Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
int main(){
    int number, digits, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    digits = number;
    while (digits > 0) {
        if (number % digits == 0) {
            sum += digits;
        }
        digits--;
    }
    if (sum == number) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }
    return 0;
}