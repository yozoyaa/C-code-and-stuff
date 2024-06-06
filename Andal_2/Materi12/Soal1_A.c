#include <stdio.h>

int PROSES(int A); 

int main() {
    int I, A;
    A = 15; 
    
    for (I = 1; I <= 3; I++) {
        A = PROSES(A); 
        printf("%d\n", A); 
    }
    
    return 0;
}

int PROSES(int A) {
    A = A * 2; 
    return A; 
}
