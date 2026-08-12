// Day 2: Program 4
// Q4: Write a program to calculate the area and circumference of a circle given its radius.

// /*
// Sample Test Cases:
// Input 1:
// 7
// Output 1:
// Area=153.94, Circumference=43.96

// Input 2:
// 3
// Output 2:
// Area=28.27, Circumference=18.85

// */
#include <stdio.h>
int main(){
    double radius, area, circumference;
    printf("Enter the  radius of the circle: ");
    scanf("%lf", &radius);
    area = 3.14 * radius * radius;
    circumference = 3.14 * 2 * radius;
    printf("Area of the circle is: %.2lf\n", area);
    printf("Circumference of the circle is: %.2lf\n", circumference);
    return 0;
}