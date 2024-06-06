#include <stdio.h>

int main() {
    int P[2][3] = {{2, 1, 2}, {1, 2, 3}};
    int Q[3][3] = {{2, 1, 4}, {1, 2, 3}, {2, 2, 1}};
    
    int R[2][3] = {0};

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            R[i][j] = 0; 
            for (int k = 0; k < 3; ++k) {
                R[i][j] += P[i][k] * Q[k][j];
            }
        }
    }

    printf("Array R :\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", R[i][j]);
        }
        printf("\n");
    }

    return 0;
}
