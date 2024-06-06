#include <stdio.h>

int main() {
    char A[3][5] = {
        {'A', 'B', 'C', 'D', 'E'},
        {'F', 'G', 'H', 'I', 'J'},
        {'K', 'L', 'M', 'N', 'O'}
    };
    char B[5][3];
    int k = 0; 
    
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 3; ++j) {
            B[i][j] = A[k / 5][k % 5]; 
            k++; 
        }
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%c ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
