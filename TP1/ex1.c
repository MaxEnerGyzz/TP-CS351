#include <stdio.h>

int ex1_ver1 () { // Version avec le if...else
    char note;
    printf("Entrez une note:");
    scanf("%c", &note);
    if( note == 'A') {
        printf("Bien A");
    }
    else if( note == 'B') {
        printf("B");
    }
    else if( note == 'C') {
        printf("B");
    }
    else if( note == 'D') {
        printf("B");
    }
    else {
        printf("PAS BIEN !!!");
    }
}

int ex1_ver2 () { // Version avec le case
    char note;
    printf("Entrez une note:");
    scanf("%c", &note);
    
    switch(note) {
        case 'A':
            printf("Bien A");
        break;
        
        case 'B':
            printf("Bien B");
        break;
        
        case 'C':
            printf("Bien C");
        break;
        
        case 'D':
            printf("Bien D");
        break;
        
        case 'E':
            printf("Mauvais E");
        break;
        
        default:
            printf("Valeur incorrecte ! ");
        break;
    }

}

int main()
{
    ex1_ver2();
}
