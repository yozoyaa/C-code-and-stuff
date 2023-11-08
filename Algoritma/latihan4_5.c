#include <stdio.h>

int main() {

    int nilai_mk1, nilai_mk2, nilai_mk3;

    printf("Masukkan nilai mata kuliah 1: ");
    scanf("%d", &nilai_mk1);
    printf("Masukkan nilai mata kuliah 2: ");
    scanf("%d", &nilai_mk2);
    printf("Masukkan nilai mata kuliah 3: ");
    scanf("%d", &nilai_mk3);

    int jumlah_lulus = 0;
    
    if (nilai_mk1 >= 60) {
        jumlah_lulus++;
    }
    if (nilai_mk2 >= 60) {
        jumlah_lulus++;
    }
    if (nilai_mk3 >= 60) {
        jumlah_lulus++;
    }

    if (jumlah_lulus == 3) {
        printf("TIGA\n");
        } else if (jumlah_lulus == 2) 
        { printf("DUA\n");
        } else if (jumlah_lulus == 1) 
        { printf("SATU\n");
    } 
    else {
        printf("NOL\n");
    }
    
    return 0;
}
