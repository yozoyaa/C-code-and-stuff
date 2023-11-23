#include <stdio.h>

int main() {

    int A[9] = {}, i;

    i = 0;
    while (i <= 8)
    {
        A[i] = i;
        printf("%3d", A[i]);

        i += 2;
    }

    return 0;
}
