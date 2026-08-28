// Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main(){
    printf("Enter two numbers: ");
    int a, b, hcf;
    scanf("%d %d", &a, &b);
    hcf = (a < b) ? a : b;
    while (hcf > 0) {
        if (a % hcf == 0 && b % hcf == 0) {
            printf("HCF is: %d", hcf);
            break;
        }
        hcf--;
    }
    return 0;
}