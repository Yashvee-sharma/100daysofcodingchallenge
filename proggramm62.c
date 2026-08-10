#include <stdio.h>

int main() {
    int n, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Two-pointer method to reverse in-place
    int start = 0;
    int end = n - 1;

    while(start < end) {
        // Swap elements
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers closer together
        start++;
        end--;
    }

    printf("Reversed array elements:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}