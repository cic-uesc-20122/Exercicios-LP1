/* Implemente uma função que recebe as coordenadas no plano cartesiano de um ponto central
de uma circunferência, ( xc , yc ), o seu raio r, e as coordenadas de um ponto qualquer, (
x p , y p ) e retorna verdadeiro se este ponto é interno à circunferência. Lembrar que para
que um ponto seja interno a distância dele ao centro da circunferência deve ser menor u
igual ao raio da mesma. A distância entre dois pontos se calcula como
d=√(xc−x p)2+( yc−y p)2 . Modifique a solução do exercício 5 da Lista 2 utilizando esta
função. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float interno(float xc, float yc, float r, float xp, float yp, float d);

int main()
{

    float xc, yc, r, xp, yp, d;

    /* Lê os dados */
    printf("Entre com as coordenadas de um ponto central: \n");
    printf("Xc: ");
    scanf("%f", &xc);
    printf("Yc: ");
    scanf("%f", &yc);
    printf("Entre com o raio da circunferencia: ");
    scanf("%f", &r);
    printf("Xp: ");
    scanf("%f", &xp);
    printf("Yp: ");
    scanf("%f", &yp);

    /* Através de uma função, verifica e imprime se um ponto é interno ou externo */
    if (interno(xc, yc, r, xp, yp, d))
        printf("Interno\n");
    else
        printf("Externo\n");

    system("PAUSE");
    return 0;

}

/* Verifica se um ponto é interno ou externo */
float interno(float xc, float yc, float r, float xp, float yp, float d)
{

    int cond = 0;

    d=sqrt((xc-xp)*(xc-xp)+(yc-yp)*(yc-yp));
    if (d<=r)
        cond = 1;

    return cond;

}
