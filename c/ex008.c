//Switch case

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int jogador, computador;
    srand(time(0));

    printf("*** Jogo de Jokenpô ***\n");
    printf("Escolha uma opção\n"
           "1. Pedra\n"
           "2. Papel\n"
           "3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &jogador);

    computador = rand() % 3 + 1;

    switch (jogador)
    {
    case 1:
        printf("Jogador: Pedra - ");
        break;
    case 2:
        printf("Jogador: Papel - ");
        break;
    case 3:
        printf("Jogador: Tesoura - ");
        break;
    default:
        printf("Opção Inválida\n");
        break;
    }

    switch (computador)
    {
    case 1:
        printf("Computador: Pedra\n");
        break;
    case 2:
        printf("Computador: Papel\n");
        break;
    case 3:
        printf("Computador: Tesoura\n");
        break;
    }

    if (jogador == computador)
    {
        printf("Empate\n");
    }
    else if ((jogador == 1 && computador == 3) || (jogador == 2 && computador == 1) || (jogador == 3 && computador == 2))
    {
        printf("Parabéns, você ganhou!");
    }
    else
    {
        printf("Você Perdeu!");
    }

    return 0;
}
