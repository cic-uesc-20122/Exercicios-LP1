/*Implemente um algoritmo que leia dois n�meros inteiros, a e b, do teclado e retorne:
a) A soma a+b
b) A substra��o a � b
c) O produto a*b
d) A divis�o a/b
e) O resto da divi��o a%b
Repare no que acontece quando o valor de b � zero. Comente.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, R;    //Declara��o das variaveis!

    printf("Qual valor de A: ");

    scanf("%d", &a);    //Entrada de valores!

    printf("\nQual valor de B: ");

    scanf("%d", &b);    //Entrada de valores!

    R = a+b;    //Opera��o com as variaveis!
    printf("\nSoma = %d", R);   //Impress�o de Resultado!
    R = a-b;    //Opera��o com as variaveis!
    printf("\nSubtracao = %d", R);  //Impress�o de Resultado!
    R = a*b;    //Opera��o com as variaveis!
    printf("\nProduto = %d", R);    //Impress�o de Resultado!
    R = a/b;    //Opera��o com as variaveis!
    printf("\nDivisao = %d", R);    //Impress�o de Resultado!
    R = a%b;    //Opera��o com as variaveis!
    printf("\nResto = %d", R);  //Impress�o de Resultado!

    system ("PAUSE");
    return 0;
}
