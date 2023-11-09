#include <stdio.h>

int main() {
    char current_char = 'a'; // Start with character 'a'
    int rows = 5; // Total 5 rows needed

    // Calculate the maximum width of the pattern
    // This is the number of characters in the last row
    int max_width = rows * 2 - 1;

    for (int i = 1; i <= rows; ++i) { // Loop for the rows
        // Print leading spaces
        for (int space = 1; space <= max_width - i * 2 + 1; ++space) {
            printf(" ");
        }
        
        // Loop for the characters in each row
        for (int j = 1; j <= i; ++j) {
            printf("%c ", current_char); // Print the current character with a space
            current_char++; // Move to the next character
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}
/*The Output:
        a 
      b c 
    d e f 
  g h i j 
k l m n o 
*/
