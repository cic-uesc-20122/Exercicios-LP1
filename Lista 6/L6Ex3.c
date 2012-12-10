/* Implemente uma função que seja capas de calcular a media do semestre de uma aluno, que
cumpriu todos os créditos de uma disciplina qualquer dentro da UESC. A função recebe
como parâmetro o número de créditos e um array de float com as notas, e retorna a média
do semestre. Modifique a solução do exercício 3 da Lista 2 utilizando esta função. */

#include <stdio.h>
#include <stdlib.h>

float media_sem(int q_cred, float array[100]);

int main()
{

    int cont, q_cred;
    float array[100], ms, pf, mf;

    printf("Entre com a quantidade de creditos: ");
    scanf("%i", &q_cred);

    /* Lê os créditos */
    for (cont = 0; cont < q_cred; cont++)
    {
        printf("Credito %i: ", cont+1);
        scanf("%f", &array[cont]);
    }

    /* Através de uma função, calcula a média do semestre e imprime */
    ms = media_sem(q_cred, array);
    printf("A media do semestre e: %.2f\n", ms);

    /* Se necessário, calcula a média final */
    if (ms < 7)
    {
        printf("Entre com a nota da prova final: ");
        scanf("%f", &pf);
        mf=(ms*6+pf*4)/10;
        printf("A media final e: %.2f\n", mf);
    }

    system ("PAUSE");
    return 0;

}

/* Calcula a média do semestre */
float media_sem(int q_cred, float array[100])
{

    int cont = 0;
    float ms = 0;

    for (cont=0; cont<q_cred; cont++)
        ms += array[cont];
    ms /= q_cred;

    return ms;

}
