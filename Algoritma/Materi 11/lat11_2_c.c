#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 8, 3, 16, 19}, flag = 0, sum = 0, n, i;

    scanf("%d", &n);

    for ( i = 0; i < 11; i++) {
        if (A[i] == n)
        {
            flag += 1;
            sum++;
            printf("\nAngka yang dimasukan %d= Berada di index %d =", n, i);
        }
    }

    if (flag != 0)
    {
        printf("\nFOUND");
        printf("\nAngka yang sama ada: %d", sum);
    } else
    {
        printf("Not Found");
    }
    return 0;
}