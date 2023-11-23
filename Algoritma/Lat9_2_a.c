#include <stdio.h>

int main() {
    int A[11] = {0};

    for (int i = 0; i < 11; i += 2) { 
        A[i] = (i / 2) + 1;
    }

    for (int i = 0; i < 11; i++) {
        printf("%d ", A[i]); 
    }

    return 0;
}
