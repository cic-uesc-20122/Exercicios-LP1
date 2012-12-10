/* Implemente as funções que recebem o tamanho das arestas de um retângulo e :
a) Retornam verdadeiro se ele é um quadrado.
b) Retorna a área e o perímetro do mesmo. Lembrar que dados a e b, arestas adjacentes de
um retângulo, pode se calcular: a área (A) como A=a*b ; o perímetro (P) como
P=2*(a+b) .
Modifique a solução do exercício 1 da Lista 2 utilizando estas funções. */

#include <stdio.h>
#include <stdlib.h>

int quad(float a, float b);
float area(float a, float b);
float per(float a, float b);

int main()
{

    float a, b;

    /* Lê as duas arestas */
    printf("Entre com a aresta a: ");
    scanf("%f", &a);
    printf("Entre com a aresta b: ");
    scanf("%f", &b);

    /* Imprime se é ou não quadrado */
    if (quad(a, b))
        printf("Quadrado\n");
    else
        printf("Nao e quadrado\n");

    /* Imprime a área e o perímetro */
    printf("A area e: %.2f\n", area(a,b));
    printf("O perimetro e: %.2f\n", per(a,b));

    system("PAUSE");
    return 0;

}

/* Função para verificar se é quadrado */
int quad(float a, float b)
{

    int cond = 0;

    if (a==b)
        cond = 1;

    return cond;

}

/* Função para calcular a área */
float area(float a, float b)
{

    return a*b;

}

/* Função para calcular o perímetro */
float per(float a, float b)
{

    return 2*(a+b);

}
