#include<stdio.h>
#include<limits.h>

int main() {
    int A[10];
    int i;
    int jumlah = 0;
    double rataRata;
    int dibawahRata = 0;

    printf("Masukan Nilai 10 Mahasiswa: \n");
    for ( i = 0; i < 10; i++)
    {
        printf("Mahasiswa %d: ", i+1);
        scanf("%d", &A[i]);
    }

    for ( i = 0; i < 10; i++)
    {
       jumlah += A[i];
    }

    rataRata = (double)jumlah / 10;

    for ( i = 0; i < 10; i++)
    {
        if (A[i] < rataRata)
        {
            dibawahRata++;
        }
        
    }
    
    printf("\nIsi array: ");
    for ( i = 0; i < 10; i++)
    {
        printf("%3d", A[i]);
    }

    printf("\nRata-rata nilai adalah: %.2f", rataRata);
    printf("\nAda %d nilai yang di bawah rata-rata.\n", dibawahRata);

    return 0;
}