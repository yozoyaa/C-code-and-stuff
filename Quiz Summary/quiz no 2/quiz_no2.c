#include <stdio.h>
int main()
{
    int i, nilai=35, x= 0;
    printf("%d", nilai);
    for(i = 1; i < 6; i++)
    {
        x += 5;
        nilai += x;
        printf("\n%d",nilai);
    }
    
}

/*The output: 
35
40
50
65
85
110
*/