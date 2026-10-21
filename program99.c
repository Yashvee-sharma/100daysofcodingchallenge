// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main() {
    char input_date[] = "15/04/2025";
    
    int day = 0;
    int month = 0;
    int year = 0;
    sscanf(input_date, "%d/%d/%d", &day, &month, &year);
    if (month == 4) {
        printf("%02d-Apr-%d\n", day, year);
    } else {
        printf("%02d-%02d-%d\n", day, month, year);
    }

    return 0;
}
