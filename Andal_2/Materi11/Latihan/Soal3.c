#include <stdio.h>

int main() {
    int A[5] = {15, 12, 25, 17, 10};
    int *P;

    P = &A[2];

    printf("%i\n", --*P);
    printf("%i\n", *P); 

    return 0;
}
