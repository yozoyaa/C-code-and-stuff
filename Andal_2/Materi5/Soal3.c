#include <stdio.h>

#define ROWS 3
#define COLS 5

int main() {
    int A[ROWS][COLS] = {
        {19, 11, 81, 25, 79},
        {16,  7,  9, 13, 25},
        {30, 10, 12, 40, 22}
    };

    int maxVal = A[0][0];
    int count = 0;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (A[i][j] > maxVal) {
                maxVal = A[i][j];
                count = 1; 
            } else if (A[i][j] == maxVal) {
                count++; 
            }
        }
    }

    printf("Angka Terbesar Di Tabel A adalah: %d\n", maxVal);
    printf("Angka Terbesar Di Tabel A ada: %d\n", count);

    return 0;
}
