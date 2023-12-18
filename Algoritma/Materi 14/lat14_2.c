#include<stdio.h>
int main() {

    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12] = {};
    int C[12] = {};
    int i, j, k, Jumlah;
    float rata_rata;

    printf("\n A : ");
    for ( i = 0; i < 12; i++)
    {
        printf("%3d", A[i]);
    }

    int jumlah = 0;
    for ( i = 0; i < 12; i++)
    {
        jumlah += A[i];
    }
    
    rata_rata = (float)jumlah / 12;

    j = 0, k = 0;
    for ( i = 0; i < 12; i++)
    {
        if (A[i] >= rata_rata)
        {
            B[j] = A[i];
            j++;
        } else
        {
            C[k] = A[i];
            k++;
        }
    }

    printf("\n B : ");
    for ( i = 0; i < 12; i++)
    {
        printf("%3d", B[i]);
    }

    printf("\n C : ");
    for ( i = 0; i < 12; i++)
    {
        printf("%3d", C[i]);
    }

    printf("\n Rata-rata A adalah: %.2f\n", rata_rata);

    return 0;
}