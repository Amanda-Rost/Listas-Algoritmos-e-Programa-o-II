#include <stdio.h>
#include <math.h> 

typedef struct coordenada Coordenada;
struct coordenada {
    float x;
    float y;
};

int main() {

    Coordenada p1, p2;
    p1.x = 1.0f;
    p1.y = 2.0f;

    p2.x = 4.0f;
    p2.y = 6.0f;

    // Calcula a distância euclidiana aplicando a fórmula d = √((x₂ - x₁)² + (y₂ - y₁)*) - Teorema de Pitágoras 
    float distancia = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));

    printf("Ponto 1: (%.2f, %.2f)\n", p1.x, p1.y);
    printf("Ponto 2: (%.2f, %.2f)\n", p2.x, p2.y);
    printf("Distancia euclidiana: %.2f\n", distancia);

    return 0;
}