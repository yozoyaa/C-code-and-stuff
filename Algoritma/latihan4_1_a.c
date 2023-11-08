#include<stdio.h>
int main() {
    int N;

    printf("Masukan Angka: ");
    scanf("%d", &N);

    if (N > 50) {
        N = N - 25;
        N = N + 10;
    }
    else {
        N = N + 10;
    }
    printf("Result: %d\n", N);

    return 0;
}