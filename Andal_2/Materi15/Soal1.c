#include <stdio.h>

int main() {
    FILE *fpDosen, *fpMahasiswa;
    char nip[20], namaDosen[50];
    char nim[20], namaMahasiswa[50];
    int i, numDosen, numMahasiswa;

    fpDosen = fopen("dosen.txt", "w");
    if (fpDosen == NULL) {
        printf("Error opening file dosen.txt\n");
        return 1;
    }

    fpMahasiswa = fopen("mahasiswa.txt", "w");
    if (fpMahasiswa == NULL) {
        printf("Error opening file mahasiswa.txt\n");
        fclose(fpDosen);
        return 1;
    }

    printf("Enter number of lecturers: ");
    scanf("%d", &numDosen);
    for (i = 0; i < numDosen; i++) {
        printf("Enter NIP for lecturer %d: ", i + 1);
        scanf("%s", nip);
        printf("Enter name for lecturer %d: ", i + 1);
        scanf(" %[^\n]s", namaDosen);
        fprintf(fpDosen, "%s, %s\n", nip, namaDosen);
    }

    printf("Enter number of students: ");
    scanf("%d", &numMahasiswa);
    for (i = 0; i < numMahasiswa; i++) {
        printf("Enter NIM for student %d: ", i + 1);
        scanf("%s", nim);
        printf("Enter name for student %d: ", i + 1);
        scanf(" %[^\n]s", namaMahasiswa);
        fprintf(fpMahasiswa, "%s, %s\n", nim, namaMahasiswa);
    }

    fclose(fpDosen);
    fclose(fpMahasiswa);

    printf("Data has been saved successfully.\n");

    return 0;
}
