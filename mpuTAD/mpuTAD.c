/**
 * Arquivo: mpuTAD.c
 * -----------------
 * Este arquivo implementa a interface mpuTAD.h
 */

#import "mpuTAD.h"

struct mpuTAD
{
    signed short int ax;
    signed short int ay;
    signed short int az;
    signed short int rx;
    signed short int ry;
    signed short int rz;
    unsigned short int configuracao_aceleracao;
    unsigned short int configuracao_rotacao;
}

mpuTAD criar_mpuTAD(signed short int ax, signed short int ay, signed short int az,
                    signed short int rx, signed short int ry, signed short int rz);
{
    mpuTAD mpu = calloc(sizeof(struct mpuTAD));
    mpu->ax = ax;
    mpu->ay = ay;
    mpu->az = az;
    mpu->rx = rx;
    mpu->ry = ry;
    mpu->rz = rz;
}

void apagar_mpuTAD(mpuTAD *mpu)
{
    if (*mpu != NULL) {
        free(*mpu);
        *mpu = NULL;
    }
}

void configurar_aceleracao(mpuTAD mpu, unsigned short int sensibilidade_aceleracao)
{
    
}
