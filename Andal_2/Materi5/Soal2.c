#include <stdio.h>

int main() {
    int A[] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int size = sizeof(A) / sizeof(A[0]);

    int largest = A[0];
    int count = 0;
    int index[size];

    for (int i = 0; i < size; i++) {
        if (A[i] > largest) {
            largest = A[i];
            count = 1; 
            index[0] = i;
        } else if (A[i] == largest) {
            index[count] = i; 
            count++; 
        }
    }

    printf("Angka Terbesar Di Tabel A Adalah %d\n", largest);
    printf("Jumlah Angka Terbesar Di Tabel A Ada %d\n", count);
    for (int i = 0; i < count; i++) {
        printf("Angka Terbesar Di Tabel A Ada Di Index: [%d]\n", index[i] + 1); 
    }
    printf("\n");

    return 0;
}
