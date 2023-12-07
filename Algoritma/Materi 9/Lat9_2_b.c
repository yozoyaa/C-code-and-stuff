#include<stdio.h>

int main() {
    int A[11] = {};
    for (int i = 0; i <= 10; i++)
    {
        A[i] = i + 1;
        i += 1;
    }

    for (int i = 0; i <= 10; i++)
    {
        printf("%3d", A[i]);
    }
}