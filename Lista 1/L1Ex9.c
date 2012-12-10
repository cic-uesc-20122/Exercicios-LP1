/*Programa da a raiz real de uma equacao de segundo grau.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, c, x;   //Declaração das variaveis!

    printf("Esse programa calcula e mostra se sua equacao e real e so possui uma raiz!\nInforme os termos!");
    printf("\nA:");

    scanf("%f", &a);    //Entrada de valores!

    printf("\nB:");

    scanf("%f", &b);    //Entrada de valores!

    printf("\nC:");

    scanf("%f", &c);    //Entrada de valores!

        if ((b*b)!=4*a*c){  //Comparação entre operações!
            printf("\nEssa equacao possui duas raizes!");   //Impressão de Resultado!
        }

        if ((b*b)==4*a*c){  //Comparação entre operações!

            x = -b/(2*a);   //Operação com as variaveis!

            printf("\nSua equacao e real e so tem uma raiz:%.2f", x);   //Impressão de Resultado!
        }
    return 0;
}
