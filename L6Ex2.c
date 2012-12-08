/*Implemente uma fun��o que recebe os tr�s valores reais e retorne
� 0 (falso) se estes valores n�o podem ser os lados de um tri�ngulo. Para que se possa
construir um tri�ngulo � necess�rio que a medida de qualquer um dos lados seja
menor que a soma das medidas dos outros dois e maior que o valor absoluto da
diferen�a entre essas medidas (http://pt.wikipedia.org/wiki/Triangulo);
� 1 se o tri�ngulo caracterizado por estas dimens�es for is�scele;
� 2 se o tri�ngulo caracterizado por estas dimens�es for equil�tero;
� 3 se o tri�ngulo caracterizado por estas dimens�es for escaleno;
Modifique a solu��o do exerc�cio 2 da Lista 2 utilizando esta fun��o. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int tipo(float ld1, float ld2, float ld3);

int main()
{

    float ld1, ld2, ld3;

    /* L� os lados do tri�ngulo */
    printf("Primeiro lado: ");
    scanf("%f", &ld1);
    printf("Segundo lado: ");
    scanf("%f", &ld2);
    printf("Terceiro lado: ");
    scanf("%f", &ld3);

    /* Imprime se � um tri�ngulo e qual o tipo */
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

/* Verifica se � um tri�ngulo e qual o tipo */
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
