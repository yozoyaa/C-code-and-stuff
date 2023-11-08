#include<stdio.h>
int main(){
    int a = 5;
    for(int i = 0; i < 10; i++) {
        printf("%d ", a);
    }
    a = a + 2;
    printf("\n");
    return 0;
}