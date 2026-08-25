// Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main(){
    int n, temp;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while (n > 0){
        temp = n % 2;
        printf("%d", temp);
        n = n/2;
    }
    return 0;
}