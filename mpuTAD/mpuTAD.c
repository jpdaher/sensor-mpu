/**
 * Arquivo: mpuTAD.c
 * -----------------
 * Este arquivo implementa a interface mpuTAD.h
 */

#import "mpuTAD.h"

struct st_mpuTAD
{
    float ax;
    float ay;
    float az;
    float rx;
    float ry;
    float rz;
    unsigned short int sensibilidade_aceleracao;
    unsigned short int sensibilidade_rotacao;
    float ax_final;
    float ay_final;
    float az_final;
    float rx_final;
    float ry_final;
    float rz_final;
}

mpuTAD criar_mpuTAD();
{
    mpuTAD mpu = calloc(sizeof(struct mpuTAD));
    
    return mpu;
}

void apagar_mpuTAD(mpuTAD *mpu)
{
    if (*mpu != NULL) {
        free(*mpu);
        *mpu = NULL;
    }
}

void inserir_aceleracao_bruta(mpuTAD mpu, float ax, float ay, float az)
{
    mpu->ax = ax;
    mpu->ay = ay;
    mpu->az = az;
}

void inserir_rotacao_bruta(mpuTAD mpu, float rx, float ry, float rz)
{
    mpu->rx = rx;
    mpu->ry = ry;
    mpu->rz = rz;
}

float aceleracao_bruta_x(mpuTAD mpu)
{
    return mpu->ax;
}

float acelecacao_bruta_y(mpuTAD mpu)
{
    return mpu->ay;
}

float aceleracao_bruta_z(mpuTAD mpu)
{
    return mpu->az;
}

float rotacao_bruta_x(mpuTAD mpu)
{
    return mpu->rx;
}

float rotacao_bruta_y(mpuTAD mpu)
{
    return mpu->ry;
}

float rotacao_bruta_z(mpuTAD mpu)
{
    return mpu->rz;
}

void configurar_aceleracao(mpuTAD mpu, unsigned short int sensibilidade_aceleracao)
{
    mpu->sensibilidade_aceleracao = sensibilidade_aceleracao;
}

void configurar_rotacao(mpuTAD mpu, unsigned short int sensibilidade_rotacao)
{
    mpu->sensibilidade_rotacao = sensibilidade_rotacao;
}

void calcular_aceleracao(mpuTAD mpu)
{
   signed short int fator_escala;
   if (mpu->sensibilidade_aceleracao == 2 || mpu->sensibilidade_aceleracao == -2)
   fator_escala = 16384;
   else if (mpu->sensibilidade_aceleracao == 4 || mpu->sensibilidade_aceleracao == -4)
   fator_escala = 8192;
   else if (mpu->sensibilidade_aceleracao == 8 || mpu->sensibilidade_aceleracao == -8)
   fator_escala = 4096;
   else if (mpu->sensibilidade_aceleracao == 16 || mpu->sensibilidade_aceleracao == -16)
   fator_escala = 2048;

   mpu->ax_final = aceleracao_bruta_x(mpu) / fator_escala;
   mpu->ay_final = aceleracao_bruta_y(mpu) / fator_escala;
   mpu->az_final = aceleracao_bruta_z(mpu) / fator_escala;
}

void calcular_rotacao(mpuTAD mpu)
{
   float fator_escala;
   if (mpu->sensibilidade_rotacao == 250 || mpu->sensibilidade_rotacao == -250)
   fator_escala = 131.0;
   else if (mpu->sensibilidade_rotacao == 500 || mpu->sensibilidade_rotacao == -500)
   fator_escala = 65.5;
   else if (mpu->sensibilidade_rotacao == 1000 || mpu->sensibilidade_rotacao == -1000)
   fator_escala = 32.8;
   else if (mpu->sensibilidade_rotacao == 2000 || mpu->sensibilidade_rotacao == -2000)
   fator_escala = 16.4;

   mpu->rx_final = rotacao_bruta_x(mpu) / fator_escala;
   mpu->ry_final = rotacao_bruta_y(mpu) / fator_escala;
   mpu->rz_final = rotacao_bruta_z(mpu) / fator_escala; 
}

float aceleracao_final_x(mpuTAD mpu)
{
    return mpu->ax;
}

float acelecacao_final_y(mpuTAD mpu)
{
    return mpu->ay;
}

float aceleracao_final_z(mpuTAD mpu)
{
    return mpu->az;
}

float rotacao_final_x(mpuTAD mpu)
{
    return mpu->rx;
}

float rotacao_final_y(mpuTAD mpu)
{
    return mpu->ry;
}

float rotacao_final_z(mpuTAD mpu)
{
    return mpu->rz;
}
