/* Implemente as fun��es que recebem o tamanho das arestas de um ret�ngulo e :
a) Retornam verdadeiro se ele � um quadrado.
b) Retorna a �rea e o per�metro do mesmo. Lembrar que dados a e b, arestas adjacentes de
um ret�ngulo, pode se calcular: a �rea (A) como A=a*b ; o per�metro (P) como
P=2*(a+b) .
Modifique a solu��o do exerc�cio 1 da Lista 2 utilizando estas fun��es. */

#include <stdio.h>
#include <stdlib.h>

int quad(float a, float b);
float area(float a, float b);
float per(float a, float b);

int main()
{

    float a, b;

    /* L� as duas arestas */
    printf("Entre com a aresta a: ");
    scanf("%f", &a);
    printf("Entre com a aresta b: ");
    scanf("%f", &b);

    /* Imprime se � ou n�o quadrado */
    if (quad(a, b))
        printf("Quadrado\n");
    else
        printf("Nao e quadrado\n");

    /* Imprime a �rea e o per�metro */
    printf("A area e: %.2f\n", area(a,b));
    printf("O perimetro e: %.2f\n", per(a,b));

    system("PAUSE");
    return 0;

}

/* Fun��o para verificar se � quadrado */
int quad(float a, float b)
{

    int cond = 0;

    if (a==b)
        cond = 1;

    return cond;

}

/* Fun��o para calcular a �rea */
float area(float a, float b)
{

    return a*b;

}

/* Fun��o para calcular o per�metro */
float per(float a, float b)
{

    return 2*(a+b);

}
