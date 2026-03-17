//If Else

#include <stdio.h>

int main()
{

    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 12)
    {
        printf("Criança");
    }
    else if (idade >= 12 && idade < 18)
    {
        printf("Adolescente");
    }
    else if (idade >= 18 && idade < 60)
    {
        printf("Adulto");
    }
    else
    {
        printf("Idoso");
    }
    return 0;
}