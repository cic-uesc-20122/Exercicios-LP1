/* Escreva um programa que leia um vetor G de 20 caracteres que representa o gabarito de uma
prova. A seguir, para cada um dos alunos de uma turma, leia o vetor de respostas (R) do e
conte o número de acertos. Mostre a nota do aluno e uma mensagem APROVADO, se a nota
for maior ou igual a 6 ou REPROVADO, caso contrário. Cada questão correta vale 0,5
ponto. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    char G[20], R[20], outro;
    int i, acertos=0, cont=1;
    float nota;

    /* Gera os dados do vetor gabarito de forma aleatória */
    printf("GABARITO: \n");
    for (i=0; i<20; i++)
    {
        printf("Questao %i: ", i+1);
        G[i] = 'a' + (char)(rand() % ('e' - 'a' + 1));
        printf("%c\n", G[i]);
        //scanf(" %c", &G[i]);
    }

    /* Lê o vetor com as respostas do aluno */
    do
    {
        printf("Entre com as respostas do aluno %i: \n", cont);
        for (i=0; i<20; i++)
        {
            printf("Questao %i: ", i+1);
            scanf(" %c", &R[i]);
            if (R[i] == G[i])
                acertos++;
        }
        nota = 0.5 * acertos;
        printf("Acertos do aluno %i: %i\n", cont, acertos);
        printf("Nota do aluno %i: %.1f\n", cont, nota);
        printf("Situacao do aluno %i: ", cont);
        if (nota >= 6)
            printf("APROVADO\n");
        else
            printf("REPROVADO\n");
        cont++;
        printf("Outro aluno? (S ou N) ");
        scanf(" %c", &outro);
    }
    while(outro!='n');

    system("PAUSE");
    return 0;

}
