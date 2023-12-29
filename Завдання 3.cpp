#include <stdio.h>
#pragma warning(disable : 4996)
int main() {
    int f[4] = { 0 }, s[4][3], sum;

    printf("Enter the elements of the matrix 4*3:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("s[%d] [%d]: ", i, j);
            scanf("%d", &s[i][j]);
        }
    }

    printf("Form an array f\n");
    for (int i = 0; i < 4; i++) {
        sum = 0;
        for (int j = 0; j < 3; j++) {
            if (s[i][j] > 0) {
                sum += s[i][j];
            }
        }
        f[i] = sum;
    }

    printf("Array f:\n");
    for (int i = 0; i < 4; i++) {
        printf("f[%d] = %d\n", i, f[i]);
    }

    return 0;
}