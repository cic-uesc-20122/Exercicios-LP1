/*Implemente uma aplicativo que recebe uma temperatura em graus Fahrenheit e retorna o
valor equivalente em graus Celsius.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float C, F; //Declaração das variaveis!
    int temp;   //Declaração das variaveis!

    printf("Que tipo de conversão vai fazer!\n1-Celsius para Fahrenheit.\n2-Fahrenheit para Celsius.\n");

    scanf("%d", &temp); //Entrada de valores!

    switch(temp){   //Escolha de Operação!
        case 1 :
            printf("Temperatura: ");

            scanf("%f", &C);    //Entrada de valores!

            F = (C*9)/5;    //Operação com as variaveis!
            F = F-32;

            printf("A Temperatura de Celsius para Fahrenheit ficou: %.2f", F);  //Impressão de Resultado!
            break;
        case 2 :
            printf("Temperatura: ");

            scanf("%f", &F);    //Entrada de valores!

            C = (5*(F-32))/9;   //Operação com as variaveis!
            printf("A Temperatura de Fahrenheit para Celsius ficou: %.2f", C);  //Impressão de Resultado!
            break;
        }
    return 0;
}
