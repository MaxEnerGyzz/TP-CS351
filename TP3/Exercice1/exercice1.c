#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void afficherNotes(float* notes, int n) {
  for(int i = 0; i < n; i++){
    printf("La note %d est: %f\n", i, notes[i]);
  }

}

float minimumNotes(float* notes, int n){
  float note_min = 21;
  for(int i = 0; i < n; i++){
    if(notes[i] < note_min){
      note_min = notes[i];
    }
  }
  return(note_min);
}

float maximumNotes(float* notes, int n){
  float note_max = 0;
  for(int i = 0; i < n; i++){
    if(notes[i] > note_max){
      note_max = notes[i];
    }
  }
  return(note_max);
}

float calculeMoyenne(float* notes, int n){
  float moyenne = 0;
  for(int i = 0; i < n; i++){
    moyenne += notes[i];
  }
  moyenne /= n;
  return(moyenne);
}

float calculeVariance(float* notes, int n){
  float variance = 0;
  float moyenne = calculeMoyenne(notes, n);
  for(int i = 0; i < n; i++){
    variance += powf((notes[i] - moyenne), 2);
  }
  variance /= n;
  return(variance);
}

float calculeEcarttype(float* notes, int n){
  float variance = calculeVariance(notes, n);
  float ecartType = sqrt(variance);
  return(ecartType);
}

float rechercherValeur(float* notes, int n, float valeur){
  float pos_valeur = -1;
  for(int i = 0; i < n; i++){
    if(notes[i] == valeur){
      pos_valeur = i;
    }
  }
  return(pos_valeur);
}

int main()
{
   float notes[5] = {12.0, 13.5, 8.5, 14.7, 6.0};
   afficherNotes(notes, 5);
   printf("\nLa note minimum est: %f\n", minimumNotes(notes, 5));
   printf("La note maximum est: %f\n", maximumNotes(notes, 5));
   printf("La moyenne est: %f\n", calculeMoyenne(notes, 5));
   printf("La variance est: %f\n", calculeVariance(notes, 5));
   printf("L'ecart-type est: %f\n", calculeEcarttype(notes, 5));
   printf("La valeur 13.5 se trouve à la position: %f\n", rechercherValeur(notes, 5, 13.5));
   printf("La valeur 42 se trouve à la position: %f\n", rechercherValeur(notes, 5, 42.0));
   return(0);
}
