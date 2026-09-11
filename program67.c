#include <stdio.h>

int main() {
    int n, element, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n + 1]; // Size + 1 to accommodate the new element

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position (0 to %d): ", n);
    scanf("%d", &pos);

    // Shift elements to the right to make space
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[pos] = element; // Insert the element

    printf("Array after insertion:\n");
    for(int i = 0; i <= n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}