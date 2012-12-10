/*Dado o tamanho da aresta de um quadrado calcular a área e o perímetro do mesmo. Lembrar
que dado a, aresta de um quadrado, pode se calcular: a área (A) como A=a*a ; o perímetro
(P) como P=4*a.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int lad, area, per; //Declaração das variaveis!

    printf("Para calcular area e perimetro\nInforme o lado:");

    scanf("%d", &lad);  //Entrada de valores!

    area = (lad * lad); //Operação com as variaveis!
    per = (4 * lad);    //Operação com as variaveis!

    printf("A area:%d", area);  //Impressão de Resultado!
    printf("\nO perimetro:%d\n", per);

    system("PAUSE");
    return 0;
}
