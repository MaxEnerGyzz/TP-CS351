#include "pgcd.h"

int pgcd(int a, int b) {
    int pgcd;
    int r = 1;
    if(b == 0) {
        return(0);
    }
    else {
        while(r != 0){
          #ifdef MISEAUPOINT // Si MISEAUPOINT a été défini
            printf("\nb vaut: %d", b);
          #endif // FIn du ifdef
            r = a % b;
            if( r != 0) {
                a = b;
                b = r;
            }
        }
        return(b);
    }
}
