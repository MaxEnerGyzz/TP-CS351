#include "exercice1.h"


int main(int argc, char* argv[]){
  char nomFichier[1000];
  strcpy(nomFichier, argv[1]);
  int nombres[NB_NOMBRES];

  lireDonnees(nomFichier, nombres);
  triABulles(nombres, NB_NOMBRES);
  enregistrerDonnes("nombres_ranges.txt", nombres, NB_NOMBRES);
}
