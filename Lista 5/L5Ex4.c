/* Construa um programa que leia dois n�meros inteiros a e b, um vetor x de tamanho n e
exiba como resposta a contagem de quantos elementos do vetor est�o no intervalo a<x[i]<v. */

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main()
{

    float x[N];
    int a, b, i, quant=0;

    /* L� dois n�meros inteiros a e b */
    printf("Entre com a: ");
    scanf("%i", &a);
    printf("Entre com b: ");
    scanf("%i", &b);

    /* L� o vetor */
    for (i=0; i<N; i++)
    {
        printf("Vet[%i]: ", i);
        scanf("%f", &x[i]);
    }

    /* C�lcula a quantidade de elementos do vetor que est�o entre a e b */
    for (i=0; i<N; i++)
        if (x[i] > a & x[i] < b)
            quant++;

    printf("Quantidade: %i\n", quant);

    system("PAUSE");
    return 0;

}
