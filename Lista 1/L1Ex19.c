/*Crie um algoritmo que calcule quantas notas de 50, 10, 5 e 1 são necessárias para pagar uma
conta. Considere valores inteiros.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor, n100, n50, n10, n5, n2, n1;  //Declaração das variaveis!

    printf("Informe o valor do produto!\nValor:");

    scanf("%d", &valor);    //Entrada de valores!

    n100= valor/100;        //Operação com as variaveis!
    n50= (valor%100)/50;
    n10=((valor%100)%50)/10;
    n5=(((valor%100)%50)%10)/5;
    n2=((((valor%100)%50)%10)%5)/2;
    n1=(((((valor%100)%50)%10)%5)%2)/1;

    printf("Notas de 100!\n%d",n100);   //Impressão do Resultado!
    printf("\nNotas de 50!\n%d",n50);
    printf("\nNotas de 10!\n%d",n10);
    printf("\nNotas de 5!\n%d",n5);
    printf("\nNotas de 2!\n%d",n2);
    printf("\nMoedas de 1!\n%d",n1);
    return 0;
}
