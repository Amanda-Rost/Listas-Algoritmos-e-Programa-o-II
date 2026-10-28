#include <stdio.h>
#include <stdlib.h>

void converteTempo(int total_segundos, int *horas,int *minutos, int *segundos){

    *minutos = total_segundos/60;
    *segundos = total_segundos % 60;
    if (*minutos % 60) {
        *horas = *minutos / 60;
        *minutos = *minutos % 60;
    } else {
        *horas = *minutos / 60;
        *minutos = *minutos % 60;
    }    
}

int main(int argc, char *argv[]) {

    int h = 0, mim = 0, s = 0, total = 0;
    int *horas = &h;
    int *minutos = &mim;
    int *segundos =&s;
    
    printf("Digite o valor total de segundos: \n");
    scanf("%d", &total);
    
    converteTempo(total, horas, minutos, segundos);

    printf("O total que voce digitou é o equivalente a %02d:%02d:%02d \n", *horas, *minutos, *segundos);
   
    return 0;
}