#include "strings.h"

int myStrlen(char chaine[]){
  int i = 0;
  int loop = 1;
  while(loop){
    if(chaine[i] == '\0'){
      loop = 0;
    }
    i++;
  }
  return(i - 1);
}

void myStrcpy(char chaine_destination[], char chaine_source[]){
  int lenght = myStrlen(chaine_source);
  for(int i = 0; i < lenght; i++){
    chaine_destination[i] = chaine_source[i];
  }
}

void affichagerEnHexadecimal(char *chaine){
  for(int i = 0; i < myStrlen(chaine); i++){
    printf("0x%x ", chaine[i]);
  }
  printf("\n");
}

void affichagerEnDecimal(char *chaine){
  for(int i = 0; i < myStrlen(chaine); i++){
    printf("%d ", chaine[i]);
  }
}

void mettreEnMajuscule(char *chaine){
  for(int i = 0; i < myStrlen(chaine); i++){
    if(chaine[i] > 96 && chaine[i] < 123){
      chaine[i] -= 32;
    }
  }
}

void mettreEnMinuscule(char *chaine){
  for(int i = 0; i < myStrlen(chaine); i++){
    if(chaine[i] > 64 && chaine[i] < 91){
      chaine[i] += 32;
    }
  }
}

void transformerMinMaj(char *chaine){
  for(int i = 0; i < myStrlen(chaine); i++){
    if(chaine[i] > 64 && chaine[i] < 91){
      chaine[i] += 32;
    }
    else if(chaine[i] > 96 && chaine[i] < 123){
      chaine[i] -= 32;
    }
  }
}

void retournerMot(char *chaine){
  int n = myStrlen(chaine) + 1;
  char temp[n ];
  myStrcpy(temp, chaine);
  for(int i = 0; i < n; i ++){
    chaine[i] = temp[n - i -2];
  }
  chaine[n] = '\0';
}

int rechercherCaractereD(char chaine[], char caractere){
  int n = myStrlen(chaine);
  int pos = -1;
  int trouve = 0;
  int i = 0;
  while( i < n && trouve == 0){
    if(trouve == 0 && chaine[i] == caractere ){
      pos = i + 1;
      trouve = 1;
    }
    i++;
  }
  return(pos);
}

int estPalindrome(char *mot, int d, int f){
  int palindrome = 1;
  char mot_test[myStrlen(mot) + 1]; // Permet de ne pas modifier le mot de base, et de vérifier le palindrome sans prendre en compte la casse
  myStrcpy(mot_test, mot);
  mettreEnMinuscule(mot_test);
  for(int i = 0; i < f - d; i++){
    //printf("Comparaison de %c et %c\n", mot_test[i +d], mot_test[f - i - 1]);
    if(mot_test[i + d] != mot_test[f- i - 1]){
      palindrome = 0;
    }
  }
  return(palindrome);
}

int comparerChaine(char mot1[], char mot2[]){
  int egalite = 0;
  int n = myStrlen(mot1);

  char mot1_sans_casse[n + 1]; // Les deux mots sans la  casse (Majuscules/Minuscules)
  char mot2_sans_casse[n + 1];
  myStrcpy(mot1_sans_casse, mot1);
  mettreEnMinuscule(mot1_sans_casse);
  myStrcpy(mot2_sans_casse, mot2);
  mettreEnMinuscule(mot2_sans_casse);

  int i = 0;
  while(egalite == 0 && i < n){
    if(mot1_sans_casse[i] != mot2_sans_casse[i] && mot1_sans_casse[i] > mot2_sans_casse[i]){
      egalite++;
    }
    else if(mot1_sans_casse[i] != mot2_sans_casse[i] && mot1_sans_casse[i] < mot2_sans_casse[i]){
      egalite--;
    }
    i++;
  }
  return(egalite);
}

int valeurDecimale(char chaine[]){
  int n = myStrlen(chaine);
  if( n == 0){
    return(0);
  }

  int num; // Chiffre correspondant
  int nombre = 0; // Nombre à rendre
  for(int i = 0; i < n; i++){
    num = chaine[i] - '0';
    nombre += num * pow(10,(n - i -1));
  }
  return(nombre);
}

void intVersChaine(int nombre, char *chaine)
{
    int index = 0;

    int n = nombre < 0 ? -nombre : nombre;
    int neg = nombre < 0 ? 1 : 0;

    while (nombre != 0)
    {
        chaine[index++] = nombre % 10 + '0';
        nombre /= 10;
    }
    if (neg)
        chaine[index++] = '-';

    chaine[index++] = '\0';

    retournerMot(chaine);
}

void testBibliotheque(){

  printf("\nTaille de la chaine <All your base are belong to us !> : %d\n\n", myStrlen("All your base are belong to us !"));

  char str1[100] = {"There's Always A Lighthouse, Always A Man, Always A City..."};
  char str2[100];
  myStrcpy(str2, str1);
  printf("La chaine str2 vaut maintenant: %s\n\n", str2);

  printf("La chaine str2 en hexa vaut: ");
  affichagerEnHexadecimal(str2);
  printf("\nLa chaine str2 en ASCII vaut: ");
  affichagerEnDecimal(str2);

  char str3[15] = {"octarine"};
  printf("\n\nLa chaine %s en majuscule vaut: ", str3);;
  mettreEnMajuscule(str3);
  printf("%s\n", str3);

  char str4[15] = {"P-BODY"};
  printf("\nLa chaine %s en minuscule vaut: ", str4);;
  mettreEnMinuscule(str4);
  printf("%s\n", str4);

  char str5[50] = "THe CaKe iS a liE !";
  printf("\nLa chaine <%s> dont la casse est transformee vaut: ", str5);;
  transformerMinMaj(str5);
  printf("<%s>\n", str5);

  char str6[10] = {"oiseau"};
  char str7[10];
  retournerMot(str6);
  myStrcpy(str7, str6);
  retournerMot(str6);
  printf("\nLa chaine %s retournee donne: %s\n", str6, str7);

  char str8[10] = {"Jeremy"};
  printf("\nPremière position du caractère <e> dans la chaine: <%s>: %d\n", str8, rechercherCaractereD(str8, 'e') );
  printf("Première position du caractère <f> dans la chaine: <%s>: %d\n", str8, rechercherCaractereD(str8, 'f') );

  char str9[10] = {"Kayak"};
  printf("\nEst ce <%s> est un palindrome ? %d\n", str9, estPalindrome(str9, 0, myStrlen(str9)));
  char str10[10] = {"Stregobor"};
  printf("\nEst ce <%s> est un palindrome ? %d\n", str10, estPalindrome(str10, 0, myStrlen(str10)));

  char str11[10] = {"titi"};
  char str12[10] = {"toto"};
  char str13[10] = {"tutu"};
  printf("\nEst ce que <%s> = ou > ou < à <%s> ? %d", str13, str11, comparerChaine(str13, str11));
  printf("\nEst ce que <%s> = ou > ou < à <%s> ? %d", str11, str12, comparerChaine(str11, str12));
  printf("\nEst ce que <%s> = ou > ou < à <%s> ? %d\n", str11, str11, comparerChaine(str11, str11));

  char str14[10] = {"42"};
  printf("\nValeur decimale de la chaine: %d\n", valeurDecimale(str14));

  char str15[10];
  intVersChaine(42, str15);
  printf("\nLa chaine vaut désormais: %s\n", str15);
}
