
#include <stdio.h>
#include <stdlib.h>
#include "pile.h"
// Expression utilisée pour les tests: 42+5x67-/

int main()
{
  char expression[N];
  printf("Entrez une expression:");
  scanf("%s", expression);
  printf("La valeur de l'expression vaut: %d\n", valeurExpression(expression));
  return 0;
}

int valeurExpression(char *expression){
  int i = 0;
  pileInt pile = creerPile();
  int nb_elements_empiles = 0;
  int valeur_expression;
  int operande1, operande2;

  while(expression[i] != '\0'){
    if( expression[i] > 47 && expression[i] < 58){ // Si la valeur actuelle est un nombre
      empiler(pile, expression[i] - 48);
      nb_elements_empiles++;
    }
    else{
      operande1 = depiler(pile);
      operande2 = depiler(pile);
      if(expression[i] == '+'){
        valeur_expression = operande1 + operande2;
        printf("%d + %d\n", operande1, operande2);
      }
      else if(expression[i] == '-'){
        valeur_expression = operande2 - operande1;
        printf("%d - %d\n", operande2, operande1);
      }
      else if(expression[i] == 'x'){
        valeur_expression = operande2 * operande1;
        printf("%d * %d\n", operande1, operande2);
      }
      else if(expression[i] == '/'){
        valeur_expression = operande2 / operande1;
        printf("%d / %d\n", operande2, operande1);
      }
      empiler(pile, valeur_expression);
    }
    i++;
  }
  return valeur_expression;
}
