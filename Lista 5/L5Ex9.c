/* Escreva um programa que leia uma matriz de dimensões arbitrárias (m linhas e n colunas) e
crie um vetor (m elementos) com a suma dos elementos de uma mesma linha. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int m, n, i, j;
    float mat[100][100], vet[100] = {0};

    /* Lê quantidade de linhas e colunas */
    printf("Linhas (m): ");
    scanf("%i", &m);
    printf("Colunas (n): ");
    scanf("%i", &n);

    /* Efetua os cálculos */
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
        {
            printf("Mat[%i][%i]: ", i, j);
            scanf("%f", &mat[i][j]);
            vet[i] += mat[i][j];
        }

    /* Imprime a matriz */
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
            printf("%.2f\t", mat[i][j]);
        printf("\n");
    }
    printf("\n");

    /* Imprime o vetor */
    for (i=0; i<m; i++)
        printf("%.2f\t", vet[i]);
    printf("\n");

    system("PAUSE");
    return 0;

}
