/*Dado o tamanho das arestas de um retangulo calcular a área e o perimetro do mesmo.
Lembrar que dados a e b, arestas adjacentes de um retangulo, pode se calcular: a área (area)
como A=a*b ; o perímetro (per) como P=2∗(a+b).*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int alt, lar, area, per;    //Declaração das variaveis!

    printf("Esse programa vai dar area e perimetro do retangulo");
    printf("\nEntre com a altura:");

    scanf("%d", &alt);  //Entrada de valores!

    printf("Entre com a largura:");

    scanf("%d",&lar);   //Entrada de valores!

    area = (alt * lar); //Operação com as variaveis!
    per = 2 * ( alt + lar); //Operação com as variaveis!

    printf("A area:%d ", area); //Impressão de Resultado!
    printf("\nO perimetro:%d\n ", per);

    system("PAUSE");
    return 0;
}
