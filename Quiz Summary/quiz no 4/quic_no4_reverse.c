#include <stdio.h>

int main() {
    int i, j;
    
    for (i = 5; i > 0; --i) {
        for (j = 5; j >= i; --j) {
            printf("%3d ", j);
        }
        printf("\n");
    }
    
    return 0;
}

/*Outputnya: 
  5 
  5   4 
  5   4   3 
  5   4   3   2 
  5   4   3   2   1 
  */
