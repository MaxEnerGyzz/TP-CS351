#include <stdio.h>

int pgcd(int a, int b) { // Calcul de PGCD avec itération
    int pgcd;
    int r = 1;
    if(b == 0) {
        return(0);
    }
    else {
        while(r != 0){
            r = a % b;
            if( r != 0) {
                a = b;
                b = r;
            }
        }
        return(b);
    }
}

int main()
{
    int a;
    int b;
    printf("Entrez une valeur de a et de b:");
    scanf("%d %d", &a, &b);
    printf("%d", pgcd(a,b));
    return(0);
}