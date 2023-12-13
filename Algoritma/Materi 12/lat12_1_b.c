#include <stdio.h>
#include <limits.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19}, i;
    int count;
    int min = INT_MAX;

    for ( i = 0; i < 11; i++) {
        printf("%3d", A[i]);
    }

    for ( i = 0; i < 11; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
            count = 1;
        }
        
    }
    
    printf("\nNilai Terkecil : %d dan banyaknya nilai terkecil : %d", A[11], count);
    return 0;
}