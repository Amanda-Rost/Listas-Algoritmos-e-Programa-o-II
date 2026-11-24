#include <stdio.h>
#include <stdlib.h>

int main() {

    float saldo = 500.50;
    int *p = (int*)&saldo;

    printf("Saldo : %.2f", *p);
    
    // o valor impresso não é 500;
    // Gera um número inesperado porque float e 
    // int utilizam sistemas binários diferentes.

    return 0;
}