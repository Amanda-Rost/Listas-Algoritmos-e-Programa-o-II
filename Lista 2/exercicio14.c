#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    float media_final;
};

int melhorAluno(int n, const struct Aluno *turma) {
    if (n <= 0) {
        return -1;
    }

    int indiceMelhor = 0;
    for (int i = 1; i < n; i++) {
        if (turma[i].media_final > turma[indiceMelhor].media_final) {
            indiceMelhor = i;
        }
    }

    return indiceMelhor;
}

int main(int argc, char *argv[]) {
    struct Aluno turma[5];

    strcpy(turma[0].nome, "Ana");
    turma[0].media_final = 8.2f;

    strcpy(turma[1].nome, "Bruno");
    turma[1].media_final = 7.5f;

    strcpy(turma[2].nome, "Carla");
    turma[2].media_final = 9.4f;

    strcpy(turma[3].nome, "Diego");
    turma[3].media_final = 6.8f;

    strcpy(turma[4].nome, "Elena");
    turma[4].media_final = 8.9f;

    int n = sizeof(turma) / sizeof(turma[0]);
    int idx = melhorAluno(n, turma);

    if (idx != -1) {
        printf("Aluno destaque:\n");
        printf("Nome: %s\n", turma[idx].nome);
        printf("Media final: %.2f\n", turma[idx].media_final);
    }

    return 0;
}