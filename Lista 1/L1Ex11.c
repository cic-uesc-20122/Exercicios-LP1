/*Procure a formula para calcular o volume de um objeto geom�trico, escolha o da sua
prefer�ncia, e implemente o calculo deste volume.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float h, r, V;  //Declara��o das variaveis!
    const pi=3.14;  //Declara��o das variaveis!

    printf("Calcule o volume do cilindro informe altura e raio!\nAltura:");

    scanf("%f",&h); //Entrada de valores!

    printf("\nRaio:");

    scanf("%f",&r); //Entrada de valores!

    V = (pi * (r * r))*h;   //Opera��o com as variaveis!

    printf("O volume:%.2f", V); //Impress�o de Resultado!

    return 0;
}
