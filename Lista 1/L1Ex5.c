/*Programa para calcular perimetro do triangulo*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, P; //Declara��o das variaveis!

    printf("Esse programa calcula o perimetro do triangulo!\nInforme seus lados!\nLado A:");

    scanf("%d",&a); //Entrada de valores!

    printf("\nLado B:");

    scanf("%d",&b); //Entrada de valores!

    printf("\nLado C:");

    scanf("%d",&c); //Entrada de valores!

    P = a + b + c;  //Opera��o com as variaveis!

    printf("O perimetro:%d", P);    //Impress�o do Resultado!

    return 0;
}
