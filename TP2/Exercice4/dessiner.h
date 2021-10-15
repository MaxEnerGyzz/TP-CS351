#ifndef __DESSINER_H__
#define __DESSINER_H__
#include <stdio.h>
#include <stdlib.h>

void dessineCarre(int x1, int y1, int taille);
void dessineCarreDiagonale(int x1, int y1, int taille);
void dessinerMosaique(int taille_carre, int x, int y, int largeur, int hauteur);
void dessinerMosaiqueAvecSouris(int taille_carre, int largeur, int hauteur);

#endif
