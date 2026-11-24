#include <stdio.h>
#include <stdlib.h>

void ordenarDois(int *a, int*b){
    if (*a > *b){
        int maior = *a;
        *a = *b;
        *b = maior;
    }
}


int main(int argc, char *argv[]) {

    int x = 0;
    int y = 0;


    printf("Informe 1 valor: \n");
    scanf("%d", &x);

    printf("Informe 1 valor: \n");
    scanf("%d", &y);

    ordenarDois(&x, &y);

    printf("Numeros em ordem crescente : %d e %d \n", x, y);

    return 0;

}