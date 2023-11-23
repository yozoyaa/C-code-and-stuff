#include <stdio.h>

int main() {

    int A[9] = {}, i;
    
    for ( i = 0; i <= 8; i++)
    {
        A[i] = i * 2 + 1;
        printf("%3d", A[i]);
    }
    return 0;
}
