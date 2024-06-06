#include <stdio.h>

int main() {
    char A[3][5] = {
        {'A', 'B', 'C', 'D', 'E'},
        {'F', 'G', 'H', 'I', 'J'},
        {'K', 'L', 'M', 'N', 'O'}
    };

    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 5; i++) {
            printf("%c ", A[j][i]);
        }
        printf("\n");
    }
    return 0;
}
