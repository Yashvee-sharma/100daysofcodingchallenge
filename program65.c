#include <stdio.h>

int main() {
    int n, target, foundIndex = -1;

    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter sorted elements:\n");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter target element to find: ");
    scanf("%d", &target);

    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            foundIndex = mid;
            break;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (foundIndex != -1) {
        printf("Element found at index: %d\n", foundIndex);
    } else {
        printf("Element not found.\n");
    }
    return 0;
}