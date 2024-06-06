#include <stdio.h>

#define ROW_P 2
#define COL_P 3
#define ROW_Q 3
#define COL_Q 3

void multiplyMatrices(int P[ROW_P][COL_P], int Q[ROW_Q][COL_Q], int R[ROW_P][COL_Q]) {
    int i, j, k;
    for (i = 0; i < ROW_P; i++) {
        for (j = 0; j < COL_Q; j++) {
            R[i][j] = 0;
            for (k = 0; k < COL_P; k++) {
                R[i][j] += P[i][k] * Q[k][j];
            }
        }
    }
}

void printMatrix(int matrix[][COL_Q], int rows) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < COL_Q; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int P[ROW_P][COL_P] = {
        {2, 1, 2},
        {1, 2, 3}
    };
    int Q[ROW_Q][COL_Q] = {
        {2, 1, 4},
        {1, 2, 3},
        {2, 2, 1}
    };
    int R[ROW_P][COL_Q];

    multiplyMatrices(P, Q, R);

    printf("Array P (2x3):\n");
    printMatrix(P, ROW_P);
    printf("Array Q (3x3):\n");
    printMatrix(Q, ROW_Q);
    printf("Resultant Array R (Product of P and Q, 2x3):\n");
    printMatrix(R, ROW_P);

    return 0;
}
