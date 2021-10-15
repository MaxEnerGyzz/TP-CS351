#include "fonctions_math.h"

int quotient(int a, int b) { // Calcule le quotient de deux entiers positifs OU NEGATIFS
  int q = 0;
  int inverse = 0;
  if( b == 0){
    //printf("EXPLOSION ! PAS DE DIVISION PAR ZERO !!!\n");
    return(-1);
  }
  if( a < 0){
    a = -a;
    inverse++;
  }
  if( b < 0) {
    b = -b;
    inverse++;
  }
  while(a - b > 0){
    q++;
    a = a - b;
    }
  if(inverse % 2== 0){
    return(q);
  }
  else {
    return(-q);
  }
}


int reste(int a, int b){ // Calcule le reste de deux nombres positifs
  int inverse = 0;
  if( b == 0){ // On vérifie les différents cas selon le signe de a et b, et effectue les opérations nécessaires
    //printf("EXPLOSION ! PAS DE DIVISION PAR ZERO !!!\n");
    return(-1);
  }
  if(a > 0 && b < 0){
    b = -b;
  }
  if(a < 0 && b > 0){
    a = -a;
    inverse = 1;
  }
  if(a < 0 && b < 0){
    a = -a;
    b = -b;
    inverse = 1;
  }

  while(a - b > 0) {
    a = a - b;
  }
  if(inverse == 0){
    return(a);
  }
  return(-a);

}

int valeurAbsolue(int a){ // Calcule la valeur absolue d'un entier
  return(abs(a));
}

int ppcm(int a, int b){
  if(a == 0 || b == 0){
    return(0);
  }
  int num = valeurAbsolue(a * b);
  int dem = pgcd(a,b);
  return(num / dem);
}

int puissanceMB(int x, int n)
{
    int N = n, Y = 1, Z = x; // calcul de la puissance en utilisant les nombres binaires

    while (N != 0)
    {
        if (N % 2 != 0)
        {
            Y *= Z;
        }
        N = N / 2;
        Z *= Z;
    }

    return Y;
}

int sommeDesImpairs(int d, int f){
  int somme = 0;
  if( f < d){
    return(somme);
  }
  while( d != f) {
    somme = somme + d;
    d += 2;
  }
  return(somme + d);
}

int estUneDecompositionDe(int d, int f)
{
  int result = -1;
  int cube = 1;
  int indice = 0;

  result = sommeDesImpairs(d, f);

  while (cube < result){
      indice++;
      cube = puissanceMB(indice, 3);
      }

  result = cube == result ? indice : -1;

  return result;
}

void testBibliotheque() { // On se base sur des tests différents pour chaque fonction de la librairie "fonctions_maths"
  if(quotient(42, 5) == 8 && quotient(-78, 5) == -15 && quotient(42,-5) == -8 && quotient(-55, -6) == 9 && quotient(88,0) == -1){
    printf("Fonction quotient: OK!\n");
  }
  else{
    printf("Fonction quotient: KO!\n");
  }
  if(reste(42, 5) == 2 && reste(-78, 5) == -3 && reste(42,-5) == 2 && reste(-55, -6) == -1 && reste(88,0) == -1){
    printf("Fonction reste: OK !\n");
  }
  else{
    printf("Fonction reste: KO !\n");
  }
  if(valeurAbsolue(42) == 42 && valeurAbsolue(-42) == 42 && valeurAbsolue(0) == 0){
    printf("Fonction valeur absolue: OK !\n");
  }
  else{
    printf("Fonction valeur absolue: KO !\n");
  }
  if(ppcm(5,3) == 15 && ppcm(5,0) == 0 && ppcm(42,2) == 42){
    printf("Fonction ppcm: OK !\n");
  }
  else{
    printf("Fonction PPCM: KO !\n");
  }
  if(puissanceMB(5,5) == 3125 && puissanceMB(5,0) == 1 && puissanceMB(2,8) == 256){
    printf("Fonction puissance: OK !\n");
  }
  else{
    printf("Fonction puissance: KO !\n");
  }
  if(sommeDesImpairs(5,9) == 21 && sommeDesImpairs(5,1) == 0 && sommeDesImpairs(3,7) == 15){
    printf("Fonction sommeDesImpairs: OK !\n");
  }
  else{
    printf("Fonction sommeDesImpairs: KO !\n");
  }
  if(estUneDecompositionDe(7,13) == -1 && estUneDecompositionDe(7,11) == 3){
    printf("Fonction estUneDecompositionDe: OK !\n");
  }
  else{
    printf("Fonction estUneDecompositionDe: KO !\n");
  }
}
// On aurait pu utiliser la fonction assert() au lieu de conditionnels
