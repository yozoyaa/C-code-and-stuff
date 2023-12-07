#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 8, 3, 16, 19}, flag = 0, n;

    scanf("%d", &n);

    for (int i = 0; i < 11; i++) {
        if (A[i] == n)
        {
            flag += 1;
        }
    }

    if (flag != 0)
    {
        printf("FOUND");
    } else
    {
        printf("Not Found");
    }
    return 0;
}