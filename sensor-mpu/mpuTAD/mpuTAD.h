/**
 * Arquivo: mpuTAD.h
 * Aluno  : João Pedro Daher de Souza Bernardo
 * Turma  : CC4M
 * -----------------------------------------
 * Esta interface especifica os comportamentos necessários para o funcionamen-
 * to e uso de um sensor MPU.
 */

/* Include guards: */

#ifndef MPUTAD_H
#define MPUTAD_H

/* Includes: */

#include <stdlib.h>
#include <math.h>

/**
 * TIPO DE DADO: mpuTAD
 * --------------------
 * Este tipo de dado armazena informações e comportamentos referentes a um
 * sensor MPU-6050, um sensor de movimento utilizado em projetos para Arduino.
 */

typedef struct st_mpuTAD *mpuTAD;

/**
 * FUNÇÃO: criar_mpuTAD
 * Uso: criar_mpuTAD(ax, ay, az, rx, ry, rz);
 * ------------------------------------------
 * Esta função recebe seis valores inteiros, ax, ay, az, rx, ry e rz, que
 * representam, respectivamente, os valores brutos de aceleração nos eixos x,
 * y e z, e de rotação nos eixos x, y e z de um sensor MPU, e retorna um
 * ponteiro para um mpuTAD.
 * 
 * Se criado, um mpuTAD precisa ser apagado com o procedimento "apagar_mpuTAD"
 * antes do final do programa
 */

mpuTAD criar_mpuTAD(signed short int ax, signed short int ay, signed short int az
                    signed short int rx, signed short int ry, signed short int rz);

void apagar_mpuTAD(mpuTAD *mpu);

void configurar_aceleracao(mpuTAD mpu, unsigned short int sensibilidade_aceleracao);

void configurar_rotacao(mpuTAD mpu, unsigned short int sensibilidade_rotacao);

unsigned short int recuperar_configuracao_aceleracao(mpuTAD mpu);

unsigned short int recuperar_configuracao_rotacao(mpuTAD mpu);

void inserir_aceleracao_bruta(mpuTAD mpu, signed short int ax, signed short int ay,
                              signed short int az);

void inserir_rotacao_bruta(mpuTAD mpu, signed short int rx, signed short int ry,
                           signed short int rz);

signed short int recuperar_aceleracao_bruta(mpuTAD mpu);

signed short int recuperar_rotacao_bruta(mpuTAD mpu);

signed short int recuperar_aceleracao_final(mpuTAD mpu);

signed short int recuperar_rotacao_final(mpuTAD mpu);


/* Fim da diretiva: */

#endif
