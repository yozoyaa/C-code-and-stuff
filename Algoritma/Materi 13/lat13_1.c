#include<stdio.h>
int main() {

    int A[4] = {12, 2, 7, 10};
    int B[6] = {15, 4, 16, 20, 25, 30};
    int C[10] = {};
    int i, j;

    printf("\nArray A :");
    for ( i = 0; i < 4; i++)
    {
        printf("%3d", A[i]);
    }
    printf("\nArray B :");
        for ( i = 0; i < 6; i++)
    {
        printf("%3d", B[i]);
    }
    
    j = 0;
    for ( i = 0; i < 4; i++)
    {
        if (A[i] < 10)
        {
            C[j] = A[i];
            j++;
        }
        
    }
    for ( i = 0; i < 6 && j < 10; i += 2)
    {
        C[j] = B[i + 1];
        j++;
    }

    printf("\nArray C :");
    for ( i = 0; i < 10; i++)
    {
        printf("%3d", C[i]);
    }
    
    return 0;
}