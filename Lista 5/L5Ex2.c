/* Escreva um programa que leia dois vetores de 10 posições e faça a multiplicação dos
elementos do mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor
resultante. */

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main()
{

    float vet1[N], vet2[N], vet_[N] = {0};
    int i;

    /* Lê os dados do vetor 1 e 2 */
    for (i=0; i<N; i++)
    {
        printf("Vet1[%i]: ", i);
        scanf("%f", &vet1[i]);
    }
    for (i=0; i<N; i++)
    {
        printf("Vet2[%i]: ", i);
        scanf("%f", &vet2[i]);
    }

    /* Imprime o vetor resultante */
    printf("Vetor resultante: \n");
    for (i=0; i<N; i++)
    {
        vet_[i] += vet1[i] * vet2[i];
        printf("%.2f\t", vet_[i]);
    }
    printf("\n");

    system("PAUSE");
    return 0;

}
