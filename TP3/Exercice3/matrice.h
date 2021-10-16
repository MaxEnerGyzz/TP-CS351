#ifndef __MATRICEH__
#define __MATRICEH__
#include <stdio.h>
#include <stdlib.h>
#define NB_LIGNES 2
#define NB_COLONNES 3
#define NB_LIGNES2 3
#define NB_COLONNES2 2

void afficherMatrice(int matrice[NB_LIGNES][NB_COLONNES]);

void additionnerMatrice(int matrice1[NB_LIGNES][NB_COLONNES], int matrice2[NB_LIGNES][NB_COLONNES]);

void transposee( int matrice[NB_LIGNES][NB_COLONNES]);

void produitMatriciel( int matrice1[NB_LIGNES][NB_COLONNES], int matrice3[NB_LIGNES2][NB_COLONNES2]);

#endif
