#include <stdlib.h>
#include <stdio.h>
#include "utils_v1.h"
#include "game.h"



 void displayGameboard(int*gameboard, int size){
      if (gameboard == NULL || size <= 0) {
        printf("Erreur : Plateau de jeu invalide.\n");
        return;
    }
    
    printf("Plateau de jeu :\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", gameboard[i]);
    }
    printf("\n");
    
 }

