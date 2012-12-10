/*Programa da a menor nota entre tres equipes.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, c, menor;   //Declaração das variaveis!

    printf("Entre com as notas das 3 equipes!\nNota equipe 1:");

    scanf("%f",&a); //Entrada de valores!

    menor = a;
    printf("\nNota equipe 2:");

    scanf("%f",&b); //Entrada de valores!

        if (b < menor){ //Comparação entre variaveis!
            menor = b;
        }
    printf("\nNota equipe 3:");

    scanf("%f",&c); //Entrada de valores!

        if (c < menor){ //Comparação entre variaveis!
            menor = c;
        }

    printf("A menor nota entre as 3 equipes foi:%.2f", menor); //Impressão do Resultado!
    return 0;
}
