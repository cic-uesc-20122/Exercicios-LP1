/* Escreva um programa que leia três vetores de tamanho 3 e calcule:
a) Calcule a norma de cada vetor e retorne qual a norma do vetor com maior norma (veja a
definição de norma nos slides da Aula 9).
b) Calcule o vetor resultante da soma dos três vetores. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float vet1[3], vet2[3], vet3[3], n1 = 0, n2 = 0, n3 = 0, res[3] = {0}, maior = 0;
    int i;

    /* Lê os dados do vetor 1, 2 e 3 */
    for (i=0; i<3; i++)
    {
        printf("Vet1[%i]: ", i);
        scanf("%f", &vet1[i]);
    }
    for (i=0; i<3; i++)
    {
        printf("Vet2[%i]: ", i);
        scanf("%f", &vet2[i]);
    }
    for (i=0; i<3; i++)
    {
        printf("Vet3[%i]: ", i);
        scanf("%f", &vet3[i]);
    }

    /* Cálculo da norma do vertor 1 */
    for (i=0; i<3; i++)
        n1 += vet1[i]*vet1[i];
    n1 = sqrt(n1);
    printf("Norma Vet1: %.2f\n", n1);
    if (n1 > maior)
        maior = n1;

    /* Cálculo da norma do vetor 2 */
    for (i=0; i<3; i++)
        n2 += vet2[i]*vet2[i];
    n2 = sqrt(n2);
    printf("Norma Vet2: %.2f\n", n2);
    if (n2 > maior)
        maior = n2;

    /* Cálculo da norma do vetor 3 */
    for (i=0; i<3; i++)
        n3 += vet3[i]*vet3[i];
    n3 = sqrt(n3);
    printf("Norma Vet3: %.2f\n", n3);
    if (n3 > maior)
        maior = n3;

    printf("Maior norma: %.2f\n", maior);

    /* Imprime o vetor resultante */
    for (i=0; i<3; i++)
    {
        res[i] = vet1[i] + vet2[i] + vet3[i];
        printf("%.2f\t", res[i]);
    }
    printf("\n");

    system("PAUSE");
    return 0;

}
