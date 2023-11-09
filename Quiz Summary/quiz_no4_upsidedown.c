#include <stdio.h>

int main() {
    // Define the total number of lines
    int total_lines = 5;

    // Outer loop for each line
    for (int i = 1; i < 7; ++i) {
        // Inner loop to print numbers in descending order starting from 9
        for (int j = i; j <= 5; ++j) {
            printf("%3d ", j);
        }
        // Newline after each row is printed
        printf("\n");
    }

    return 0;
}

/*Outputnya: 
  1   2   3   4   5 
  2   3   4   5 
  3   4   5 
  4   5 
  5 
*/
