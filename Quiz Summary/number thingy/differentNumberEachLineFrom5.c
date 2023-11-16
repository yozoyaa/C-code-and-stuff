#include <stdio.h>

int main() {
    int i, j;

    for (i = 5; i >= 1; i--) {    
        for (j = 1; j <= i; j++) { 
            printf("%3d", i);       
        }
        printf("\n");              
    }

    return 0;
}

/* Output
  5  5  5  5  5
  4  4  4  4
  3  3  3
  2  2
  1
*/