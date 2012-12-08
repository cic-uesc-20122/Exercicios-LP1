/* Escreva um programa que leia um vetor de tamanho n e informe o somatório dos elementos
de índice par e o produto dos elementos de índice ímpar. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float vet[100], som=0, prod=1;
    int i, N;

    /* Lê o tamanho do vetor */
    printf("Entre com N (<= 100): ");
    scanf("%i", &N);

    /* Lê os dados do vetor */
    for (i=0; i<N; i++)
    {
        printf("Vet[%i]: ", i);
        scanf("%f", &vet[i]);
    }

    /* Efetua os cálculos */
    for (i=0; i<N; i++)
    {
        if (i==0)
            som += vet[i];
        else
            if (i%2 == 0)
                som += vet[i];
            else
                prod *= vet[i];
    }

    printf("Soma (par): %.2f\n", som);
    printf("Produto (impar): %.2f\n", prod);

    system("PAUSE");
    return 0;

}
