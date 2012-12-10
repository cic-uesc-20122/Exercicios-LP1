/*Programa tira a media de cinco creditos e prova final da diciplina.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, c, d, e, media, PF, MF; //Declaração das variaveis!

    printf("Informe as notas em cada credito!\n1 Credito:");

    scanf("%f",&a); //Entrada de valores!

    printf("\n2 Credito:");

    scanf("%f",&b); //Entrada de valores!

    printf("\n3 Credito:");

    scanf("%f",&c); //Entrada de valores!

    printf("\n4 Credito:");

    scanf("%f",&d); //Entrada de valores!

    printf("\n5 Credito:");

    scanf("%f",&e); //Entrada de valores!

    media = (a + b + c + d + e) / 5;    //Operação com as variaveis!

    printf("A media nos 5 creditos foi:%.2f", media);   //Impressão do Resultado!

        if (media < 7.00) {
            printf("\nProva final:");
            scanf("%f", &PF);
            MF = ((PF * 4) + (media * 6)) / 10;
            printf("Sua Media Final foi:%.2f", MF);
        }
    return 0;
}
