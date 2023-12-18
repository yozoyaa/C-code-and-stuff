#include <stdio.h>
int main()
{
    char A[6] = "BOGOR";
    char B[8] = "JAKARTA";
    int i, j, flag = 0;

    printf("Isi Array A : ");
    for (i = 0; i < 5; i++) 
    {
        printf("%3c", A[i]);
    }

    printf("\nIsi Array B : ");
    for (i = 0; i < 7; i++) 
    {
        printf("%3c", B[i]);
    }

    for (i = 0; i < 5; i++) 
    {
        for (j = 0; j < 7; j++) 
        {
            if (A[i] == B[j]) 
            {
                flag = 1; break;
            }
         }
    }

    if(flag == 1) 
    {
        printf("\nADA");
    } else 
    {
        printf("\nTIDAK ADA");
    }
    
    return 0;
}
