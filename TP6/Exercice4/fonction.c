#include "fonction.h"

void triangle(int rang){
    int index = 0;
    int ligne = pow(2,rang);
    for(index=0; index<ligne; index++){
        triangle_rec(rang, index);
        printf("\n");
    }
}


void triangle_rec(int rang, int ligne){
    int index = 0;
    int espace = pow(2,rang-1);
    
    if(rang== 1){
        if(ligne==0){
            printf("0 ");
        }
        else{
            printf("00");
        }
    }
    else{
        if(ligne<espace){
            triangle_rec(rang-1,ligne%espace);
            for(index=0;index<espace;index++) {
                printf(" ");
            }
        }
        else{
            triangle_rec(rang-1,ligne%espace);
            triangle_rec(rang-1,ligne%espace);
        }
    }
}

