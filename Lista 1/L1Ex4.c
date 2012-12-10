/*Dado o tamanho do raio de uma circunferência calcular a área e o perímetro da mesma.
Lembrar que dado r, raio de uma circunferência, pode se calcular: a área (A) como
A=π r*r ; o perímetro (P) como P=2*π*r.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float r, A, P;  //Declaração das variaveis!
    const pi=3.14;  //Declaração das variaveis!

    printf("Para calcular area e perimetro da cincunferencia\nEntre com o raio:");

    scanf("%f", &r);    //Entrada de valores!

    A = pi * (r * r);   //Operação com as variaveis!
    P = 2 * pi * r;

    printf("A area:%.2f", A);   //Impressão do Resultado!
    printf("\nO perimetro:%.2f\n", P);

    system("PAUSE");
    return 0;
}
