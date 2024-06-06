#include <stdio.h>

int main() {
    int A[3][5] = {
        {15, 12, 25, 17, 10},
        {21, 30, 32, 23, 35},
        {16, 8, 7, 40, 11}
    };
    int I, J, *P;
    P = &A[0][0];

    I=1;
    while(I <= 3)
    { printf("%3d", *++P);
        P+=3;
        I++;
    }

    return 0;
}
