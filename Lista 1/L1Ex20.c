/*Dado um número inteiro n, implementar um algoritmo para determinar a soma
de todos os n primeiros números ímpares.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, S;   //Declaração das variaveis!

    printf("Escreva um numero e veja qual valor de todos os seu n primeiros impares!\nInforme n!");

    scanf("%d", &n);    //Entrada de valores!

    S = n*n;    //Operação com as variaveis!

    printf("A soma do n termos impares e igual: %d", S);    //Impressão de Resultado!

    return 0;
}
