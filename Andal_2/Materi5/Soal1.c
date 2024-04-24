#include <stdio.h>

int main() {
    int A[] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int size = sizeof(A) / sizeof(A[0]);

    int largest = A[0];
    int count = 1;

    for (int i = 1; i < size; i++) {
        if (A[i] > largest) {
            largest = A[i];
            count = 1; 
        } else if (A[i] == largest) {
            count++;
        }
    }

    printf("Angka Terbesar Adalah: %d\n", largest);
    printf("Angka Terbesar Tampil %d kali Di Array\n", count);

    return 0;
}
