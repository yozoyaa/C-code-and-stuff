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
    int locations[ROWS * COLS][2];

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (A[i][j] > maxVal) {
                maxVal = A[i][j];
                count = 1; 
                locations[0][0] = i;
                locations[0][1] = j;
            } else if (A[i][j] == maxVal) {
                locations[count][0] = i; 
                locations[count][1] = j;
                count++; 
            }
        }
    }

    printf("Angka Terbesar Di Tabel A Adalah: %d\n", maxVal);
    printf("Angka Terbesar Di Tabel A Ada %d\n", count);
    for (int i = 0; i < count; i++) {
        printf("Angka Terbesar Di Tabel A Ada Di Index: Baris[%d], Kolom[%d]\n ", locations[i][0], locations[i][1]);
    }
    printf("\n");

    return 0;
}
