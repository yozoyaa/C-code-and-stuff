#include <stdio.h>

int main() {
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999}; 
    int A[11] = {0}; 
    int index = 0;

    for (int i = 0; data[i] != 999 && index < 11; i++) {
        if (data[i] % 2 == 0) { 
            A[index++] = data[i];
        }
    }

    for (int i = 0; i < 11; i++) {
        printf("%3d ", A[i]);
    }

    return 0;
}
