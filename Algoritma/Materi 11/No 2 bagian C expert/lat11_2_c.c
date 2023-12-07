#include <stdio.h>

int find_and_print_index(int arr[], int n, int *unique_inputs, int *unique_count, int *inputs_count) {
    int found = 0;
    for (int i = 0; i < 11; i++) {
        if (arr[i] == n) {
            printf("angka yang dimasukan %d = lokasi index %d\n", n, i);
            found = 1;
            printf("FOUND");
            break;
        }
    }
    if (!found) {
        printf("angka yang dimasukan %d NOT FOUND.", n);
    }
    
    if (found && unique_inputs[n] == 0) {
        unique_inputs[n] = 1;
        (*unique_count)++;
    }
    (*inputs_count)++;

    return found;
}

int main() {
    int arr[11] = {12, 17, 10, 5, 15, 25, 11, 8, 3, 16, 19};
    int input_number, match_count = 0, total_inputs = 0;
    int unique_inputs[9999] = {0};

    for (int i = 0; i < 11; i++) {
        printf("\nMasukan angka %d: ", i + 1);
        scanf("%d", &input_number);
        find_and_print_index(arr, input_number, unique_inputs, &match_count, &total_inputs);
    }

    printf("\nTotal angka yang sama dengan array adalah: %d\n", match_count);
    printf("Total input yang dimasukan: %d\n", total_inputs);

    return 0;
}