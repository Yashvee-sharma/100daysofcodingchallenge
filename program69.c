#include <stdio.h>
#include <limits.h>

int main() {
    int n, max, secondMax;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    max = secondMax = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if(arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    if(secondMax == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("Second largest element = %d\n", secondMax);
    }
    return 0;
}