#include<stdio.h>

int main() {
    int A[3][5];
    int i, j, N;

    N = 1;
    for ( i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= i + 2; j++)
        {
            A[i][j] = N;
            N++;
            printf("Input baris %d, Kolom %d : ", i, j); scanf("%d", &A[i][j]);
        }
    }
    
    printf("Hasil Input kolom\n");
    for ( i = 0; i <= 2; i++)
    {
        for ( j = 0; j <= i + 2; j++)
        {
            printf("%3d", A[j][i]);
        }
        printf("\n");
    }
    return 0;
}