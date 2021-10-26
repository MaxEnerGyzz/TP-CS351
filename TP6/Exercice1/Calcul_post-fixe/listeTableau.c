/*********************************************************************/
/* Realisation d'une liste chainee dans un tableau                   */
/* ioannis.parissis@grenoble-inp.fr                                  */
/* Sep 2012                                                          */
/*********************************************************************/
#include "listeTableau.h"


int elementLibre(liste l){
  int i = 0;
  int element_libre = -1;
  while( i < TAILLEMAX && element_libre == -1){
    if(l[i].suivant == -1){
      element_libre = i;
    }
    i++;
  }
  return element_libre;
}

void creerListeVide(liste l){
  l[0].valeur = -1;
  l[0].suivant = 0;
  for(int i = 1; i < TAILLEMAX; i++){
    l[i].suivant = -1;
  }
}

void insererElement(int x, liste l){


  int element_actuel = 0;
  int element_suivant = l[0].suivant;
  int dernier_element_trouve = 0;
  int dernier_element;

  while(dernier_element_trouve == 0){ // Determine le dernier element de la liste
    if(element_suivant == 0){
      dernier_element_trouve++;
    }
    else{
      element_actuel = l[element_actuel].suivant;
      element_suivant = l[element_actuel].suivant;
    }
  }

  dernier_element = element_actuel;

  int element_place = 0;
  element_actuel = 0;
  element_suivant = l[0].suivant;
  int nouvel_emplacement;

  while( element_place == 0){
    if(element_actuel == dernier_element){ // Si on se trouve à la fin de la liste
      nouvel_emplacement = elementLibre(l);
      l[dernier_element].suivant = nouvel_emplacement;
      l[nouvel_emplacement].valeur = x;
      l[nouvel_emplacement].suivant = 0;
      element_place++;
    }
    else if(l[element_actuel].valeur < x && l[l[element_actuel].suivant].valeur > x ){ // Si x se trouve entre la valeur actuelle et la prochaine
      nouvel_emplacement = elementLibre(l);
      l[nouvel_emplacement].valeur = x;
      l[nouvel_emplacement].suivant = l[element_actuel].suivant;
      l[element_actuel].suivant = nouvel_emplacement;
      element_place++;
    }
    else{
      element_actuel = l[element_actuel].suivant;
      element_suivant = l[element_actuel].suivant;
    }
  }


}

void supprimerElement(int i, liste l){
  int element_actuel = 0;
  int element_precedent;

  while(element_actuel != i){
    element_precedent = element_actuel;
    element_actuel = l[element_actuel].suivant;
  }
  if(l[element_actuel].suivant == 0){
    l[element_precedent].suivant = 0;
    l[element_actuel].valeur = -1;
    l[element_actuel].suivant = -1;
  }
  else{
    l[element_precedent].suivant = l[element_actuel].suivant;
    l[element_actuel].valeur = -1;
    l[element_actuel].suivant = -1;
  }
}

void afficherListe(liste l){
  int i = 0;
  int temp = 1;
  printf("\n-------------\nLa liste vaut:\n");
  while(temp == 1){
    if(l[i].suivant == 0){
      temp = 0;
    }
    printf("Indice: %d; Valeur: %d\n", i, l[i].valeur);
    i = l[i].suivant;

  }
}
