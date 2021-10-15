#include <stdio.h>

int factorielle(int n) { // Calcul de PGCD
 // On vérifie que n = 1 => 1, n = 2 => 2, n = 5 => 120
    int somme = 1;
    for(int i = n; i > 0; i--){
        somme = somme * i;
    }
    return somme;
}

int factorielleBis(int m) {
    // On teste la fonction pour m = 5, m = 6...
    int n = 1;
    int i = 1;
    while(n < m) {
        i++;
        n = n * i;
    }
    return(i);
    

}

int main()
{
    int n;
    printf("Entrez une valeur de n:");
    scanf("%d", &n);
    printf("Factorielle: %d, FactorielleBis: %d", factorielle(n), factorielleBis(n));
    return(0);
}