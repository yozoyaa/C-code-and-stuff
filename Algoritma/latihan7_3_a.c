#include<stdio.h>
int main() {
    int i, j, t;

    for ( i = 1; i <= 5; i+=2)
    { for ( j = i; j <= 9; j+=3)
        {
        printf("%4i", j);
        }
    printf("\n");
    }
}