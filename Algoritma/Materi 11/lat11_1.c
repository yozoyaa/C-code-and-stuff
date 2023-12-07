#include <stdio.h>

int main() {
    int A[11] = {98, 70, 72, 75, 87, 83, 88, 95, 96, 60, 50}, check;


    for (int i = 0; i < 11; i++) {
        if (A[i] >= 90)
        {
            check = 1;
        }
    }

    if (check == 1)
    {
        printf("ADA");
    } else
    {
        printf("TIDAK ADA");
    }
    return 0;
}