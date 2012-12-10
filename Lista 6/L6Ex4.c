/* Implemente uma função que retorne verdadeiro se um número inteiro é primo. Modifique a
solução do exercício 4 da Lista 2 utilizando esta função. */

#include <stdio.h>
#include <stdlib.h>

int primo(int num);

int main()
{

    int num;

    /* Lê o número */
    printf("Entre com o numero: ");
    scanf("%d", &num);

    /* Através de uma função, verifica e imprime se um número é par ou primo */
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

/* Verifica se um número é primo */
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
