#include <stdio.h>

int main() {
    int i, j;
    
    // The outer loop starts with i = 5 and goes down to 1
    for (i = 5; i >= 1; --i) {
        // The inner loop starts with the current value of i and increments up to 5
        for (j = i; j <= 5; ++j) {
            printf("%3d ", j);
        }
        printf("\n");
    }
    
    return 0;
}

/*Outputnya: 
  5 
  4   5 
  3   4   5 
  2   3   4   5 
  1   2   3   4   5 
*/