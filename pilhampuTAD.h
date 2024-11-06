/**
 * Arquivo: pilhampuTAD.h
 * Aluno  : João Pedro Daher de Souza Bernardo
 * Turma  : CC4M
 * -----------------------------------------
 * Esta interface especifica os comportamentos necessários para o funcionamen-
 * to e uso de uma pilha de elementos mpuTAD.
 */

/* Include guards: */
#ifndef PILHA_MPU_TAD
#define PILHA_MPU_TAD

/* Includes: */
#include "mpuTAD.h"

/**
 * TIPO DE DADO: pilhampuTAD
 * -------------------------
 * Este tipo de dado representa uma pilha de elementos mpuTAD, permitindo o
 * armazenamento e manipulação de múltiplos sensores MPU-6050.
 */
typedef struct st_pilhampuTAD *pilhampuTAD;

/**
 * FUNÇÃO: criar_pilha
 * Uso: pilhampuTAD pilha = criar_pilha();
 * -----------------------------------------
 * Cria e inicializa uma nova pilha para armazenar objetos mpuTAD.
 * 
 * Retorna: um ponteiro para a pilha criada.
 */
pilhampuTAD criar_pilha();

/**
 * PROCEDIMENTO: apagar_pilha
 * Uso: apagar_pilha(&pilha);
 * -----------------------------------------
 * Libera a memória alocada para a pilha, apagando todos os elementos contidos.
 * 
 * Parâmetros:
 * - pilha: um ponteiro para o ponteiro da pilha a ser apagada.
 */
void apagar_pilha(pilhampuTAD *pilha);

/**
 * FUNÇÃO: push
 * Uso: int status = push(pilha, mpu);
 * -----------------------------------------
 * Insere um novo elemento mpuTAD no topo da pilha.
 * 
 * Parâmetros:
 * - pilha: a pilha onde o elemento será inserido.
 * - mpu: o elemento mpuTAD a ser adicionado na pilha.
 * 
 * Retorna: um valor inteiro que indica sucesso (1) ou falha (0) na operação.
 */
int push(pilhampuTAD pilha, mpuTAD mpu);

/**
 * FUNÇÃO: pop
 * Uso: mpuTAD mpu = pop(pilha);
 * -----------------------------------------
 * Remove e retorna o elemento no topo da pilha.
 * 
 * Parâmetros:
 * - pilha: a pilha de onde o elemento será removido.
 * 
 * Retorna: o elemento mpuTAD removido do topo da pilha ou NULL se a pilha estiver vazia.
 */
mpuTAD pop(pilhampuTAD pilha);

/**
 * FUNÇÃO: pilha_vazia
 * Uso: int vazia = pilha_vazia(pilha);
 * -----------------------------------------
 * Verifica se a pilha está vazia.
 * 
 * Parâmetros:
 * - pilha: a pilha a ser verificada.
 * 
 * Retorna: 1 se a pilha estiver vazia, 0 caso contrário.
 */
int pilha_vazia(pilhampuTAD pilha);

/**
 * FUNÇÃO: pilha_cheia
 * Uso: int cheia = pilha_cheia(pilha);
 * -----------------------------------------
 * Verifica se a pilha está cheia.
 * 
 * Parâmetros:
 * - pilha: a pilha a ser verificada.
 * 
 * Retorna: 1 se a pilha estiver cheia, 0 caso contrário.
 */
int pilha_cheia(pilhampuTAD pilha);

/* Fim da diretiva: */
#endif
