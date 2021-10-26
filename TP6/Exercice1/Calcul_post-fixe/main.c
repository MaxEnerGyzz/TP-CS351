#include <stdio.h>
#include <stdlib.h>
#include "listeTableau.h"

int main()
{
    /* d�claration du tableau contenant la liste */
    element maListe[TAILLEMAX];

    creerListeVide(maListe);
    insererElement(42, maListe);
    insererElement(19, maListe);
    insererElement(39, maListe);
    insererElement(456, maListe);
    insererElement(3, maListe);
    afficherListe(maListe);
    supprimerElement(3, maListe);
    afficherListe(maListe);

    return 0;
}
