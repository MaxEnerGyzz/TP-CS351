#include <stdio.h>

void ex3_ver1() {
    int n;
    int resultat = 0;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++) {
        resultat += i;
    }
    printf("Somme: %d", resultat);
}

void ex3_ver2() {
    int n;
    int resultat = 0;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    int i = 0;
    while(i <= n) {
        resultat += i;
        i++;
    }
    printf("Somme: %d", resultat);
}

void ex3_ver3() {
    int n;
    int resultat = 0;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    int i = 1;
    do {
        resultat += i;
        i++;
    } while( i <= n);
    printf("Somme: %d", resultat);
}

int main()
{
    ex3_ver3();
    return(0);
}