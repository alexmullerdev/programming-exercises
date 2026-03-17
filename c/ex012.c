//loops with multiple variables

#include <stdio.h>
//Trabalhando com multiplas variáveis em um único loop
int main()
{

    for (int i = 0, j = 10; i < j; i++, j--)
    {
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
}