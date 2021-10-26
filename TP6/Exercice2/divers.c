#include "divers.h"

int fibonacci_rec(int n){
  if(n == 0){
    return(0);
  }
  else if(n == 1){
    return(1);
  }
  else{
    return(fibonacci_rec(n-1) + fibonacci_rec(n-2));
  }
}

int pgcd_rec(int a, int b){
  if(b == 0){
    return(a);
  }
  else{
    return(pgcd_rec(b, a%b));
  }
}

int palindrome_rec(char *str, int n){
  if( n <= 1){
    return(1);
  }
  else{
    return(str[0] == str[n-1] && palindrome_rec(&str[1], n-2));
  }
}
