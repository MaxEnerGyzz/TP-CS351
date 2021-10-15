#include <stdio.h>

void jeuMulti() {
    int n = 1;
    while( n < 2 || n > 9) {
        printf("Valeur de n:");
        scanf("%d", &n);
        if(n < 2 || n > 9 ) {
            printf("Réessayez : la valeur doit être comprise entre 2 et 9\n");
        }
    }
    int correct = 1;
    int i = 0;
    int valeurDonne;
    while( correct == 1 && i < 10) {
        i++;
        printf("%d * %d = ", i, n);
        scanf("%d", &valeurDonne);
        if(valeurDonne != i * n){
            printf("Erreur: %d * %d = %d et non %d", i, n, i*n, valeurDonne);
            correct = 0;
        }
    }
    if(correct == 1){
        printf("Felicitations !!!");
    }
    
    
}

void jeuMultiPoints() {
    int n = 1;
    while( n < 2 || n > 9) {
        printf("Valeur de n:");
        scanf("%d", &n);
        if(n < 2 || n > 9 ) {
            printf("Réessayez : la valeur doit être comprise entre 2 et 9\n");
        }
    }
    int score = 0;
    int i = 1;
    int valeurDonne;
    while(i < 10) {
        i++;
        printf("%d * %d = ", i, n);
        scanf("%d", &valeurDonne);
        if(valeurDonne != i * n){
            printf("Erreur: %d * %d = %d et non %d\n", i, n, i*n, valeurDonne);
        }
        else{
            score++;
        }
    }
    if(score == 9){
        printf("Felicitations, vous connaissez vos multiplications !!!");
    }
    else{
        printf("Votre score est de: %d", score);
    }
    
    /* Le but des tests est d'essayer tous les "états possibles" du programme.
    Dans ce cas, on doit vérifier si la fonction fontionne normalement, si les entrées sont correctes, et dans le cas où elles ne le sont pas.
    C'est à dire qu'on va vérifier par exemple qu'on donne bien une table entre 2 et 9, la table de 6 en ne faisant aucune erreur, la table de 7 en faisant une erreur...
    */
}

int main()
{
    jeuMultiPoints();
    return(0);
}