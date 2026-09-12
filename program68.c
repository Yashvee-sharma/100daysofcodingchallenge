#include <stdio.h>

int main() {
    int n, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter the index position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if (pos >= n || pos < 0) {
        printf("Invalid position.\n");
    } else {
        // Shift elements to the left to cover the deleted element
        for(int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        printf("Array after deletion:\n");
        for(int i = 0; i < n - 1; i++) printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}