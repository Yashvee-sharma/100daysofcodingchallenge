#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns for first matrix (A): ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix (B): ");
    scanf("%d %d", &r2, &c2);

    // Matrix multiplication condition check
    if (c1 != r2) {
        printf("Error! Multiplication not possible. Columns of A must equal Rows of B.\n");
        return 0;
    }

    int A[r1][c1], B[r2][c2], product[r1][c2];

    printf("\nEnter elements of matrix A:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    printf("\nEnter elements of matrix B:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    // Initialize product matrix elements to 0 and multiply
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            product[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nResultant Product Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}