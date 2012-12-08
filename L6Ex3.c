/* Implemente uma fun��o que seja capas de calcular a media do semestre de uma aluno, que
cumpriu todos os cr�ditos de uma disciplina qualquer dentro da UESC. A fun��o recebe
como par�metro o n�mero de cr�ditos e um array de float com as notas, e retorna a m�dia
do semestre. Modifique a solu��o do exerc�cio 3 da Lista 2 utilizando esta fun��o. */

#include <stdio.h>
#include <stdlib.h>

float media_sem(int q_cred, float array[100]);

int main()
{

    int cont, q_cred;
    float array[100], ms, pf, mf;

    printf("Entre com a quantidade de creditos: ");
    scanf("%i", &q_cred);

    /* L� os cr�ditos */
    for (cont = 0; cont < q_cred; cont++)
    {
        printf("Credito %i: ", cont+1);
        scanf("%f", &array[cont]);
    }

    /* Atrav�s de uma fun��o, calcula a m�dia do semestre e imprime */
    ms = media_sem(q_cred, array);
    printf("A media do semestre e: %.2f\n", ms);

    /* Se necess�rio, calcula a m�dia final */
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

/* Calcula a m�dia do semestre */
float media_sem(int q_cred, float array[100])
{

    int cont = 0;
    float ms = 0;

    for (cont=0; cont<q_cred; cont++)
        ms += array[cont];
    ms /= q_cred;

    return ms;

}
