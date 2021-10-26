#include "divers.h"

int main(){
  int fibonnaci_n = 6;
  printf("Fibonacci de %d = %d\n", fibonnaci_n, fibonacci_rec(fibonnaci_n));

  int pgcd_a = 10, pgcd_b = 5;
  printf("PGCD de %d et %d: %d\n", pgcd_a, pgcd_b, pgcd_rec(pgcd_a, pgcd_b));

  char str[10] = "koyak";
  printf("Est palindrome: %d\n", palindrome_rec(str, 5));

  return(0);
}
