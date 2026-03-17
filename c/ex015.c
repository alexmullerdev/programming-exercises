//conditionals with arrays and loops

#include <stdio.h>

#define LINHA 3
#define COLUNA 3

int main()
{

    int matriz[LINHA][COLUNA];
    int target = 9; // Nosso alvo de busca
    int found = 0;  // Zero representa falso
    int soma = 1;

    //Criando a Matriz de 1 a 9
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            matriz[i][j] = soma;
            soma++;
            printf("%d ", matriz[i][j]); 
        }
        printf("\n");
    }

    // Busca condicional do elemento alvo
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            if (matriz[i][j] == target)
            {
                printf("O Valor %d foi encontrado no índice: %d, %d\n", target, i, j);
                found = 1; // 1 Representa verdadeiro (true)
                break;
            }
        }
        if (found) // Se found for verdadeiro, execute o break (pare o código), ou seja, se o valor de found for 1, quer dizer encontrado
            break;
    }
    if (!found) // Se !found, ou seja, se NÃO encontrado, execute o print f
    {
        printf("Valor %d não encontrado\n", target);
    }
    return 0;
}