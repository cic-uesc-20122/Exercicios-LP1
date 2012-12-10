/* Implemente uma função que, dado um número n, retorne verdadeiro se ele for um número
perfeito. Um número é perfeito se ele for igual a soma de seus fatores (excluindo o próprio
numero). Ex: 6 é perfeito, 6 = 3 + 2 + 1. Modifique a solução do exercício 10 da Lista 2
utilizando esta função. */

#include <stdio.h>
#include <stdlib.h>

int perf(int num);

int main()
{

    int num;

    /* Lê o número */
    printf("Entre com o numero: ");
    scanf("%i", &num);

    if (perf(num))
        printf("Perfeito\n");
    else
        printf("Nao e perfeito\n");

    system("PAUSE");
    return 0;

}

/* Verifica se o número é ou não perfeito */
int perf(int num)
{

    int cond = 0, cont, fat = 0;

    for (cont=1; cont<num; cont++)
    {
        if (num%cont == 0)
            fat+=cont;
    }
    if (fat==num)
        cond = 1;

    return cond;

}
