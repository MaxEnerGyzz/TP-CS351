#include "polynomes.h"

int main(int argc, char* argv[]){
  Polynome p1;
  Polynome p2;
  Polynome res;

  p1[0].degre = 154;
  p1[0].coeff = 42.0;
  p1[1].degre = 99;
  p1[1].coeff = 42;
  p1[2].degre = 10;
  p1[2].coeff = 42;
  p1[3].degre = 0;
  p1[3].coeff = 10;
  p1[4].degre = -1;
  // p1 = 42 * x^154 + 42 * x^99 + 42 * x^10 + 10

  p2[0].degre = 154;
  p2[0].coeff = 42;
  p2[1].degre = 98;
  p2[1].coeff = 42;
  p2[2].degre = 12;
  p2[2].coeff = 10;
  p2[3].degre = 0;
  p2[3].coeff = 25;
  p2[4].degre = -1;
  // p2 = 42 * x^154 + 42 * x^98 + 10 * x^12 + 25

  addPolynomes(p1, p2, res);
  affichePolynome(res);


}
