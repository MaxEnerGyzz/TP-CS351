#include <stdio.h>

void ex2() {
    int annee;
    printf("Entrez une annee:");
    scanf("%d", &annee);
    if( ((annee % 4 == 0) && !(annee % 100 == 0)) || ((annee % 4 == 0) && (annee % 100 == 0) && (annee % 400 == 0))){
        printf("L'annee %d est bissextile ! ", annee);
    }
    else {
        printf("L'annee %d n'est pas bissextile.", annee);
    }
}
int main()
{
    ex2();
    return(0);
}
