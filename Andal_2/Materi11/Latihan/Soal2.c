#include <stdio.h>

int main() {
    int A, B, T, *P, *Q, *R;

    A = 25; B = 12; 
    P = &A; 
    Q = &B; 
    R = &T; 

    *R = *P + *Q;
    printf("%i", *R);

    return 0;
}
