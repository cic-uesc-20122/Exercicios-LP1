/* Escreva um programa leia uma matriz de inteiros com 3 linhas e 3 colunas e imprima a
matriz na tela em forma de tabela. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int mat[3][3], i, j;

    /* Lê os dados da matriz */
    for (i=0; i<3; i++)
        for (j=0; j<3; j++)
        {
            printf("Mat[%i][%i]: ", i, j);
            scanf("%i", &mat[i][j]);
        }

    /* Imprime a matriz */
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%i\t", mat[i][j]);
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;

}
