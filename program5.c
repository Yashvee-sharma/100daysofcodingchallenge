// Day3 - Program 1
// Q5: Write a program to convert temperature from Celsius to Fahrenheit.

// /*
// Sample Test Cases:
// Input 1:
// 0
// Output 1:
// Fahrenheit=32

// Input 2:
// 100
// Output 2:
// Fahrenheit=212

// */
#include <stdio.h>
int main(){
    float celsius, fahrenheit;
    printf("Enter teperature in celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in fahrenheit is: %.2f\n", fahrenheit);
    return 0;
}