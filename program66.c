#include <stdio.h>

int main() {
    int n, key, i;

    printf("Enter current number of elements: ");
    scanf("%d", &n);
    int arr[n + 1]; // Size + 1 to accommodate new element
    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &key);

    // Shift elements to the right until correct spot is found
    for (i = n - 1; (i >= 0 && arr[i] > key); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = key;

    printf("Array after insertion:\n");
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}