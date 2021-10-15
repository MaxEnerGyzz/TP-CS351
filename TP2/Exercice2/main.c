#include "pgcd.h"

int main()
{
    int a;
    int b;
    printf("Entrez une valeur de a et de b:");
    scanf("%d %d", &a, &b);
    printf("\nPGCD de a et b: %d\n", pgcd(a,b));
    return(0);
}
