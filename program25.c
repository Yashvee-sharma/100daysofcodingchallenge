// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main(){
    int a, b;
    char op;
    printf("Enter the value of a and b: ");
    scanf("%d" "%d", a, b);
    printf("Enter the operator: (+, -, *, /, %): ");
    scanf("%c", op);
    switch(op){
        case '+':
            printf("Sum: %d", a+b);
            break;
        case '-':
            printf("Difference: %d", a-b);
            break;
        case '*':
            printf("Product: %d", a*b);
            break;
        case '/':
            printf("Quotient: %d", a/b);
            break;
        case '%':
            printf("Remainder: %d", a%b);
            break;
    }
    return 0;
}