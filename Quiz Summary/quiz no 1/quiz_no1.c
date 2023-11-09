#include <stdio.h>
int main()
{
    int i, nilai=20, x= 20;
    printf("%d", nilai);
    for(i = 1; i < 10; i++)
    {
        x += 5;
        nilai = nilai + x;
        printf("\n%d",nilai);
    }
    
}

/*The output: 
20
45
75
110
150
195
245
300
360
425
*/