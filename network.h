#include "player.h"
#ifndef _NETWORK_H_
#define _NETWORK_H_

int initSocketCustomer(int port);
int initSocketServer(int port);
void disconnect_players(Player* tablePlayers, int nbPlayers)  ;


 #endif   // _NETWORK_
