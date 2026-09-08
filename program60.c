#include <stdio.h>

int main() {
    int n, positive = 0, negative = 0, zeros = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        if(arr[i] > 0) {
            positive++;
        } else if(arr[i] < 0) {
            negative++;
        } else {
            zeros++;
        }
    }

    printf("Positive elements = %d\n", positive);
    printf("Negative elements = %d\n", negative);
    printf("Zero elements = %d\n", zeros);
    return 0;
}