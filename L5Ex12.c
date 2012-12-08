/* Escreva um programa que leia duas matrizes. O programa deverá mostrar o resultado de
multiplicar as duas matrizes. Lembre de verificar se a operação é possível. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float matA[100][100], matB[100][100], prod[100][100] = { {0} };
    int i, j, k, I, J, I_, J_;

    /* Lê a quantidade de linhas e colunas das duas matrizes */
    do
    {
        printf("Matriz A: \n");
        printf("Linhas: ");
        scanf("%i", &I);
        printf("Colunas: ");
        scanf("%i", &J);
        printf("Matriz B: \n");
        printf("Linhas: ");
        scanf("%i", &I_);
        printf("Colunas: ");
        scanf("%i", &J_);
        if (J != I_)
            printf("Colunas de A diferente de linhas de B!!\n");
    }
    while(J != I_);

    /* Lê as duas matrizes */
    for (i=0; i<I; i++)
        for (j=0; j<J; j++)
        {
            printf("MatA[%i][%i]: ", i, j);
            scanf("%f", &matA[i][j]);
        }
    for (i=0; i<I_; i++)
        for (j=0; j<J_; j++)
        {
            printf("MatB[%i][%i]: ", i, j);
            scanf("%f", &matB[i][j]);
        }

    /* Efetua os cálculos */
    for (i=0; i<I; i++)
        for (j=0; j<J_; j++)
            for (k=0; k<J; k++)
                prod[i][j] += matA[i][k] * matB[k][j];

    /* Imprime a matriz resultante */
    for (i=0; i<I; i++)
    {
        for (j=0; j<J_; j++)
            printf("%.2f\t", prod[i][j]);
        printf("\n");
    }

    system("PAUSE");
    return 0;

}
