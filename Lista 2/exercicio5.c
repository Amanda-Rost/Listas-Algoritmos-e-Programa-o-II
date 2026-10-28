#include <stdio.h>
#include <stdlib.h>

int realizarSaque(float *saldo, float valor) {
    if (valor > *saldo) {
        return 0;
    } else {
        *saldo -=valor;
        return 1;
    }
}
int main(int argc, char *argv[]) {

    float s= 0, saque = 0;
    int resp = 0;
    float *saldo = &s;

    printf("Digite o valor total do seu saldo: \n");
    scanf("%f", &s);
    
    printf("Digite o valor do seu saque: \n");
    scanf("%f", &saque);

    resp = realizarSaque(saldo, saque);

    if (resp) {
        printf("Saque realizado com sucesso\n");
    } else {
        printf("FALHA ao realizar saque\n");
    }
   
    return 0;
}