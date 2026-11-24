#include <stdio.h>

float calcularMedia(int n, const float *notas) {
    // tirar comentario para testar o erro de compilacao
    // notas[0] = 10.0f;

    float soma = 0.0f;
    for (int i = 0; i < n; i++) {
        soma += notas[i];
    }

    if (n <= 0) {
        return 0.0f;
    }

    return soma / n;
}

int main(int argc, char *argv[]) {
    float notas[] = {7.5f, 8.0f, 6.5f, 9.0f};
    int n = sizeof(notas) / sizeof(notas[0]);

    printf("Notas registradas:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", notas[i]);
    }
    printf("\n");

    float media = calcularMedia(n, notas);

    printf("\nA media das notas eh %.2f\n", media);

    return 0;
}