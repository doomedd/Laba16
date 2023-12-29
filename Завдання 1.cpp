#include <stdio.h>
#pragma warning(disable : 4996)
#define MAX_SIZE 100

int main() {
    int number;
    printf("Press 1\n");
    scanf("%d", &number);

    switch (number) {
    case 1: {
        int arrayA[3][4], arrayB[4][3], arrayBt[3][4], arrayC[3][4];

        printf("Enter elements of the matrix 3*4\n");
        for (int a = 0; a < 3; a++) {
            for (int b = 0; b < 4; b++) {
                printf("array[%d][%d]: ", a, b);
                scanf("%d", &arrayA[a][b]);
            }
        }

        printf("Enter elements of the matrix 4*3\n");
        for (int c = 0; c < 4; c++) {
            for (int d = 0; d < 3; d++) {
                printf("array[%d][%d]: ", c, d);
                scanf("%d", &arrayB[c][d]);
            }
        }

        printf("Transposed matrix 4*3\n");
        for (int c = 0; c < 3; c++) {
            for (int d = 0; d < 4; d++) {
                arrayBt[c][d] = arrayB[d][c];
                printf("%d ", arrayBt[c][d]);
            }
            printf("\n");
        }

        printf("Sum matrix 3+4 and 3+4\n");
        for (int c = 0; c < 3; c++) {
            for (int d = 0; d < 4; d++) {
                arrayC[c][d] = arrayA[c][d] + arrayBt[c][d];
                printf("%d ", arrayC[c][d]);
            }
            printf("\n");
        }
        break;
    }
    default:
        printf("Invalid option\n");
    }

    return 0;
}