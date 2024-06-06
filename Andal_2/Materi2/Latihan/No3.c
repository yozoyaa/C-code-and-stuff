#include <stdio.h>

int main() {
    char A[15] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O'};
    char B[3][5];
    int N = 0;
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            B[j][i] = A[N++];
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
