/* Fa�a um programa para calcular a maior diferen�a entre dois elementos consecutivos de um
vetor a, com N elementos. O tamanho do vetor e seus elementos dever� ser lido via teclado. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    float vet[100], dif, maior = 0;
    int i, N;

    /* L� o tamanho do vetor */
    printf("Entre com N (<= 100): ");
    scanf("%i", &N);

    /* L� os dados do vetor */
    for (i=0; i<N; i++)
    {
        printf("Entre com Vet[%i]: ", i);
        scanf("%f", &vet[i]);
    }

    /* Calcula a maior diferen�a entre dois elementos consecutivos do vetor */
    for (i=0; i<N-1; i++)
    {
        dif = vet[i+1] - vet[i];
        if (dif>maior)
            maior=dif;
    }

    printf("Maior diferenca: %.2f\n", maior);

    system("PAUSE");
    return 0;

}
