//Nested loops

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++){//loop externo
        for (int j = 1; j <= 10; j++){//loop interno
        printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
//O loop interno se repete completamente até atinjir sua condição e 
//até que o loop externo atinja sua condição
    return 0;
}