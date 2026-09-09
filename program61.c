#include <stdio.h>

int main() {
    int n, target, foundIndex = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // Linear search loop
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            foundIndex = i; // Save index position
            break;          // Stop searching once found
        }
    }

    if(foundIndex != -1) {
        printf("Element %d found at index position %d.\n", target, foundIndex);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}