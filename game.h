#ifndef _GAME_H_
#define _GAME_H_


int* initTiles(int nbTiles);
 int* initGameboard(int size);
 int pullTiles (int** allTiles);
 int  putTiles(int pos,int tiles,int**gameboard, int size);
 int calculateScore(int*gameboard, int size);
 void displayGameboard(int*gameboard, int size);



 #endif   // _GAME_
