#include <stdio.h>
#include <stdlib.h>

//Addition des valeurs d'un tableau

int addition(*tableau, int longueur_tableau){
  int addition1 = 0, addition2 = 0, i = 0;
  
  for(i = 0 ; i < longueur_tableau ; i++){
    addition1 = addition2 + tableau[i];
    addition2 = addition1;
  }
  return addition;
}

//Tri des valeurs d'un tableau dans l'ordre croissant

void tri_croissant(*tableau){
  
}
