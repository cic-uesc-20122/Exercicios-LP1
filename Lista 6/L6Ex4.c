/* Implemente uma fun��o que retorne verdadeiro se um n�mero inteiro � primo. Modifique a
solu��o do exerc�cio 4 da Lista 2 utilizando esta fun��o. */

#include <stdio.h>
#include <stdlib.h>

int primo(int num);

int main()
{

    int num;

    /* L� o n�mero */
    printf("Entre com o numero: ");
    scanf("%d", &num);

    /* Atrav�s de uma fun��o, verifica e imprime se um n�mero � par ou primo */
    if ((num%2) == 0 && num != 0)
    {
        printf("O numero e par\n");
    }
    else
        if (primo(num))
            printf("Primo\n");
        else
            printf("Nao e primo\n");

    system("PAUSE");
    return 0;

}

/* Verifica se um n�mero � primo */
int primo(int num)
{

    int cont;
    int tipo = 1;

    for (cont=num-1; cont > 1; cont--)
        if ((num%cont)==0)
            tipo = 0;
    if (num==1 || num == 0)
        tipo = 0;

    return tipo;

}
