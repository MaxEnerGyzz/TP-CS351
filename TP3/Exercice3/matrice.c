#include "matrice.h"


void afficherMatrice( int matrice[NB_LIGNES][NB_COLONNES]){
  for(int i = 0; i < NB_LIGNES;i++){
    for(int j = 0; j < NB_COLONNES; j++){
      printf("%d ", matrice[i][j]);
    }
    printf("\n");
  }
}

void additionnerMatrice( int matrice1[NB_LIGNES][NB_COLONNES], int matrice2[NB_LIGNES][NB_COLONNES]){
	int matrice3[NB_LIGNES][NB_COLONNES];
  for(int i = 0;i < NB_LIGNES; i++){
    for(int j = 0; j < NB_COLONNES; j++){
			matrice3[i][j] = matrice1[i][j] + matrice2[i][j];
		}
  }
	afficherMatrice(matrice3);
}

void transposee( int matrice[NB_LIGNES][NB_COLONNES]){
	int matriceT[NB_COLONNES][NB_LIGNES];
	for(int i = 0; i < NB_COLONNES; i++){
		for(int j = 0; j < NB_LIGNES; j++){
			matriceT[i][j] = matrice[j][i];
		}
	}
	for(int i = 0; i < NB_COLONNES; i++){
		for(int j = 0; j < NB_LIGNES; j++){
			printf("%d ", matriceT[i][j]);
		}
		printf("\n");
	}
}

void produitMatriciel( int matrice1[NB_LIGNES][NB_COLONNES], int matrice3[NB_LIGNES2][NB_COLONNES2]){
	int matriceP[NB_LIGNES][NB_COLONNES2];
	int temp;
	for(int i = 0; i < NB_LIGNES; i++){
		for(int j = 0; j < NB_COLONNES2; j++){
			temp = 0;
			for(int k = 0; k < NB_COLONNES; k++){
				temp += matrice1[i][k] * matrice3[k][j];
			}
			matriceP[i][j] = temp;
		}
	}
	for(int i = 0; i < NB_LIGNES; i++){
		for(int j = 0; j < NB_COLONNES2; j++){
			printf("%d ", matriceP[i][j]);
		}
		printf("\n");
	}
}
