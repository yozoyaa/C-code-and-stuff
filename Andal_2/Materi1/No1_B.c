#include<stdio.h>

int main() {
    int A[3][5];
    int i, j, N;

    N = 1;
    for ( i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= 2+i; j++)
        {
            A[i][j] = N++;
        }
    }
    
    printf("Hasil Input kolom\n");
    for ( i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= 2+i; j++)
        {
            printf("%3d", A[j][i]);
        }
        printf("\n");
    }
    return 0;
}