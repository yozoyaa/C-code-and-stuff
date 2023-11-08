#include <stdio.h>
#include <string.h>

int main() {
    char namaMataKuliah[50];
    int sks;
    int nilai;
    char grade[3];

    printf("Masukkan nama mata kuliah: ");
    scanf("%s", namaMataKuliah);

    printf("Masukkan SKS: ");
    scanf("%d", &sks);

    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if (nilai >= 85) {
        strcpy(grade, "A");
    } else if (nilai >= 80) {
        strcpy(grade, "A-");
    } else if (nilai >= 75) {
        strcpy(grade, "B+");
    } else if (nilai >= 70) {
        strcpy(grade, "B");
    } else if (nilai >= 65) {
        strcpy(grade, "B-");
    } else if (nilai >= 60) {
        strcpy(grade, "C+");
    } else if (nilai >= 55) {
        strcpy(grade, "C");
    } else if (nilai >= 50) {
        strcpy(grade, "C-");
    } else if (nilai >= 45) {
        strcpy(grade, "D");
    } else {
        strcpy(grade, "E");
    }

    printf("Grade = %s\n", grade);

    return 0;
}
