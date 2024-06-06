#include <stdio.h>

int sum(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sum(n - 1);
    }
}

int main() {
    int N;
    printf("Input nilai lebih besar dari 10: ");
    scanf("%d", &N);

    if (N <= 10) {
        printf("Nilai harus lebih dari 10.\n");
        return 1;
    }

    int total = sum(N);
    printf("Total dari 1 hingga %d adalah %d\n", N, total);

    return 0;
}
