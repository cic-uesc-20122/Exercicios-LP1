/*Dado um número inteiro determinar a soma de todos os números inteiros de zero até o
número fornecido.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, S;   //Declaração das variaveis!

    printf("Indique o numero!\n");

    scanf("%d",&n); //Entrada de valores!

    S = (n*(n+1))/2;    //Operação com as variaveis!

    printf("A soma de todos os numeros e igual:%d",S);  //Impressão de Resultado!

    return 0;
}
