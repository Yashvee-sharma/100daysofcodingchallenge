#include <stdio.h>

int main() {
    int rows, cols, sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add to sum as we read
        }
    }

    printf("Sum of all elements in the matrix = %d\n", sum);
    return 0;
}