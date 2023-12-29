#include <stdio.h>

#define MAX_SIZE 10

#pragma warning(disable : 4996)

int matrix[MAX_SIZE][MAX_SIZE], n, max;

int main() {
    printf("Enter size of the square matrix n*n (not more than 10)\n");
    scanf("%d", &n);

    if (n <= 10) {
        printf("Enter the elements of the matrix (%dx%d):\n", n, n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("matrix[%d][%d]: ", i, j);
                scanf("%d", &matrix[i][j]);
            }
        }

        printf("Max in each row: \n");
        for (int i = 0; i < n; i++) {
            max = matrix[i][0];

            for (int j = 1; j < n; j++) {
                if (matrix[i][j] > max) {
                    max = matrix[i][j];
                }
            }

            printf("Row %d: %d\n", i + 1, max);
        }
    }
    else {
        printf("Wrong size of the matrix\n");
    }

    return 0;
}