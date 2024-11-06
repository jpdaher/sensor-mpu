#ifndef PILHA_MPU_TAD
#define PILHA_MPU_TAD

#include "mpuTAD.h"

typedef struct st_pilhampuTAD *pilhampuTAD;

pilhampuTAD criar_pilha();

void apagar_pilha(pilhampuTAD *pilha);

int push(pilhampuTAD pilha, mpuTAD mpu);

mpuTAD pop(pilhampuTAD pilha);

int pilha_vazia(pilhampuTAD pilha);

int pilha_cheia(pilhampuTAD pilha);

#endif
