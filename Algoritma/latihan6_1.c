#include <stdio.h>
//1.
int main() {
    int bilangan = 1;
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", bilangan);
        
        bilangan *= 2;
    }
    
    printf("\n");

//b    
    int a = 5;
    for(int i = 0; i < 10; i++) {
        printf("%d ", a);
        a = a + 3;
    }
    printf("\n");
//c
    int b = 100;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", b);
        b = b - 5;
    }
    printf("\n");
    return 0;
}
