#include<stdio.h>
int main() {

    int NILAI[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int LULUS[12] = {};
    int GAGAL[12] = {};
    int i, j, k, countLulus, countGagal;

    printf("\n Nilai : ");
    for ( i = 0; i < 12; i++)
    {
        printf("%3d", NILAI[i]);
    }

    j = 0, k = 0, countLulus = 0, countGagal = 0;
    for ( i = 0; i < 12; i++)
    {
        if (NILAI[i] >= 60)
        {
            LULUS[j] = NILAI[i];
            j++;
            countLulus++;
        } else
        {
            GAGAL[k] = NILAI[i];
            k++;
            countGagal++;
        }
    }

    printf("\n Lulus : ");
    for ( i = 0; i < 12; i++)
    {
        printf("%3d", LULUS[i]);
    }

    printf("\n Gagal : ");
    for ( i = 0; i < 12; i++)
    {
        printf("%3d", GAGAL[i]);
    }

    printf("\n Jumlah Mahasiswa yang Lulus : %d", countLulus);
    printf("\n Jumlah Mahasiswa yang Gagal : %d", countGagal);

    return 0;
}