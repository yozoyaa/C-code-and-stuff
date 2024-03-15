#include <stdio.h>

int main() {
    char A[15] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O'};
    char B[3][5];
    int index = 0;
    
    for (int col = 0; col < 5; col++) {
        for (int row = 0; row < 3; row++) {
            B[row][col] = A[index++];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%c ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
