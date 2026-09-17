#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");
    // Loop through all possible diagonal lines (total: rows + cols - 1)
    for (int k = 0; k < rows + cols - 1; k++) {
        // Find starting row and column for each line
        int r = (k < cols) ? 0 : k - cols + 1;
        int c = (k < cols) ? k : cols - 1;

        while (r < rows && c >= 0) {
            printf("%d ", matrix[r][c]);
            r++;
            c--;
        }
        printf("\n"); // Group output line-by-line
    }

    return 0;
}