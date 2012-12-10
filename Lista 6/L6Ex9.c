/* Implemente uma fun��o que receba as coordenadas de um ponto ( x p , y p ) e retorne em
qual quadrante (1, 2, 3 ou 4) ele se encontra. A fun��o retorna 0 se os pontos est�o sobre os
eixos coordenados. Modifique a solu��o do exerc�cio 14 da Lista 2 utilizando esta fun��o. */

#include <stdio.h>
#include <stdlib.h>

int quadrante(float xp, float yp);

int main()
{

    float xp, yp;

    /* L� os dados */
    printf("Entre com Xp: ");
    scanf("%f", &xp);
    printf("Entre com Yp: ");
    scanf("%f", &yp);

    if (quadrante(xp, yp))
        printf("%i quadrante\n", quadrante(xp, yp));
    else
        printf("Pontos sobre os eixos coordenados\n");

    system("PAUSE");
    return 0;

}

/* Retorna em qual quadrante determinado ponto se encontra */
int quadrante(float xp, float yp)
{

    int quad = 0;

    if (xp > 0 && yp > 0)
        quad = 1;
    if (xp < 0 && yp > 0)
        quad = 2;
    if (xp < 0 && yp < 0)
        quad = 3;
    if (xp > 0 && yp < 0)
        quad = 4;

    return quad;

}
