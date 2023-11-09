#include<stdio.h>
int main(){

    int i, x = 20, a = 20;
    for ( i = 1; i <= 10; i++)
    {
        printf("\n%d", x);
        a += 5;
        x = x + a;

    }
    return 0;
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
