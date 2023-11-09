#include <stdio.h>

int main() {
    int i, j;
    
    // Start with i = 5 and decrement down to 1
    for (i = 5; i > 0; --i) {
        // Start with j = 5 and decrement down to i
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
