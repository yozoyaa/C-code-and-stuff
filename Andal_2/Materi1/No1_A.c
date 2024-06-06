#include<stdio.h>

int main() {
    int A[3][5];
    int i, j;

    for ( j = 0; j <= 4; j++)
    {
        for ( i = 0; i <= 2; i++)
        {
            A[i][j] = i;
        }
    }

    printf("Hasil Input kolom\n");
    for (j = 0; j <= 4; j++) {
        for (i = 0; i <= 2; i++) {
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}