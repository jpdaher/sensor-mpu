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
 * Uso: mpuTAD mpu = criar_mpuTAD();
 * ------------------------------------------
 * Esta função retorna um ponteiro para um mpuTAD, que deve ser armazenado em
 * uma variável.
 * 
 * Se criado, um mpuTAD precisa ser apagado com o procedimento "apagar_mpuTAD"
 * antes do final do programa.
 */
mpuTAD criar_mpuTAD();

/**
 * PROCEDIMENTO: apagar_mpuTAD
 * Uso: apagar_mpuTAD(&mpu);
 * ---------------------------
 * Apaga o mpuTAD alocado, liberando os recursos de memória.
 * 
 * Parâmetros:
 * - mpu: um ponteiro para o ponteiro mpuTAD a ser apagado.
 */
void apagar_mpuTAD(mpuTAD *mpu);

/**
 * PROCEDIMENTO: configurar_aceleracao
 * Uso: configurar_aceleracao(mpu, sensibilidade);
 * -----------------------------------------------
 * Define a sensibilidade do acelerômetro.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD no qual a sensibilidade será configurada.
 * - sensibilidade_aceleracao: valor da sensibilidade do acelerômetro.
 */
void configurar_aceleracao(mpuTAD mpu, unsigned short int sensibilidade_aceleracao);

/**
 * PROCEDIMENTO: configurar_rotacao
 * Uso: configurar_rotacao(mpu, sensibilidade);
 * --------------------------------------------
 * Define a sensibilidade do giroscópio.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD no qual a sensibilidade será configurada.
 * - sensibilidade_rotacao: valor da sensibilidade do giroscópio.
 */
void configurar_rotacao(mpuTAD mpu, unsigned short int sensibilidade_rotacao);

/**
 * FUNÇÃO: recuperar_configuracao_aceleracao
 * Uso: unsigned short int config = recuperar_configuracao_aceleracao(mpu);
 * ------------------------------------------------------------------------
 * Retorna a configuração de sensibilidade do acelerômetro.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD de onde a configuração será recuperada.
 */
unsigned short int recuperar_configuracao_aceleracao(mpuTAD mpu);

/**
 * FUNÇÃO: recuperar_configuracao_rotacao
 * Uso: unsigned short int config = recuperar_configuracao_rotacao(mpu);
 * ---------------------------------------------------------------------
 * Retorna a configuração de sensibilidade do giroscópio.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD de onde a configuração será recuperada.
 */
unsigned short int recuperar_configuracao_rotacao(mpuTAD mpu);

/**
 * PROCEDIMENTO: inserir_aceleracao_bruta
 * Uso: inserir_aceleracao_bruta(mpu, ax, ay, az);
 * -----------------------------------------------
 * Insere valores brutos de aceleração nos eixos X, Y e Z.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD onde os valores serão inseridos.
 * - ax, ay, az: valores de aceleração nos eixos X, Y e Z.
 */
void inserir_aceleracao_bruta(mpuTAD mpu, float ax, float ay, float az);

/**
 * PROCEDIMENTO: inserir_rotacao_bruta
 * Uso: inserir_rotacao_bruta(mpu, rx, ry, rz);
 * --------------------------------------------
 * Insere valores brutos de rotação nos eixos X, Y e Z.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD onde os valores serão inseridos.
 * - rx, ry, rz: valores de rotação nos eixos X, Y e Z.
 */
void inserir_rotacao_bruta(mpuTAD mpu, float rx, float ry, float rz);

/**
 * FUNÇÃO: aceleracao_bruta_x
 * Uso: float ax = aceleracao_bruta_x(mpu);
 * ----------------------------------------
 * Retorna o valor bruto da aceleração no eixo X.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD de onde o valor será recuperado.
 */
float aceleracao_bruta_x(mpuTAD mpu);

/**
 * FUNÇÃO: aceleracao_bruta_y
 * Uso: float ay = aceleracao_bruta_y(mpu);
 * ----------------------------------------
 * Retorna o valor bruto da aceleração no eixo Y.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD de onde o valor será recuperado.
 */
float aceleracao_bruta_y(mpuTAD mpu);

/**
 * FUNÇÃO: aceleracao_bruta_z
 * Uso: float az = aceleracao_bruta_z(mpu);
 * ----------------------------------------
 * Retorna o valor bruto da aceleração no eixo Z.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD de onde o valor será recuperado.
 */
float aceleracao_bruta_z(mpuTAD mpu);

/**
 * FUNÇÃO: rotacao_bruta_x
 * Uso: float rx = rotacao_bruta_x(mpu);
 * -------------------------------------
 * Retorna o valor bruto da rotação no eixo X.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD de onde o valor será recuperado.
 */
float rotacao_bruta_x(mpuTAD mpu);

/**
 * FUNÇÃO: rotacao_bruta_y
 * Uso: float ry = rotacao_bruta_y(mpu);
 * -------------------------------------
 * Retorna o valor bruto da rotação no eixo Y.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD de onde o valor será recuperado.
 */
float rotacao_bruta_y(mpuTAD mpu);

/**
 * FUNÇÃO: rotacao_bruta_z
 * Uso: float rz = rotacao_bruta_z(mpu);
 * -------------------------------------
 * Retorna o valor bruto da rotação no eixo Z.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD de onde o valor será recuperado.
 */
float rotacao_bruta_z(mpuTAD mpu);

/**
 * PROCEDIMENTO: calcular_aceleracao
 * Uso: calcular_aceleracao(mpu);
 * ---------------------------------
 * Corrige o valor bruto de aceleração de acordo com a configuração de sensibilidade
 * para fornecer os valores finais.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD onde os cálculos serão realizados.
 */
void calcular_aceleracao(mpuTAD mpu);

/**
 * PROCEDIMENTO: calcular_rotacao
 * Uso: calcular_rotacao(mpu);
 * ------------------------------
 * Corrige o valor bruto de rotação de acordo com a configuração de sensibilidade
 * para fornecer os valores finais.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD onde os cálculos serão realizados.
 */
void calcular_rotacao(mpuTAD mpu);

/**
 * FUNÇÃO: aceleracao_final_x
 * Uso: float ax_final = aceleracao_final_x(mpu);
 * ----------------------------------------------
 * Retorna o valor final da aceleração no eixo X após os cálculos.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD de onde o valor será recuperado.
 */
float aceleracao_final_x(mpuTAD mpu);

/**
 * FUNÇÃO: aceleracao_final_y
 * Uso: float ay_final = aceleracao_final_y(mpu);
 * ----------------------------------------------
 * Retorna o valor final da aceleração no eixo Y após os cálculos.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD de onde o valor será recuperado.
 */
float aceleracao_final_y(mpuTAD mpu);

/**
 * FUNÇÃO: aceleracao_final_z
 * Uso: float az_final = aceleracao_final_z(mpu);
 * ----------------------------------------------
 * Retorna o valor final da aceleração no eixo Z após os cálculos.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD de onde o valor será recuperado.
 */
float aceleracao_final_z(mpuTAD mpu);

/**
 * FUNÇÃO: rotacao_final_x
 * Uso: float rx_final = rotacao_final_x(mpu);
 * -------------------------------------------
 * Retorna o valor final da rotação no eixo X após os cálculos.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD de onde o valor será recuperado.
 */
float rotacao_final_x(mpuTAD mpu);

/**
 * FUNÇÃO: rotacao_final_y
 * Uso: float ry_final = rotacao_final_y(mpu);
 * -------------------------------------------
 * Retorna o valor final da rotação no eixo Y após os cálculos.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD de onde o valor será recuperado.
 */
float rotacao_final_y(mpuTAD mpu);

/**
 * FUNÇÃO: rotacao_final_z
 * Uso: float rz_final = rotacao_final_z(mpu);
 * -------------------------------------------
 * Retorna o valor final da rotação no eixo Z após os cálculos.
 * 
 * Parâmetros:
 * - mpu: o mpuTAD de onde o valor será recuperado.
 */
float rotacao_final_z(mpuTAD mpu);

/* Fim da diretiva: */

#endif
