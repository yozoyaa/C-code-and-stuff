#include<stdio.h>
int main() {

    int n;

    printf("Masukan bilangan n: ");
    scanf("%d", &n);

    if (n > 50)
    {
        if (n > 75)
        {
            n = n - 25;
            n = n - 10;
        } else
        {
            n = n - 10;
        }      
    } else
    {
        n = n + 10;
    }
    printf("%d", n);

    return 0;
}