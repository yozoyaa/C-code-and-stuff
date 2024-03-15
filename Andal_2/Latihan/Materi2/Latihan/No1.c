#include <stdio.h>

int main() {
    int A[3][5] = {
        {19, 11, 81, 25, 79},
        {16, 7, 9, 13, 25},
        {30, 10, 12, 40, 22}
    };
    int column_sum;
    for (int i = 0; i < 5; ++i) {
        column_sum = 0;
        for (int j = 0; j < 3; ++j) {
            column_sum += A[j][i];
        }
        printf("Sum of column %d: %d\n", i, column_sum);
    }

    return 0;
}