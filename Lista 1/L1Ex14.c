/*Implemente um algoritmo que leia dois n�meros reais, a e b, do teclado e retorne:
a) A soma a+b
b) A substra��o a � b
c) O produto a*b
d) A divis�o a/b
e) O valor m�dio (a+b)/2
Repare no que acontece quando o valor de b � zero. Comente.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, R;  //Declara��o das variaveis!

    printf("Qual valor de A: ");

    scanf("%f", &a);    //Entrada de valores!

    printf("\nQual valor de B: ");

    scanf("%f", &b);    //Entrada de valores!

    R = a+b;    //Opera��o com as variaveis!
    printf("\nSoma = %.2f", R); //Impress�o do Resultado!
    R = a-b;    //Opera��o com as variaveis!
    printf("\nSubtracao = %.2f", R);    //Impress�o do Resultado!
    R = a*b;    //Opera��o com as variaveis!
    printf("\nProduto = %.2f", R);  //Impress�o do Resultado!
    R = a/b;    //Opera��o com as variaveis!
    printf("\nDivisao = %.2f", R);  //Impress�o do Resultado!
    R = (a+b)/2;    //Opera��o com as variaveis!
    printf("\nMedia = %.2f", R);    //Impress�o do Resultado!

    return 0;
}
