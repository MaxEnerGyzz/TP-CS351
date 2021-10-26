#include "fonction.h"

void hanoi(int taille, char A, char B, char C){
    hanoi_aux(taille, A,C,B);
}

void hanoi_aux (int taille, char A, char B, char C){
    if (taille>0){
        hanoi_aux(taille-1, A, C, B);
        printf("%c -> %c\n", A,B);
        hanoi_aux(taille-1, C, B, A);
    }
    else{
        /*printf("%c -> %c\n", A,B);*/
    }
}
