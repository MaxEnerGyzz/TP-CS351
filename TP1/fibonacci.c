#include <stdio.h>

int fibonacci(int n) { // Suite de Fibonacci
    int u0 = 0;
    int u1 = 1;
    int un = 0;
    for(int i = 0; i < n;i++) {
        un = u0 + u1;
        u0 = u1;
        u1 = un;
    }
    printf("Un vaut: %d", un);
    return un;
}

int main()
{
    fibonacci(5);
    return(0);
}