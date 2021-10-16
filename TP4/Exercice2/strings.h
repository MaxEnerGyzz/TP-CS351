#include <stdio.h>
#include <math.h>

int myStrlen(char chaine[]);
void myStrcpy(char chaine_destination[], char chaine_source[]);
void affichagerEnHexadecimal(char *chaine);
void affichagerEnDecimal(char *chaine);
void mettreEnMajuscule(char *chaine);
void mettreEnMinuscule(char *chaine);
void transformerMinMaj(char *chaine);
void retournerMot(char *chaine);
int rechercherCaractereD(char chaine[], char caractere);
int estPalindrome(char *mot, int d, int f);
int comparerChaine(char mot1[], char mot2[]);
int valeurDecimale(char chaine[]);
void intVersChaine(int nb, char *chaine);
void testBibliotheque();
