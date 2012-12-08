/*Implemente uma função que recebe os três valores reais e retorne
• 0 (falso) se estes valores não podem ser os lados de um triângulo. Para que se possa
construir um triângulo é necessário que a medida de qualquer um dos lados seja
menor que a soma das medidas dos outros dois e maior que o valor absoluto da
diferença entre essas medidas (http://pt.wikipedia.org/wiki/Triangulo);
• 1 se o triângulo caracterizado por estas dimensões for isóscele;
• 2 se o triângulo caracterizado por estas dimensões for equilátero;
• 3 se o triângulo caracterizado por estas dimensões for escaleno;
Modifique a solução do exercício 2 da Lista 2 utilizando esta função. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int tipo(float ld1, float ld2, float ld3);

int main()
{

    float ld1, ld2, ld3;

    /* Lê os lados do triângulo */
    printf("Primeiro lado: ");
    scanf("%f", &ld1);
    printf("Segundo lado: ");
    scanf("%f", &ld2);
    printf("Terceiro lado: ");
    scanf("%f", &ld3);

    /* Imprime se é um triângulo e qual o tipo */
    if (!tipo(ld1, ld2, ld3))
        printf("Nao e triangulo\n");
    if (tipo(ld1, ld2, ld3) == 1)
        printf("Isosceles\n");
    if (tipo(ld1, ld2, ld3) == 2)
        printf("Equilatero\n");
    if (tipo(ld1, ld2, ld3) == 3)
        printf("Escaleno\n");

    system("PAUSE");
    return 0;

}

/* Verifica se é um triângulo e qual o tipo */
int tipo(float ld1, float ld2, float ld3)
{

    int cond = 0;

    if (abs(ld2-ld3) < ld1 && ld1 < (ld2+ld3))
    {
        if (ld1 == ld2 && ld2 == ld3)
            cond = 2;
        if (ld1 != ld2 && ld2 != ld3)
            cond = 3;
        if (ld1 == ld2 && ld1 != ld3 || ld1 == ld3 && ld1 != ld2 || ld2 == ld3 && ld2 != ld1)
            cond = 1;
    }

    return cond;

}
