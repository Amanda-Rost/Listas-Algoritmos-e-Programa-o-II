#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    int hp = 100;
    int *ptr_hp = &hp;
    
    printf("Imprimindo valor do hp atraves da propria variavel: %d \n", hp);
    printf("Imprimindo valor do hp atraves do ponteiro: %d \n", *ptr_hp);

    hp +=75;
    printf("Imprimindo valor atualizado do hp atraves do ponteiro: %d \n", *ptr_hp);

    *ptr_hp -=20;
    printf("Imprimindo valor atualizado do hp atraves da propria variavel: %d \n", hp);
   
    return 0;
}

// Resposta pergunta: Como o ponteiro tem o endereço da variavel hp quando pedimos 
// pra alterar o valor atraves dele ele altera o valor nesse endereço de memorial 
// que ele tem armazenado