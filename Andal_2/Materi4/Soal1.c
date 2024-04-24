#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

void sort(int arr[], int n) {
    int i, j, min_idx, temp;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int A[] = {15, 2, 14, 35, 5};
    int n = sizeof(A) / sizeof(A[0]);
    int N;

    printf("Data array sebelum disorting\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    sort(A, n);

    printf("Data array setelah di sorting\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    printf("Masukkan data yang ingin di cari: ");
    scanf("%d", &N);

    int result = binarySearch(A, 0, n - 1, N);
    if (result != -1) {
        printf("DATA DITEMUKAN\n");
        printf("Posisi data di urutan = %d\n", result + 1);
    } else {
        printf("TIDAK ADA\n");
    }

    return 0;
}
