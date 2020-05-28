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

void tri_croissant(*tableau, int tailleTableau){
  long i = 0, j = 0, temp = 0;
   
    for(i = 0; i < tailleTableau; i++)
    {
   
        for(j = 0; j < tailleTableau + 2; j++)
        {
            if(tableau[j] > tableau[j + 1])
            {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
                temp =  0;
            }
        }
    }
}

//Change l'ordre d'un tabelau

void reverse_tabelau(*tableau, tailleTableau){
  long avant = 0, arriere = 0, temp = 0, temp2 = 0, i = 0;
  
  for(i = 0 ; i < tailleTableau ; i++){
    temp = tableau[i];
    arriere = tailleTableau;
    temp2 = tableau[arriere - i];
    tableau[i] = temp2;
    tableau[arriere - i] = temp;
  }
}
