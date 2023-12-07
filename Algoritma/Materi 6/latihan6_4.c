#include<stdio.h>
int main(){
//4.a
    int I, N;
    N = 45;
    for( I=1; I <= 5; I++)
        {printf("\n%i", N);
    N = N + 5;
    }
// 4.b
    int X, B;
    B = 35; X = 0;
    while(B<=100)
        { B=B+X;
        printf("\n%i",B);
        X=X+5;
    }
    return 0;
}
