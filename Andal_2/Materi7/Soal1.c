#include <stdio.h>

void selectionSort(int array[], int n) {
    int i, j, min_idx, temp;

    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (array[j] < array[min_idx])
                min_idx = j;

        temp = array[min_idx];
        array[min_idx] = array[i];
        array[i] = temp;
    }
}

int main() {
    int n, i;

    printf("Input jumlah element array: ");
    scanf("%d", &n);

    int array[n];

    for (i = 0; i < n; i++) {
        printf("Angka ke-%d: ", i+1);
        scanf("%d", &array[i]);
    }

    selectionSort(array, n);

    printf("Array setelah diurutkan: ");
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}
