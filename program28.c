// Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i += 2){
        sum += i;
    }
    printf("The sum of the first %d even numbers is: %d\n", n, sum);
    return 0;
}