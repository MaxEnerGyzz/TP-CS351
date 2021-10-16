#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float valeurPolynome(float A[], int N, float x0){
  float somme = 1;
  for(int i = N; i > 0; i--){
    printf("Poly: %f\n", somme);
    if(i == N){
      somme = A[N] * x0 + A[i -1];
    }

    else{
      somme = somme * x0 + A[i-1];
    }
  }
  return(somme);
}

int main(){
  int n = 5;
  float A[5] = {1, 3, 5, 6};
  float x0 = 2;
  printf("Le polynome evalue en %f vaut: %f", x0, valeurPolynome(A, n, x0));
  return(0);
}
