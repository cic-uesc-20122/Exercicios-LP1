/*Implemente um algoritmo que leia dois números reais, a e b, do teclado e retorne:
a) A soma a+b
b) A substração a – b
c) O produto a*b
d) A divisão a/b
e) O valor médio (a+b)/2
Repare no que acontece quando o valor de b é zero. Comente.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, R;  //Declaração das variaveis!

    printf("Qual valor de A: ");

    scanf("%f", &a);    //Entrada de valores!

    printf("\nQual valor de B: ");

    scanf("%f", &b);    //Entrada de valores!

    R = a+b;    //Operação com as variaveis!
    printf("\nSoma = %.2f", R); //Impressão do Resultado!
    R = a-b;    //Operação com as variaveis!
    printf("\nSubtracao = %.2f", R);    //Impressão do Resultado!
    R = a*b;    //Operação com as variaveis!
    printf("\nProduto = %.2f", R);  //Impressão do Resultado!
    R = a/b;    //Operação com as variaveis!
    printf("\nDivisao = %.2f", R);  //Impressão do Resultado!
    R = (a+b)/2;    //Operação com as variaveis!
    printf("\nMedia = %.2f", R);    //Impressão do Resultado!

    return 0;
}
