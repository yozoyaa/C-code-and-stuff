#include <stdio.h>

int main() {
    char current_char = 'a'; // Start with character 'a'
    int rows = 5; // Total 5 rows needed

    for (int i = 1; i <= rows; ++i) { // Loop for the rows
        for (int j = 1; j <= i; ++j) { // Loop for the columns
            printf("%c ", current_char); // Print the current character
            current_char++; // Move to the next character
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}

/*The output: 
*/