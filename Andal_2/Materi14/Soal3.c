#include <stdio.h>

struct nilaiMhs {
    char Nim[11];
    char Nama[30];
    char KodeMtk[5];
    int sks;
    char grade;
};

int main() {
    struct nilaiMhs student;

    printf("Enter student NIM: ");
    scanf("%10s", student.Nim);
    printf("Enter student Name: ");
    scanf(" %[^\n]s", student.Nama);
    printf("Enter course code: ");
    scanf("%4s", student.KodeMtk);
    printf("Enter number of SKS: ");
    scanf("%d", &student.sks);
    printf("Enter grade: ");
    scanf(" %c", &student.grade);

    printf("\nMahasiswa Information:\n");
    printf("NIM: %s\n", student.Nim);
    printf("Name: %s\n", student.Nama);
    printf("Course Code: %s\n", student.KodeMtk);
    printf("SKS: %d\n", student.sks);
    printf("Grade: %c\n", student.grade);

    return 0;
}
