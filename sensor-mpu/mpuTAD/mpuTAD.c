/**
 * Arquivo: mpuTAD.c
 * -----------------
 * Este arquivo implementa a interface mpuTAD.h
 */

#import "mpuTAD.h"

struct st_mpuTAD
{
    signed short int aceleracao[3];
    signed short int rotacao[3];
    unsigned short int sensibilidade_aceleracao;
    unsigned short int sensibilidade_rotacao;
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

void inserir_aceleracao_bruta(mpuTAD mpu, signed short int ax, signed short int ay,
                              signed short int az)
{
    mpu->aceleracao[0] = ax;
    mpu->aceleracao[1] = ay;
    mpu->aceleracao[2] = az;
}

void inserir_rotacao_bruta(mpuTAD mpu, signed short int rx, signed short int ry,
                           signed short int rz)
{
    mpu->rotacao[0] = rx;
    mpu->rotacao[1] = ry;
    mpu->rotacao[2] = rz;
}

signed short int recuperar_aceleracao_bruta(mpuTAD mpu)
{
    return mpu->aceleracao;
}

signed short int recuperar_rotacao_bruta(mpuTAD mpu)
{
    return mpu->rotacao;
}

signed short int recuperar_rotacao_bruta(mpuTAD mpu);

void configurar_aceleracao(mpuTAD mpu, unsigned short int sensibilidade_aceleracao)
{
    mpu->sensibilidade_aceleracao = sensibilidade_aceleracao;
}

void configurar_rotacao(mpuTAD mpu, unsigned short int sensibilidade_rotacao)
{
    mpu->sensibilidade_rotacao = sensibilidade_rotacao;
}

