#include <stdio.h>

int main() {
    int ALG[20], PW[20], MR[20];
    int PRESTASI[20];
    int i, j = 0;
    float rata_rata;

    printf("Masukkan nilai untuk mata kuliah Algoritma, Pemrograman Web, dan Metodologi Riset.\n");
    for (i = 0; i < 20; i++) {
        printf("Mahasiswa %d:\n", i + 1);
        printf("Algoritma: ");
        scanf("%d", &ALG[i]);
        printf("Pemrograman Web: ");
        scanf("%d", &PW[i]);
        printf("Metodologi Riset: ");
        scanf("%d", &MR[i]);
    }

    for (i = 0; i < 20; i++) {
        PRESTASI[i] = -1;
    }
    for (i = 0; i < 20; i++) {
        rata_rata = (ALG[i] + PW[i] + MR[i]) / 3.0;
        if (rata_rata > 80 && ALG[i] >= 60 && PW[i] >= 60 && MR[i] >= 60) {
            PRESTASI[j++] = i;
        }
    }
    
    printf("\n Nilai Pemograman Web : ");
    for ( i = 0; i < 20; i++)
    {
        printf("%3d", ALG[i]);
    }
    
    printf("\n Nilai Pemograman Web : ");
    for ( i = 0; i < 20; i++)
    {
        printf("%3d", PW[i]);
    }
    
    printf("\n Nilai Metodologi Riset : ");
    for ( i = 0; i < 20; i++)
    {
        printf("%3d", MR[i]);
    }
    
    printf("\nIndeks mahasiswa berprestasi: ");
    for (i = 0; i < j; i++) {
        printf("%3d ", PRESTASI[i]);
    }
    printf("\n");

    return 0;
}
