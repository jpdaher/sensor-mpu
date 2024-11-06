#include "pilhampuTAD.h"
#include <stdio.h>

int main(void)
{
    pilhampuTAD pilha = criar_pilha();
    if (pilha == NULL)
    {
        printf("Erro na criação da pilha\n");
        return 0;
    }
    
    mpuTAD mpu = criar_mpuTAD();

    if (pilha_vazia(pilha)) printf("Pilha vazia.\n");
    push(pilha, mpu);
    pop(pilha);

    for(int i = 0; i < 101; i++)
    {
        push(pilha, mpu);
    }
    if (pilha_cheia(pilha)) printf("Pilha cheia.\n");

    for(int i = 0; i < 101; i++)
    {
        pop(pilha);
    }
    if(pilha_vazia(pilha)) printf("Pilha vazia.\n");

    apagar_mpuTAD(&mpu);
    apagar_pilha(&pilha);

    return 0;
}
