/*Dado um n�mero inteiro determinar a soma de todos os n�meros inteiros de zero at� o
n�mero fornecido.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, S;   //Declara��o das variaveis!

    printf("Indique o numero!\n");

    scanf("%d",&n); //Entrada de valores!

    S = (n*(n+1))/2;    //Opera��o com as variaveis!

    printf("A soma de todos os numeros e igual:%d",S);  //Impress�o de Resultado!

    return 0;
}
