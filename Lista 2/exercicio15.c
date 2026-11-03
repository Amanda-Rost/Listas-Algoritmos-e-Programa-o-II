#include <stdio.h>

struct Produto {
    char nome[30];
    float preco;
};

void aplicarInflacao(int n, struct Produto *catalogo, float taxa) {
    for (struct Produto *p = catalogo; p < catalogo + n; p++) {
        p->preco += p->preco * (taxa / 100.0f);
    }
}

int main() {
    float inflacao = 0.0;
    struct Produto catalogo[] = {
        {"Arroz", 20.00f},
        {"Feijao", 8.50f},
        {"Oleo", 6.00f}
    };
    
    // Calcula o número total de elementos do vetor 
    // (tamanho total em bytes / tamanho do 1º elemento)
    int n = sizeof(catalogo) / sizeof(catalogo[0]);

    printf("Precos originais:\n");
    for (int i = 0; i < n; i++) {
        printf("- %s: R$ %.2f\n", catalogo[i].nome, catalogo[i].preco);
    }

    printf("Digite a porcentagem da inflacao: \n");
    scanf("%f", &inflacao);
    aplicarInflacao(n, catalogo, inflacao);

    printf("\nPrecos com reajuste de %.2f%%:\n");
    for (int i = 0; i < n; i++) {
        printf("- %s: R$ %.2f\n", catalogo[i].nome, catalogo[i].preco);
    }

    return 0;
}

// Resposta pergunta: Fazer `p++` não pula 1 byte, mas sim o tamanho do tipo para o qual ele aponta.