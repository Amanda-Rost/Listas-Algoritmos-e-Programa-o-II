#include <stdio.h>

void aumentarBrilho(int n, int *pixels, int valor) {
    for (int i = 0; i < n; i++) {
        pixels[i] += valor;
        if (pixels[i] > 255) {
            pixels[i] = 255;
        }
    }
}

int main() {
    int imagem[] = {50, 120, 200, 240, 250, 255};
    int incremento = 30;
    // Calcula o número total de elementos do vetor 
    // (tamanho total em bytes / tamanho do 1º elemento)
    int n = sizeof(imagem) / sizeof(imagem[0]);
    
    printf("Pixels originais:\n");
    for (int i = 0; i < n; i++) {
        printf("%3d ", imagem[i]);
    }
    printf("\n");

    aumentarBrilho(n, imagem, incremento);

    printf("\nPixels apos aumento de brilho (+%d):\n", incremento);
    for (int i = 0; i < n; i++) {
        printf("%3d ", imagem[i]);
    }
    printf("\n");

    return 0;
}