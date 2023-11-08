#include <stdio.h>
int main() {
    int total = 0, nilai;
    
    while (total <= 500) {
        printf("Masukkan bilangan: ");
        scanf("%d", &nilai);
        total += nilai;
    }

    printf("Total: %d\n", total);

    return 0;
}