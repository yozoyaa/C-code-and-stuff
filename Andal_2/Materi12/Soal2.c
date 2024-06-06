#include <stdio.h>

void MengisiArray(int array[], int size);
double MenghitungRata(int array[], int size);

int main() {
    int A[100]; 

    MengisiArray(A, 100); 

    double average = MenghitungRata(A, 100);
    printf("Rara - Rata Nilai: %.2f\n", average); 

    return 0;
}

void MengisiArray(int array[], int size) {
    printf("Masukan %d Nilai:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
}

double MenghitungRata(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return (double)sum / size;
}
