#include "fractions.h"

int pgcd(int a, int b) {
    int pgcd;
    int r = 1;
    if(b == 0) {
        return(0);
    }
    else {
        while(r != 0){
            r = a % b;
            if( r != 0) {
                a = b;
                b = r;
            }
        }
        return(b);
    }
}

void simplifierFraction(Fraction *f){
  int pgcdt = pgcd(f->num, f->den);
  if( pgcdt != 1){
    f->num /= pgcdt;
    f->den /= pgcdt;
  }
}

void addFraction(Fraction f1, Fraction f2){
  Fraction f_r;
  if(f1.den == f2.den){
    f_r.num = f1.num + f2.num;
    f_r.den = f1.den;
  }
  else if(f1.den < f2.den && f2.den % f1.den == 0){ //Si f2.den > f1.den et f2.den et f1_den multiples entre eux
    f_r.num = f1.num * (f2.den / f1.den) + f2.num;
    f_r.den = f2.den;
  }
  else if(f2.den < f1.den && f1.den % f2.den == 0){ //Si f1.den > f2.den et f2.den et f1_den multiples entre eux
    f_r.num = f2.num * (f1.den / f2.den) + f1.num;
    f_r.den = f1.den;
  }
  else{ // Pas de multiples communs
      f_r.num = f1.num * f2.den + f2.num * f1.den;
      f_r.den = f1.den * f2.den;
  }
  simplifierFraction(&f_r);
  printf("L'addition vaut: %d / %d !\n", f_r.num, f_r.den);
}

void subFraction(Fraction f1, Fraction f2){
  Fraction f_r;
  if(f1.den == f2.den){
    f_r.num = f1.num - f2.num;
    f_r.den = f1.den;
  }
  else if(f1.den < f2.den && f2.den % f1.den == 0){ //Si f2.den > f1.den et f2.den et f1_den multiples entre eux
    f_r.num = f1.num * (f2.den / f1.den) - f2.num;
    f_r.den = f2.den;
  }
  else if(f2.den < f1.den && f1.den % f2.den == 0){ //Si f1.den > f2.den et f2.den et f1_den multiples entre eux
    f_r.num = f2.num * (f1.den / f2.den) - f1.num;
    f_r.den = f1.den;
  }
  else{ // Pas de multiples communs
      f_r.num = f1.num * f2.den - f2.num * f1.den;
      f_r.den = f1.den * f2.den;
  }
  simplifierFraction(&f_r);
  printf("La soustraction vaut: %d / %d !\n", f_r.num, f_r.den);
}

void mulFraction(Fraction f1, Fraction f2){
  Fraction f_r;
  f_r.num = f1.num * f2.num;
  f_r.den = f1.den * f2.den;
  simplifierFraction(&f_r);
  printf("La multiplication vaut: %d / %d !\n", f_r.num, f_r.den);
}

void divFraction(Fraction f1, Fraction f2){
  Fraction f_r;
  f_r.num = f1.num * f2.den;
  f_r.den = f1.den * f2.num;
  simplifierFraction(&f_r);
  printf("La division vaut: %d / %d !\n", f_r.num, f_r.den);
}
