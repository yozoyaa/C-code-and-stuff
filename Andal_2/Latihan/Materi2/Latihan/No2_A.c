#include <stdio.h>

int main() {
    char A[3][5] = {
        {'A', 'B', 'C', 'D', 'E'},
        {'F', 'G', 'H', 'I', 'J'},
        {'K', 'L', 'M', 'N', 'O'}
    };
    char B[5][3];

    // Transpose the elements of A into B
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            B[j][i] = A[i][j];
        }
    }

    // Print the contents of array B to verify the result
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%c ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
