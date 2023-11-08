#include<stdio.h>
int main() {
    int i, j, t = 0;
    for ( i = 1; i <= 3; i++)
    { for ( j = i; j <= 5; j++)
        {
        t = t + j;
        printf("%3i", t);
        }
    printf("\n");
    }
}
