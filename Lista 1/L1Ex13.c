/*Implemente um algoritmo que leia dois números inteiros, a e b, do teclado e retorne:
a) A soma a+b
b) A substração a – b
c) O produto a*b
d) A divisão a/b
e) O resto da divição a%b
Repare no que acontece quando o valor de b é zero. Comente.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, R;    //Declaração das variaveis!

    printf("Qual valor de A: ");

    scanf("%d", &a);    //Entrada de valores!

    printf("\nQual valor de B: ");

    scanf("%d", &b);    //Entrada de valores!

    R = a+b;    //Operação com as variaveis!
    printf("\nSoma = %d", R);   //Impressão de Resultado!
    R = a-b;    //Operação com as variaveis!
    printf("\nSubtracao = %d", R);  //Impressão de Resultado!
    R = a*b;    //Operação com as variaveis!
    printf("\nProduto = %d", R);    //Impressão de Resultado!
    R = a/b;    //Operação com as variaveis!
    printf("\nDivisao = %d", R);    //Impressão de Resultado!
    R = a%b;    //Operação com as variaveis!
    printf("\nResto = %d", R);  //Impressão de Resultado!

    system ("PAUSE");
    return 0;
}
