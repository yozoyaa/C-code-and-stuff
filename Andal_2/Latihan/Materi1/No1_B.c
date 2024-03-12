#include<stdio.h>

int main() {
    int A[3][5];
    int i, j, N;

    N = 1;
    for ( i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= 4-i; j++)
        {
            A[i][j] = N++;
            printf("Input baris %d, Kolom %d : ", i, j); scanf("%d", &A[i][j]);
        }
    }
    
    printf("Hasil Input kolom\n");
    for ( j = 0; j <= 2; j++)
    {
        for ( i = 0; i <= 4-j; i++)
        {
            printf("%3d", A[j][i]);
        }
        printf("\n");
    }
    return 0;
}