#include "fractions.h"

int main(int argc, char* argv[]){
  Fraction fa, fb ;
  char operation;

  printf("Entrer deux fractions :") ;
  scanf("%d/%d %d/%d", &fa.num, &fa.den, &fb.num, &fb.den) ;
  printf("\nEntrer une opération:");
  scanf(" %c", &operation);
  switch(operation){
    case '+':
      addFraction(fa, fb);
    break;

    case '-':
      subFraction(fa, fb);
    break;

    case '*':
      mulFraction(fa, fb);
    break;

    case '/':
      divFraction(fa, fb);
    break;
    default:
    printf("Mauvaise opération !");
    }
}
