/* Implemente uma fun��o que, dado um n�mero n, retorne verdadeiro se ele for um n�mero
perfeito. Um n�mero � perfeito se ele for igual a soma de seus fatores (excluindo o pr�prio
numero). Ex: 6 � perfeito, 6 = 3 + 2 + 1. Modifique a solu��o do exerc�cio 10 da Lista 2
utilizando esta fun��o. */

#include <stdio.h>
#include <stdlib.h>

int perf(int num);

int main()
{

    int num;

    /* L� o n�mero */
    printf("Entre com o numero: ");
    scanf("%i", &num);

    if (perf(num))
        printf("Perfeito\n");
    else
        printf("Nao e perfeito\n");

    system("PAUSE");
    return 0;

}

/* Verifica se o n�mero � ou n�o perfeito */
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
