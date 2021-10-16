#include "exercice1.h"

int lireDonnees(char nomFichier[], int T[]){
  FILE* fichier = NULL;
  fichier = fopen(nomFichier, "r");
  if( fichier == NULL){
    printf("Erreur d'ouverture du fichier.\n");
    return(-1);
  }
  else{
    for(int i = 0; i < NB_NOMBRES; i++){
      fscanf(fichier, "%d, ", &T[i]);
    }
  }
  fclose(fichier);
}

void afficherTableau(int T[], int nb){
  for(int i = 0; i < nb; i++){
    printf("Le nombre %d est: %d\n", i, T[i]);
  }
}

void triABulles(int T[], int nb){
  int temp;
  for(int i = 0; i < nb ; i++){
    for(int j = 0; j < nb-i-1 ; j++){
      if( T[j + 1] < T[j]){
        temp = T[j + 1];
        T[j + 1] = T[j];
        T[j] = temp;
      }
    }
  }
}

void enregistrerDonnes(char nomFichier[], int T[], int nb){
  FILE* fichier = NULL;
  fichier = fopen(nomFichier, "w+");
  if(fichier == NULL){
    printf("Impossible d'ouvrir (ou creer) le fichier de nombres ranges.");
  }
  else{
    for(int i = 0; i < nb; i++){
      fprintf(fichier, "%d\n", T[i]);
    }
    fclose(fichier);
  }
}
