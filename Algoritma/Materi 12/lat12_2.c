#include<stdio.h>
#include<limits.h>

int main() {
    int A[10];
    int i;
    int max = INT_MIN;
    int count;

    printf("Masukan Nilai 10 Mahasiswa: \n");
    for ( i = 0; i < 10; i++)
    {
        printf("Mahasiswa %d: ", i+1);
        scanf("%d", &A[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
            count = 1;
        } else if (A[i] == max)
        {
            count++;
        }
        
    }
    
    printf("\nIsi array: ");
    for ( i = 0; i < 10; i++)
    {
        printf("%3d", A[i]);
    }

    printf("\nNilai Terbesar Adalah : %d", max);
    printf("\nBanyaknya siswa yang mendapatkan nilai terbesar adalah: %d", count);
    
    return 0;
}