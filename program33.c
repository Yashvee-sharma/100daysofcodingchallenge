// Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
int main(){
    int num, temp, OriginalNum, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    OriginalNum = 0;
    temp = num;
    while (temp != 0){
        temp /= 10;
        count ++;
    }
    temp = num;
    while (temp != 0){
        digit = temp % 10;
        OriginalNum = OriginalNum + round(pow(digit, count));
        temp /= 10;
    }
    if (OriginalNum == num){
        printf("Armstrong");
    } else {
        printf("Not Armstrong");
    }
    return 0;
}