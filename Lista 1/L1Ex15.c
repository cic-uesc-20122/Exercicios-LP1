/*Implemente um algoritmo que leia dois caracteres do teclado e retorne
a) O código numérico correspondente na tabela ASCII do primeiro caractere.
b) O código numérico correspondente na tabela ASCII do segundo caractere.
c) O caractere que está logo a seguir, na tabela ASCII, do primeiro caractere.
d) O caractere que antecede, na tabela ASCII, o segundo caractere.
e) O caractere que está, na tabela ASCII, no meio entre o primeiro e o segundo caractere.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    char car_1, car_2;  //Declaração das variaveis!

    printf("entre com dois caracteres:\nCar_1: ");

    scanf("%c", &car_1);    //Entrada de valores!

    printf("\nCar_2: ");

    scanf(" %c", &car_2);   //Entrada de valores!

    printf("\nCodigo numerico do caractere %c: %d\n", car_1, car_1);    //Impressão do Resultado!
    printf("Codigo numerico do caractere %c: %d\n", car_2, car_2);
    printf("O caractere que esta logo a seguir do caractere %c: %c\n", car_1, car_1+1);
    printf("O caractere que esta logo a seguir do caractere %c: %c\n", car_2, car_2-1);
    printf("O caractere que esta no meio entre o primeiro e o segundo caractere: %c",(car_1+car_2)/2);
    return 0;
}
