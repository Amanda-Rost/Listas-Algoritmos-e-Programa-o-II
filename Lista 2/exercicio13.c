#include <stdio.h>
#include <string.h>

typedef struct Veiculo Veiculo;

struct Veiculo { 
    char matricula[10]; 
    int ano; 
    float quilometragem; 
};

void registarViagem(struct Veiculo *v, float distancia) {
    v->quilometragem += distancia;
}

int main(int argc, char *argv[]) {
    float dist = 0;
    Veiculo polo;
    polo.ano = 2015;
    strcpy(polo.matricula, "12345"); //atribui texto
    polo.quilometragem = 1500.4f;

    printf("A quilometragem do veiculo esta em %.2f \n", polo.quilometragem);

    printf("Digite a distancia da viagem: \n");
    scanf("%f", &dist);

    registarViagem(&polo, dist);

    printf("\nA quilometragem do veiculo depois da viagem eh %.2f", polo.quilometragem);

    return 0;
}