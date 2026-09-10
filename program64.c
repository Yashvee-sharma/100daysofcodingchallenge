#include <stdio.h>

int main() {
    long long num;
    int frequency[10] = {0};

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0) num = -num; // Handle negative numbers
    if (num == 0) frequency[0]++;

    while (num > 0) {
        int digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }

    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (frequency[i] > frequency[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("The digit that occurs the most times is: %d\n", maxDigit);
    return 0;
}