#include "mpuTAD.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    mpuTAD mpu = criar_mpuTAD();
    
    inserir_aceleracao_bruta(mpu, 14768, 26768, 10768);
    inserir_rotacao_bruta(mpu, 5000, 531, 3853);
    configurar_rotacao(mpu, 500);
    configurar_aceleracao(mpu, 4);
    calcular_aceleracao(mpu);
    calcular_rotacao(mpu);

    printf("Teste de criação MPU:\nAceleração final: %f, %f, %f\nRotação final: %f, %f, %f\n", 
    aceleracao_final_x(mpu), aceleracao_final_y(mpu), aceleracao_final_z(mpu),
    rotacao_final_x(mpu), rotacao_final_y(mpu), rotacao_final_z(mpu));

    apagar_mpuTAD(&mpu);
    return 0;
}
