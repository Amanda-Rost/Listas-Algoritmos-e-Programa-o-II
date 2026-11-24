#include <stdio.h>
#include <stdlib.h>

void substituirErro(int n, float *vetor, float erro, float novoValor) {
    for (float *p = vetor; p < vetor + n; p++) {
        if (*p == erro) {
            *p = novoValor;
        }
    }
}

int main(int argc, char *argv[]) {
    float leituras[] = {12.5f, 14.2f, -1.0f, 15.3f, 10.8f, -1.0f, 11.1f};
    int tam = sizeof(leituras) / sizeof(leituras[0]);

    printf("Leituras originais:\n");
    for (int i = 0; i < tam; i++) {
        printf("%.1f ", leituras[i]);
    }
    printf("\n");

    substituirErro(tam, leituras, -1.0f, 0.0f);

    printf("\nLeituras apos filtragem:\n");
    for (int i = 0; i < tam; i++) {
        printf("%.1f ", leituras[i]);
    }
    printf("\n");

    return 0;
}

// Resposta pergunta: Ao declarar float v[10], o compilador reserva um bloco fixo
// de memoria para 10 floats e o identificador v funciona como um ponteiro constante,
// ou seja, seu endereco base nao pode ser alterado (nao se pode fazer v++ ou v = outro).
// Ja float *u cria apenas uma variavel ponteiro que armazena um endereco de memoria,
// podendo ser reatribuida e movimentada livremente (como u++ ou u = v) para apontar
// para diferentes enderecos ao longo da execucao.