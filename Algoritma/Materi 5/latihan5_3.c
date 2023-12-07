#include <stdio.h>

int main() {
    int jamMasuk, jamPulang, lamaBekerja;

    printf("Masukkan jam masuk: ");
    scanf("%d", &jamMasuk);
    printf("Masukkan jam pulang: ");
    scanf("%d", &jamPulang);

    if (jamPulang >= jamMasuk) {
        lamaBekerja = jamPulang - jamMasuk;
    } else {
        lamaBekerja = 12 - jamMasuk + jamPulang;
    }
    printf("Lama bekerja adalah %d jam.\n", lamaBekerja);

    return 0;
}
