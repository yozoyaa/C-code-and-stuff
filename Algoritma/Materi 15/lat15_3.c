#include <stdio.h>
#include <string.h>

int main() {
    char A[11] = "JOGJAKARTA";
    int count[26] = {0}; // Array untuk menghitung frekuensi setiap huruf
    int max_count = 0;
    char max_char;
    int i, index;


    for (i = 0; A[i] != '\0'; i++) {
        if(A[i] >= 'A' && A[i] <= 'Z') {
            index = A[i] - 'A'; 
            count[index]++;
            if (count[index] > max_count) {
                max_count = count[index];
                max_char = A[i];
            }
        }
    }

    printf("Isi Array A : ");
    for (i = 0; i < 10; i++) 
    {
        printf("%3c", A[i]);
    }

    printf("\n%c %d", max_char, max_count);

    return 0;
}
