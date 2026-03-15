//increment and decrement

#include <stdio.h>

int main(){

/*
Incremento (++)
Pré-Incremento ++a
Pós-Incremento a++
Decremento (--)
Pré-Decremento --a
Pós-Decremento a--
*/

int numero1 = 1, resultado;

printf("Antes incremento: %d\n", numero1);
numero1++;
printf("Após incremento: %d\n", numero1);
numero1 --;
printf("Após decremento: %d\n", numero1);
/*
Incremento é igual adicionar 1 e decremento é igual remover 1
exemplo: numero1 + 1 ou numero1 - 1
*/

/*
Agora explicando o pré e pós incremento
*/

int numero2 =5, resultado2;

printf("Antes do Pré incremento, numero2: %d, resultado: %d\n", numero2, resultado2);

resultado2 = ++numero2;
printf("pós do Pré incremento, numero2: %d, resultado: %d\n", numero2, resultado2);

resultado2 = --numero2;
printf("depois do Pré decremento, numero2: %d, resultado: %d\n", numero2, resultado2);

resultado2 = numero2++;
printf("depois do Pós incremento, numero2: %d, resultado: %d\n", numero2, resultado2);

resultado2 = numero2--;
printf("depois do Pós decremento, numero2: %d, resultado: %d\n", numero2, resultado2);

/*
Em resumo essa função serve para o resultado2 receber = o mesmo valor do numero2
quando eu faço alguma alteração pré, por exemplo resultado = ++numero, ambos
recebem essa alteração pq ela foi feita antes de eu atribuir o valor
igual para as 2 variaveis "resultado e numero"
porém quando eu faço alguma alteração pós, eu vou primeiro igualar o valor do resultado
ao valor do numero, e só após eu vou fazer um incremento ou decremento no numero
exemplo, se o numero valia 5 e o resultado 0, dai eu faço: resultado = numero--;
eu to dizendo: resultado = 5, após isso, numero é 5-1 ou seja 4, minha resposta fica 
resultado: 5 e numero: 4
*/



return 0;

}