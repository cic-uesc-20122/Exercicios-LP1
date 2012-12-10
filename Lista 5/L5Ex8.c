/* Escreva um programa leia uma matriz de inteiros com 3 linhas e 3 colunas e mostre:
a) o somat�rio dos elementos da matriz
b) o produto dos elementos da matriz
c) o valor do maior e menor elemento da matriz
d) a quantidade de elementos n�o negativos na matriz */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int mat[3][3], i, j, soma = 0, prod = 1, maior = 0, menor = 1, n_neg = 0;

    /* L� os dados da matriz */
    for (i=0; i<3; i++)
        for (j=0; j<3; j++)
        {
            printf("Mat[%i][%i]: ", i, j);
            scanf("%i", &mat[i][j]);
        }

    /* Efetua os c�lculos */
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            soma += mat[i][j]; // Somat�rio
            prod *= mat[i][j]; // Produto
            if (mat[i][j] > maior) // Maior elemento
                maior = mat[i][j];
            if (mat[i][j] < menor) // Menor elemento
                menor = mat[i][j];
            if (mat[i][j] >= 0) // Elementos n�o negativos
                n_neg++;
        }
    }

    printf("Somatorio: %i\n", soma);
    printf("Produto: %i\n", prod);
    printf("Maior: %i\n", maior);
    printf("Menor: %i\n", menor);
    printf("Nao negativos: %i\n", n_neg);

    system("PAUSE");
    return 0;

}
