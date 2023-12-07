#include <stdio.h>

int main()
{
    int sisi1, sisi2, sisi3;

    printf("Masukkan sisi 1 : ");
    scanf("%d", &sisi1);
    printf("Masukkan sisi 2 : ");
    scanf("%d", &sisi2);
    printf("Masukkan sisi 3 : ");
    scanf("%d", &sisi3);

    int sisisama = 0;

    if (sisi1 == sisi2)
        sisisama = sisisama + 1;
    if (sisi2 == sisi3)
        sisisama = sisisama + 1;
    if (sisi1 == sisi3)
        sisisama = sisisama + 1;

    if (sisisama == 3)
    {
        printf("SAMA SISI");
    }
    else if (sisisama == 1)
    {
        printf("SAMA KAKI");
    }
    else
    {
        printf("SEMBARANG");
    }
}
