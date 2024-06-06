#include <stdio.h>

void des(int array[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] < key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

int main() {
    int array[] = {15, 10, 7, 22, 17, 5, 12};
    int n = sizeof(array)/sizeof(array[0]);

    printf("Array sebelum di sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    des(array, n);

    printf("Array setelah di sort: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
