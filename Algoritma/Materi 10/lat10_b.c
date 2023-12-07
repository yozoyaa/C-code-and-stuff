#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 8, 3, 16, 19};
    int B[11] = {0};
    int j = 4; 

    for (int i = 0; i < 11; i++) {
        if (A[i] % 2 != 0) {
            B[j] = A[i];
            if (j < 10) { 
                j++;
            }
        }
    }

    printf("Array B (starting from index 4):\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}