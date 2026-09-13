#include <stdio.h>

// Helper function to reverse array sections
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter number of steps to rotate (k): ");
    scanf("%d", &k);

    k = k % n; // Handle k larger than n

    // Optimal reversal algorithm to rotate in O(n) time and O(1) space
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);

    printf("Rotated array:\n");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}