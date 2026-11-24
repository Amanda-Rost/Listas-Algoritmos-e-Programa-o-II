#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Jogador {
    char nome[50];
    int nivel;
    int exp;
    float hp;
    float mp;
};

void exibirStatus(const struct Jogador *j) {
    printf("Status do Jogador \n");
    printf("Nome: %s\n", j->nome);
    printf("Nivel: %d\n", j->nivel);
    printf("EXP: %d\n", j->exp);
    printf("HP: %.2f\n", j->hp);
    printf("MP: %.2f\n", j->mp);
}

int main(int argc, char *argv[]) {
    struct Jogador heroi;
    strcpy(heroi.nome, "Arthur");
    heroi.nivel = 12;
    heroi.exp = 3450;
    heroi.hp = 250.5f;
    heroi.mp = 120.0f;

    exibirStatus(&heroi);

    return 0;
}

// Resposta pergunta: Usar const struct Jogador *j eh mais eficiente porque passa 
// apenas o endereco de memoria da struct (geralmente 4 ou 8 bytes) para a funcao, 
// evitando copiar todos os campos da estrutura inteira (dezenas de bytes) para a 
// pilha de execucao. Alem disso, o modificador const garante seguranca ao impedir 
// que a funcao altere os dados originais por engano.