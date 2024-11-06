#include "pilhampuTAD.h"
#include <stdio.h>

#define TAMANHO 100

struct st_pilhampuTAD
{
    mpuTAD sensores[TAMANHO];
    signed short int topo;
};

pilhampuTAD criar_pilha()
{
    pilhampuTAD p = malloc(sizeof(struct st_pilhampuTAD));
    if (p == NULL)
    {
        printf("Não foi possível criar a pilha\n");
        return NULL;
    }
    p->topo = 0;
    return p;
}

void apagar_pilha(pilhampuTAD *pilha)
{
    if (*pilha != NULL)
    {
        free(*pilha);
        *pilha = NULL;
    }
}

int push(pilhampuTAD pilha, mpuTAD mpu)
{
    if (pilha_cheia(pilha))
    {
        printf("Pilha cheia, não é possível inserir mais sensores\n");
        return 0;
    }
    pilha->sensores[(pilha->topo)++] = mpu;
    return 1;
}

mpuTAD pop(pilhampuTAD pilha)
{
    if (pilha_vazia(pilha))
    {
        printf("Pilha vazia, não é possível retirar mais sensores\n");
        return NULL;
    }
    return pilha->sensores[--(pilha->topo)];
}

int pilha_vazia(pilhampuTAD pilha)
{
    if (pilha->topo == 0) return 1;
    else return 0;
}

int pilha_cheia(pilhampuTAD pilha)
{
    if (pilha->topo == TAMANHO) return 1;
    else return 0;
}
