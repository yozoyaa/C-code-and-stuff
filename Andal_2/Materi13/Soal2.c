#include <stdio.h>
int fpb(int x, int y);

int main() {
    int a, b, result;

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);

    result = fpb(a, b);
    printf("FPB dari %d dan %d adalah %d\n", a, b, result);

    return 0;
}

int fpb(int x, int y) {
    if (x % y == 0) {
        return y;
    } else if (x < y) {
        return fpb(y, x);
    } else {
        return fpb(y, x % y);
    }
}
