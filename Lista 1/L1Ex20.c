/*Dado um n�mero inteiro n, implementar um algoritmo para determinar a soma
de todos os n primeiros n�meros �mpares.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, S;   //Declara��o das variaveis!

    printf("Escreva um numero e veja qual valor de todos os seu n primeiros impares!\nInforme n!");

    scanf("%d", &n);    //Entrada de valores!

    S = n*n;    //Opera��o com as variaveis!

    printf("A soma do n termos impares e igual: %d", S);    //Impress�o de Resultado!

    return 0;
}
