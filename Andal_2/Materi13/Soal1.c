#include <stdio.h>

int pangkat(int a, int b) {
    if (b == 0) {
        return 1;
    } else if (b == 1) {
        return a;
    } else {
        return a * pangkat(a, b - 1);
    }
}

int main() {
    int x, y, hasil;

    printf("Masukan bilangan: ");
    scanf("%d", &x);

    printf("Masukan pangkat: ");
    scanf("%d", &y);

    hasil = pangkat(x, y);
    printf("%d\n", hasil);

    return 0;
}
