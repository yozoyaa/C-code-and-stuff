#include <stdio.h>

void CETAK(int *Q); 

int main() {
    int A[10] = {12, 7, 5, 15, 17, 10, 14, 25, 8, 11};
    int *P;
    
    P = A; 
    CETAK(P); 
    
    return 0;
}

void CETAK(int *Q) {
    int I;
    for (I = 1; I <= 5; I++) {
        printf("%d\n", *Q);
        Q += 2; 
    }
}
