#include "polynomes.h"

void addPolynomes(Polynome p1, Polynome p2, Polynome res){
  int i = 0;
  int j = 0;
  int k = 0;

  int matrice1_fini = 0;
  int matrice2_fini = 0;

  while( matrice1_fini == 0 || matrice2_fini == 0){
    if(matrice1_fini == 0 && matrice2_fini == 0){
      if(p1[i].degre > p2[j].degre ){
        res[k].degre = p1[i].degre;
        res[k].coeff = p1[i].coeff;
        i++;
      }
      else if(p1[i].degre < p2[j].degre ){
        res[k].degre = p2[j].degre;
        res[k].coeff = p2[j].coeff;
        j++;
      }
      else if(p1[i].degre == p2[j].degre ){
        res[k].degre = p1[i].degre ;
        res[k].coeff = p1[i].coeff + p2[j].coeff;
        i++;
        j++;
      }
    }
    else if(matrice1_fini == 0 && matrice2_fini == 1){
      res[k].degre = p1[i].degre;
      res[k].coeff = p1[i].coeff;
      i++;
    }
    else if(matrice1_fini == 1 && matrice2_fini == 0){
      res[k].degre = p2[j].degre;
      res[k].coeff = p2[j].coeff;
      j++;
    }
    if(p1[i].degre < 0){
      matrice1_fini = 1;
    }
    if(p2[j].degre < 0){
      matrice2_fini = 1;
    }
    k++;
  }
  res[k].degre = -1;
}

void affichePolynome(Polynome p){
  int i = 0;
  printf("Le polynome vaut: ");
  while(p[i].degre >= 0){
    printf("%.2f * x^%d ", p[i].coeff, p[i].degre);
    i++;
    if(p[i].degre >= 0){
      printf("+ \n");
    }
  }
  printf("\n");
}
