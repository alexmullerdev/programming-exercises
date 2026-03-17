//conditionals

#include <stdio.h>

int main()
{
    float temperatura, umidade;
    unsigned int estoque, estoqueminimo = 1000;
    //unsigned int permite apenas valores positivos e zero, dobrando o a capacidade maxima da variavel

    // Entrada de Dados do usuário
    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    // Conferência de Dados
    if (temperatura >= 30)
    {
        printf("Temperatura está alta.\n");
    }
    else
    {
        printf("Temperatura está dentro dos parâmetros\n");
    }

    if (umidade >= 50)
    {
        printf("A umidade está alta\n");
    }
    else
    {
        printf("A umidade está dentro dos parâmetros\n");
    }

    if (estoque < estoqueminimo)
    {
        printf("O Estoque está abaixo do mínimo\n");
    }
    else
    {
        printf("O Estoque está dentro dos parâmetros\n");
    }
    return 0;
}