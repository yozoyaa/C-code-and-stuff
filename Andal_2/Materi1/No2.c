#include <stdio.h>

int main() {
    int A[3][5] = {0};
    int N = 1; 

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <= i; j++) { 
            A[i][j] = N; 
            N++; 
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
