#include <stdio.h>

int main() {

    int kode, harga;
    char jenis;
    float harga_diskon;

    printf("Masukkan kode: ");
    scanf("%d", &kode);
    
    printf("Masukkan jenis (A, B, atau C): ");
    scanf(" %c", &jenis);
    
    printf("Masukkan harga: ");
    scanf("%d", &harga);
    
    if (jenis == 'A') {
        harga_diskon = harga - (harga * 0.10);
    } else if (jenis == 'B') {
        harga_diskon = harga - (harga * 0.15);
    } else if (jenis == 'C') {
        harga_diskon = harga - (harga * 0.20);
    } else {
        printf("Jenis tidak valid\n");
        return 1;
    }
    
    printf("Jenis barang %c mendapat diskon = ", jenis);
    if (jenis == 'A') {
        printf("10%%");
    } else if (jenis == 'B') {
        printf("15%%");
    } else if (jenis == 'C') {
        printf("20%%");
    }
    printf(", Harga setelah didiskon = %.0f\n", harga_diskon);
    
    return 0;
}
