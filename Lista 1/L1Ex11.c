/*Procure a formula para calcular o volume de um objeto geométrico, escolha o da sua
preferência, e implemente o calculo deste volume.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float h, r, V;  //Declaração das variaveis!
    const pi=3.14;  //Declaração das variaveis!

    printf("Calcule o volume do cilindro informe altura e raio!\nAltura:");

    scanf("%f",&h); //Entrada de valores!

    printf("\nRaio:");

    scanf("%f",&r); //Entrada de valores!

    V = (pi * (r * r))*h;   //Operação com as variaveis!

    printf("O volume:%.2f", V); //Impressão de Resultado!

    return 0;
}
