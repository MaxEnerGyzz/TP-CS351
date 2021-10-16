#include "matrice.h"

int main()
{
    int m1[NB_LIGNES][NB_COLONNES] = {
                                      {1,2,3},
                                      {4,5,6}};

    int m2[NB_LIGNES][NB_COLONNES] = {
                                      {1,2,3},
                                      {4,5,6}};

    int m3[NB_LIGNES2][NB_COLONNES2] = {
                                      {1,2},
                                      {3,4},
                                      {5,6}};
    printf("La matrice 1 vaut:\n");
    afficherMatrice(m1);
    printf("\nLa somme de m1 par m2 vaut:\n");
    additionnerMatrice(m1,m2);
    printf("\nLa transposee de m1 vaut:\n");
    transposee(m1);
    printf("\nLe produit de m1 par m3 vaut:\n");
    produitMatriciel(m1,m3);
    return(0);
}
