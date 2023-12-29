#include <stdio.h>
#define MAX_SIZE 10
#pragma warning(disable : 4996)

int main() {
    int array[MAX_SIZE][MAX_SIZE], n, m;

    printf("Enter size of the matrix m*n (not more than %d)\n", MAX_SIZE);
    scanf("%d %d", &n, &m);

    if (n <= MAX_SIZE && m <= MAX_SIZE) {
        printf("Enter elements of the matrix (%dx%d):\n", n, m);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                printf("array[%d][%d]: ", i, j);
                scanf("%d", &array[i][j]);
            }
        }

        printf("Matrix as snake:\n");
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                // Вивід рядка зліва направо
                for (int j = 0; j < m; j++) {
                    printf("%d\t", array[i][j]);
                }
            }
            else {
                // Вивід рядка справа наліво
                for (int j = m - 1; j >= 0; j--) {
                    printf("%d\t", array[i][j]);
                }
            }
            printf("\n");
        }
    }
    else {
        printf("Wrong size of the matrix\n");
    }

    return 0;
}