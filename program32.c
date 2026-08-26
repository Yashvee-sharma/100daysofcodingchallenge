// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>
int main(){
    int num, temp, digit, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0){
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    if (reversed == num){
        printf("Palindrome");
    } else {
        printf("Not a palindrome");
    }
    return 0;
}