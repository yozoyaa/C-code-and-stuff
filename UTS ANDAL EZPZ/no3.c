#include<stdio.h>
int main() {
    int n;

    printf("Masukan Code Saluran: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("TVRI");
    } else if (n == 2)
    {
        printf("SCTV");
    } else if (n == 3)
    {
        printf("INDOSIAR");
    } else if (n == 4)
    {
        printf("RCTI");
    } else if (n == 5)
    {
        printf("ANTV");
    } else if (n == 6)
    {
        printf("METROTV");
    } else
    {
        printf("Code saluran tidak diketahui");
    }
}