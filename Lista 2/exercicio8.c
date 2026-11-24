#include <stdio.h>

int contarVogais(char *texto) {
    int contador = 0;
    char *p = texto;

    while (*p != '\0') {
        if (*p == 'a' || *p == 'A' ||
            *p == 'e' || *p == 'E' ||
            *p == 'i' || *p == 'I' ||
            *p == 'o' || *p == 'O' ||
            *p == 'u' || *p == 'U') {
            contador++;
        }
        p++;
    }

    return contador;
}

int main() {
    char texto[] = "Linguagem C";

    printf("Texto original:\n");
    printf("%s\n", texto);

    int totalVogais = contarVogais(texto);

    printf("\nQuantidade de vogais encontradas: %d\n", totalVogais);

    return 0;
}