/*Implemente uma aplicativo que recebe uma temperatura em graus Fahrenheit e retorna o
valor equivalente em graus Celsius.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float C, F; //Declara��o das variaveis!
    int temp;   //Declara��o das variaveis!

    printf("Que tipo de convers�o vai fazer!\n1-Celsius para Fahrenheit.\n2-Fahrenheit para Celsius.\n");

    scanf("%d", &temp); //Entrada de valores!

    switch(temp){   //Escolha de Opera��o!
        case 1 :
            printf("Temperatura: ");

            scanf("%f", &C);    //Entrada de valores!

            F = (C*9)/5;    //Opera��o com as variaveis!
            F = F-32;

            printf("A Temperatura de Celsius para Fahrenheit ficou: %.2f", F);  //Impress�o de Resultado!
            break;
        case 2 :
            printf("Temperatura: ");

            scanf("%f", &F);    //Entrada de valores!

            C = (5*(F-32))/9;   //Opera��o com as variaveis!
            printf("A Temperatura de Fahrenheit para Celsius ficou: %.2f", C);  //Impress�o de Resultado!
            break;
        }
    return 0;
}
