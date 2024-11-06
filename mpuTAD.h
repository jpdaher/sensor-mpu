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
 * Uso: criar_mpuTAD();
 * ------------------------------------------
 * Esta função retorna um ponteiro para um mpuTAD, que deve ser armazenado em
 * uma variável.
 * 
 * Se criado, um mpuTAD precisa ser apagado com o procedimento "apagar_mpuTAD"
 * antes do final do programa
 */

mpuTAD criar_mpuTAD();

void apagar_mpuTAD(mpuTAD *mpu);

void configurar_aceleracao(mpuTAD mpu, unsigned short int sensibilidade_aceleracao);

void configurar_rotacao(mpuTAD mpu, unsigned short int sensibilidade_rotacao);

unsigned short int recuperar_configuracao_aceleracao(mpuTAD mpu);

unsigned short int recuperar_configuracao_rotacao(mpuTAD mpu);

void inserir_aceleracao_bruta(mpuTAD mpu, float ax, float ay, float az);

void inserir_rotacao_bruta(mpuTAD mpu, float rx, float ry, float rz);

float aceleracao_bruta_x(mpuTAD mpu);

float aceleracao_bruta_y(mpuTAD mpu);

float aceleracao_bruta_z(mpuTAD mpu);

float rotacao_bruta_x(mpuTAD mpu);

float rotacao_bruta_y(mpuTAD mpu);

float rotacao_bruta_z(mpuTAD mpu);

unsigned short int recuperar_configuracao_aceleracao(mpuTAD mpu);

unsigned short int recuperar_configuracao_rotacao(mpuTAD mpu);

void calcular_aceleracao(mpuTAD mpu);

void calcular_rotacao(mpuTAD mpu);

float aceleracao_final_x(mpuTAD mpu);

float aceleracao_final_y(mpuTAD mpu);

float aceleracao_final_z(mpuTAD mpu);

float rotacao_final_x(mpuTAD mpu);

float rotacao_final_y(mpuTAD mpu);

float rotacao_final_z(mpuTAD mpu);

/* Fim da diretiva: */

#endif
