#include "dessiner.h"

void dessineCarre(int x1, int y1, int taille) {
  int x2, y2 = 0;
  set_red();
  line(x1, y1, x1 + taille /2, y1 - taille / 2);
  set_green();
  line(x1 + taille /2, y1 - taille/2, x1, y1 - taille);
  set_yellow();
  line(x1, y1 - taille, x1 - taille / 2, y1 - taille / 2);
  set_blue();
  line(x1 - taille / 2, y1 - taille / 2, x1, y1);
}

void dessineCarreDiagonale(int x1, int y1, int taille){
  dessineCarre(x1, y1, taille);
  set_black();
  line(x1, y1, x1, y1 - taille);
  line(x1 - taille / 2, y1 - taille / 2, x1 + taille / 2, y1 - taille / 2 );
}

int dessineMosaique(int x1, int y1, int taille, int largeur, int hauteur)
{
    for(int i = x1 + taille / 2 ; i < largeur + x1; i+= taille){
      for(int j = y1  ; j > y1 - hauteur; j-= taille){
        dessineCarre(i, j, taille);
      }
    }
}

void dessineMosaiqueAvecSouris(int taille_carre, int largeur, int hauteur){
  int x, y;
  cliquer_xy(&x, &y);
  dessineMosaique(x, y, taille_carre, largeur, hauteur);
}
