#include <stdio.h>
#include <stdlib.h>

#define VERMELHO     "\x1b[31m"
#define AZUL         "\x1b[34m"
#define VERDE        "\x1b[32m"
#define RESET        "\x1b[0m"


int main()
{
    int quantidadeElementos =0;
    printf(VERMELHO"Olá, seja bem-vindo a sequencia de Fibonacci!\n\n\n\n"RESET);
    printf(VERDE"Digite um numero para iniciar a sequencia:" VERDE"\n\n"RESET);
    scanf("%d", &quantidadeElementos);

    int numeroAtual = 1;
    printf(VERDE"\n\n\nSequencia gerada: \n\n"RESET);
    printf("%d  ", numeroAtual);

    int numeroAnterior = 0;
    int i = 0;
    int temporario = 0;
    for(i = 1; i < quantidadeElementos; i++){
        temporario = numeroAtual;
        numeroAtual = numeroAtual + numeroAnterior;
        numeroAnterior = temporario;
        printf("%d  ", numeroAtual);
    }
    printf(VERMELHO"\n\n\n\n\nObrigado pela participacao. \n\n\n\n\n\n\n"RESET);
    return 0;
}
