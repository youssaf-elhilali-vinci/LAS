#include "player.h"
#ifndef _MESSAGES_H_
#define _MESSAGES_H_

#define SERVER_PORT 9501
#define SERVER_IP "127.0.0.1" /* localhost */
#define MAX_PSEUDO 256

typedef enum
{
    INSCRIPTION_REQUEST = 10,
    INSCRIPTION_OK = 11,
    INSCRIPTION_KO = 12
} Code;

typedef struct
{

    bool tilesPut;
    char messageText[256];
    Player messagePlayer;
    int messageInt;
    int code;
} StrucMessage;

#endif // _MESSAGE_
