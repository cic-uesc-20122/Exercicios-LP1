/* Escreva um programa que leia uma matriz e um vetor. O programa dever� mostrar o
resultado de multiplicar a matriz pelo vetor. Lembre de verificar se a opera��o � poss�vel. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float mat[100][100], vet[100], prod[100] = {0};
    int i, j, I, J;

    /* L� a quantidade de linhas e colunas */
    printf("Linhas: ");
    scanf("%i", &I);
    printf("Colunas: ");
    scanf("%i", &J);

    /* L� os dados da matriz */
    for (i=0; i<I; i++)
        for (j=0; j<J; j++)
            {
            printf("Mat[%i][%i]: ", i, j);
            scanf("%f", &mat[i][j]);
            }

    /* L� os dados do vetor */
    for (j=0; j<J; j++)
    {
        printf("Vet[%i]: ", j);
        scanf("%f", &vet[j]);
    }

    /* Efetua os c�lculos */
    for (i=0; i<I; i++)
        for (j=0; j<J; j++)
            prod[i] += mat[i][j] * vet[j];

    /* Imprime o vetor resultante */
    for (i=0; i<I; i++)
        printf("%.2f\t", prod[i]);
    printf("\n");

    system("PAUSE");
    return 0;

}
