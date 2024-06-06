#include <stdio.h>

int main() {
    int A[5]; 
    int *p = A; 

    for (int i = 0; i < 5; i++) {
        *(p + i) = i + 1;
    }

    printf("Array A: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
