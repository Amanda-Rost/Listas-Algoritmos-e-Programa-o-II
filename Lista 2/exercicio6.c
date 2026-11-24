#include <stdio.h>
#include <stdlib.h>

void substituirErro(int n, float *vetor, float erro, float novoValor){
    for(float *p = vetor; p < vetor + n ; p++){
        if(*p == erro ){
            *p = novoValor;
        }
    }
}

int main() {
    float leituras[] = {12.5, 14.2, -1.0, 15.3, 10.8, -1.0, 11.1};
    int tam = 7;

    substituirErro(tam, leituras, -1.0 , 0.0);

        for (int i = 0; i < tam; i++) {
        printf("%.1f ", leituras[i]);
    }
    printf("\n");


    return 0;
}