#ifndef _IPC_H_
#define _IPC_H_



 void createPlayers(key_t key, size_t size, int shmflg);
 void destroyShm(int shm_id);
 void destroySem(int sem_id);
 int initSemaphores(key_t key, int nsems, int perm, int val);
 Player* readPlayers(int shm_id);


 #endif   // _IPC_

