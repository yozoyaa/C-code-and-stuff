#include <stdio.h>

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
        if (N > 50) {
        N = N - 25;
    } else {
    N = N + 10;
    }
    printf("Result: %d\n", N);
    return 0;
}