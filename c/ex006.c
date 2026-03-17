//if else, elif

#include <stdio.h>

int main()
{

    int num1 = 8;
    int num2 = 9;

//Modelo realizando todos os testes com if else

    if (num1 > num2)
    {
        printf("O cara 1 tem um caralho maior");
    }
    else if (num1 < num2)
    {
        printf("O cara 1 tem o torosso menor");
    }
    else
    {
        printf("O cara tem o torosso igual");
    }

//Modelo simplificado com return

    if (num1 == num2)
    {
        return printf("O cara tem o torosso igual");
    }
    if (num1 < num2)
    {
        return printf("O cara 1 tem o torosso menor");
    }
    return printf("O cara tem o torosso maior");
}
