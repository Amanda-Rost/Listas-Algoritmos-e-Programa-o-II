#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int historico[5] = {10, 20, 30, 40, 50};

    for (int *p = &historico[4]; p >= &historico[0]; p--) {
        // (p - historico) calcula o índice com base na distância dos ponteiros
        // int indice = p - historico;
        
        printf("Valor: %d\n", *p);
    }
    return 0;
}