#include <stdio.h>
struct ipkmhs {
    char nim[11];
    char nama[30];
    float ipk;
};

int main() {
    struct ipkmhs students[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter data for student %d:\n", i + 1);
        printf("NIM: ");
        scanf("%10s", students[i].nim);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].nama);
        printf("IPK: ");
        scanf("%f", &students[i].ipk);
        printf("\n");
    }

    printf("Mhs ipk >= 3.0:\n");
    for (i = 0; i < 5; i++) {
        if (students[i].ipk >= 3.0) {
            printf("%s\n", students[i].nama);
        }
    }

    printf("\nMhs ipk < 3.0:\n");
    for (i = 0; i < 5; i++) {
        if (students[i].ipk < 3.0) {
            printf("%s\n", students[i].nama);
        }
    }

    return 0;
}
