/*Dado o tamanho da aresta de um quadrado calcular a �rea e o per�metro do mesmo. Lembrar
que dado a, aresta de um quadrado, pode se calcular: a �rea (A) como A=a*a ; o per�metro
(P) como P=4*a.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int lad, area, per; //Declara��o das variaveis!

    printf("Para calcular area e perimetro\nInforme o lado:");

    scanf("%d", &lad);  //Entrada de valores!

    area = (lad * lad); //Opera��o com as variaveis!
    per = (4 * lad);    //Opera��o com as variaveis!

    printf("A area:%d", area);  //Impress�o de Resultado!
    printf("\nO perimetro:%d\n", per);

    system("PAUSE");
    return 0;
}
