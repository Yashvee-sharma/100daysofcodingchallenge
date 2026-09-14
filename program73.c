#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int rowSums[rows]; // Array to store the sum of each row

    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        rowSums[i] = 0; // Initialize row sum
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSums[i] += matrix[i][j];
        }
    }

    printf("\nSums of each row:\n");
    for(int i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSums[i]);
    }
    return 0;
}